void	sAG1N_ang_set(void)
{
	/* ステージグリッドサイズ */
	stage_grid_size = 0.250000f;

	/* ステージ基準位置 */
	angulation_mod = -0.383000f;

	/* ステージ端座標設定 */
	stage_edge_min_x = -29.500000f;
	stage_edge_min_z = -34.500000f;
	stage_edge_max_x = 35.500000f;
	stage_edge_max_z = 35.250000f;

	/* ステージの格子数設定 */
	intersect_ct_x = 261;
	intersect_ct_z = 280;

	/* アンジュレーションデータへのポインタ設定 */
	stage_dat_tbl = (STG_TBL *)(stage_dat_addr[CmnSceneBank]);
	angu = (unsigned short *)((UINT32)stage_dat_tbl->ang_tbl + 
					stage_dat_addr[CmnSceneBank]);

	/* フィールド境界辺数設定 */
	boundary_edge_ct = 169;

	/* フィールド境界データへのポインタ設定 */
	bdr_vertex = (BDR_VERTEX *)((UINT32)stage_dat_tbl->bdr_tbl + 
					stage_dat_addr[CmnSceneBank]);
	bdr_edge = (BDR_EDGE *)((UINT32)stage_dat_tbl->edg_tbl + 
					stage_dat_addr[CmnSceneBank]);
}