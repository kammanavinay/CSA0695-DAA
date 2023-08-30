#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 10
#define MAX_COLORS 10
int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices,numColors;
int colorAssignment[MAX_VERTICES];
char colorNames[MAX_COLORS][20];
bool isSafe(int v,int c){
    for(int i=0;i<numVertices;i++){
        if(graph[v][i]&&colorAssignment[i]==c)
            return false;
    }
    return true;
}
void printSolution(){
    static int solutionCount=0;
    solutionCount++;
    printf("\nSolution %d:\n",solutionCount);
    for(int i=0;i<numVertices;i++) {
        printf("Vertex %d: Color %s\n",i+1,colorNames[colorAssignment[i]]);
    }
    printf("\n");
}
void graphColoringUtil(int v){
    if(v==numVertices){
        printSolution();
        return;
    }
    for(int c=0;c<numColors;c++) {
        if(isSafe(v,c)){
            colorAssignment[v]=c;
            graphColoringUtil(v+1);
            colorAssignment[v]=-1; 
        }
    }
}
void graphColoring(){
    graphColoringUtil(0);
}
int main(){
    printf("Enter the number of vertices: ");
    scanf("%d",&numVertices);
    printf("Enter the number of colors: ");
    scanf("%d",&numColors);
    printf("Enter color names:\n");
    for(int i=0;i<numColors;i++) {
        scanf("%s",colorNames[i]);
    }
    printf("Enter the adjacency matrix:\n");
    for(int i=0;i<numVertices;i++){
        for(int j=0;j<numVertices;j++){
            scanf("%d",&graph[i][j]);
        }
    }
    for(int i=0;i<numVertices;i++){
        colorAssignment[i]=-1;
    }
    graphColoring();
}


