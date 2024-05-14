//1 step
#define MAX_N (number)
建立節點數、邊數、節點(node)
建立鄰接矩陣 vector<int> adj[MAX_N] or int adj[MAX_N][MAX_N];
(1)如果是點上有值：建立tempvalue儲存節點值
(2)如果是邊上有值：建立統計距離的陣列 d[N]

//2 step
建置 BFS 函式(int n, int value[])
內包含 bool visited[]={false}, queue<int>
逐步推入node進入queue，並將visited[]設置為true(首先推入頂點，並將頂點d[n]=0，visit[n]=true)
依題目建立條件(EX:條件點可到達幾個點，即建立一記錄點int count; 統計總距離，即int total d)

//3 step(主迴圈)
while(!queue.empty()){
int v=queue.front();
queue.pop();
(1) 
tempvalue += value[v]; // 將當前節點的值加到 tempvalue 中
進入迴圈for (int i : adj[v])
判別!visited[i] 若true則將 visited[i] = true
q.push(i)
(2)
if(adj[v][i]==1 && !visit[i])
d[i] = d[v]+(1); (若題目是有權重邊就不是+1) ***當要問最短距離，就輸出d[所求點]；
將visited[i]設置為true
Q.push(i);(將i設置為新頂點)
//補充
視情況於主迴圈加入題目所求目標的統計
EX：輸出條件是有相連輸出距離，無則輸出NO
只要有相連，d[i]都會有值

//4 step
在主迴圈當中輸入鄰接矩陣
呼叫BFS(n)
for (int i = 0; i < m; i++) {
        int v, w;
        cin >> v >> w;
        adj[v].push_back(w); // 將邊加入相鄰串列
        adj[w].push_back(v); // 若圖是無向圖，需將兩個方向都加入
}
