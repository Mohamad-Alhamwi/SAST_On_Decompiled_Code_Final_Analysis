
undefined8 FUN_00101f3d(undefined8 param_1)

{
  return param_1;
}




void FUN_001020f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010174f(void)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 5;
  FUN_00101a60(local_58);
  local_68 = &local_60;
                    /* try { // try from 00101795 to 001017d2 has its CatchHandler @ 0010181e */
  FUN_00101b18(local_58,&local_68);
  FUN_00101b18(local_58,&local_68);
  FUN_00101b18(local_58,&local_68);
  FUN_00101b52(local_38,local_58);
                    /* try { // try from 001017da to 001017de has its CatchHandler @ 00101809 */
  FUN_0010147e(local_38);
  FUN_00101a80(local_38);
  FUN_00101a80(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c1e(undefined8 param_1)

{
  FUN_00101ec2(param_1);
  return;
}




void FUN_00102a13(void)

{
  return;
}




void FUN_00101ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f3d(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f50(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010201a(param_1,1);
  return;
}




void FUN_00102504(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102957(void)

{
  return 1;
}




undefined8 * FUN_00102134(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




long FUN_001022e8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_0010299a(void)

{
  return;
}




void FUN_0010162e(undefined8 param_1)

{
  FUN_0010164c(param_1);
  return;
}




void FUN_0010217a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f3d(param_2);
  uVar2 = FUN_0010155c(param_1);
  FUN_00101ccc(param_1,uVar2,uVar1);
  return;
}




void FUN_001026b3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a29(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_001021db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102340(param_1,param_2,param_3);
  return;
}




void FUN_001029dc(void)

{
  return;
}




void FUN_00102a1e(void)

{
  return;
}




void FUN_00101a20(undefined8 param_1)

{
  FUN_00101acc(param_1);
  return;
}




void FUN_001029f2(void)

{
  return;
}




undefined8 FUN_00102bb4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010201a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101ec2(void)

{
  return;
}




void FUN_001020ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010209c(param_2);
  FUN_00102072(param_1,uVar1);
  FUN_001019ca(param_1);
  return;
}




void FUN_00101a40(undefined8 param_1)

{
  FUN_00101aa0(param_1);
  return;
}




void FUN_00102d30(void)

{
  return;
}




undefined8 FUN_0010155c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015ee(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024aa(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101ed2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010165e(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a60(local_58);
  local_60 = 0;
                    /* try { // try from 0010169c to 001016d9 has its CatchHandler @ 00101725 */
  FUN_00101b18(local_58,&local_60);
  FUN_00101b18(local_58,&local_60);
  FUN_00101b18(local_58,&local_60);
  FUN_00101b52(local_38,local_58);
                    /* try { // try from 001016e1 to 001016e5 has its CatchHandler @ 00101710 */
  FUN_00101449(local_38);
  FUN_00101a80(local_38);
  FUN_00101a80(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102395(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a80(undefined8 param_1)

{
  FUN_00101aec(param_1);
  return;
}




void FUN_00102484(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102c50(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001029fd(void)

{
  return;
}




void FUN_0010147e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014fe(param_1);
  FUN_0010255a(*(undefined8 *)*puVar1);
  return;
}




void FUN_00101a60(undefined8 param_1)

{
  FUN_00101a40(param_1);
  return;
}




void FUN_00101e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_0010210e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102158(&local_18);
    FUN_0010217a(local_10,uVar2);
    FUN_00102134(&local_18);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102688(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d2d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102044(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a34(void)

{
  return;
}




void FUN_00101b52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d7e(param_2);
  FUN_00101d2d(&local_21,uVar1);
  FUN_00101d90(param_1,&local_21);
  FUN_00101acc(&local_21);
  uVar1 = FUN_00101e18(param_2);
  uVar2 = FUN_00101dc8(param_2);
                    /* try { // try from 00101bde to 00101be2 has its CatchHandler @ 00101be5 */
  FUN_00101e64(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010155c(param_1);
  FUN_00101ccc(param_1,uVar1,param_2);
  return;
}




void FUN_00101aec(undefined8 param_1)

{
  FUN_00101c4e(param_1);
  FUN_00101a20(param_1);
  return;
}




void FUN_001025b0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102232(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102395(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101c4e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010160c(local_20);
    uVar3 = FUN_00101ed2(param_1);
    FUN_00101ee4(uVar3,uVar2);
    FUN_00101f0e(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010160c(long param_1)

{
  FUN_0010162e(param_1 + 0x10);
  return;
}




undefined8 FUN_0010194e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102484("Calling good()...");
  FUN_00101939();
  FUN_00102484("Finished good()");
  FUN_00102484("Calling bad()...");
  FUN_0010165e();
  FUN_00102484("Finished bad()");
  return 0;
}




void FUN_001015cc(undefined8 *param_1)

{
  FUN_0010160c(*param_1);
  return;
}




void FUN_00102c8e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102606(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a08(void)

{
  return;
}




void FUN_00101939(void)

{
  FUN_0010174f();
  FUN_00101848();
  return;
}




void FUN_001014fe(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010155c(param_1);
  FUN_001015a8(&local_18);
  FUN_001015cc(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010164c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010209c(param_2);
  FUN_001020ae(param_1,uVar1);
  return;
}




undefined8 FUN_00101dc8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020f0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101aa0(undefined8 param_1)

{
  FUN_00101c1e(param_1);
  FUN_001019ca(param_1);
  return;
}




void FUN_00101f0e(undefined8 param_1,undefined8 param_2)

{
  FUN_001021db(param_1,param_2,1);
  return;
}




void FUN_00101449(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014fe(param_1);
  FUN_0010255a(*(undefined8 *)*puVar1);
  return;
}




undefined8 FUN_00102044(undefined8 param_1,undefined8 param_2)

{
  FUN_00102072(param_1,param_2);
  return param_1;
}




void FUN_001025db(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001026e1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001015ee(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101ee4(undefined8 param_1,undefined8 param_2)

{
  FUN_001021c8(param_1,param_2);
  return;
}




void FUN_0010220e(undefined8 param_1)

{
  FUN_00102367(param_1,1);
  return;
}




void FUN_0010230a(void)

{
  return;
}




void FUN_001029bb(void)

{
  return;
}




void FUN_001029d1(void)

{
  return;
}




void FUN_0010298f(void)

{
  return;
}




void FUN_00102a55(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029b0(void)

{
  return;
}




void FUN_00102cc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 FUN_001019b3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_00102878(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00102975(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




bool FUN_00102b59(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_0010240a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010246c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_0010210e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001023ec(undefined8 param_1)

{
  FUN_0010245a(param_1);
  return;
}




void FUN_00101848(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a60(local_58);
  local_60 = 0;
                    /* try { // try from 00101886 to 001018c3 has its CatchHandler @ 0010190f */
  FUN_00101b18(local_58,&local_60);
  FUN_00101b18(local_58,&local_60);
  FUN_00101b18(local_58,&local_60);
  FUN_00101b52(local_38,local_58);
                    /* try { // try from 001018cb to 001018cf has its CatchHandler @ 001018fa */
  FUN_001014b3(local_38);
  FUN_00101a80(local_38);
  FUN_00101a80(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




undefined8 FUN_0010209c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010246c(void)

{
  return 0x555555555555555;
}




void FUN_00102a4a(void)

{
  return;
}




undefined8 FUN_00102a8c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a55,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




undefined8 FUN_00101d7e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e18(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020f0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019ca(undefined8 param_1)

{
  FUN_001019ea(param_1);
  return;
}




void FUN_001024dc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00102774(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c3e(void)

{
  return;
}




void FUN_001029e7(void)

{
  return;
}




void FUN_00102a3f(void)

{
  return;
}




void FUN_00102714(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001029a5(void)

{
  return;
}




void FUN_00102585(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102c6f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001021c8(void)

{
  return;
}




void FUN_001019ea(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102bd7(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00102367(undefined8 param_1,undefined8 param_2)

{
  FUN_0010240a(param_1,param_2,0);
  return;
}




void FUN_00102530(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102158(undefined8 *param_1)

{
  FUN_0010231e(*param_1);
  return;
}




void FUN_001023a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f3d(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019b3(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010231e(long param_1)

{
  FUN_001023ec(param_1 + 0x10);
  return;
}




void FUN_00101acc(undefined8 param_1)

{
  FUN_00101c3e(param_1);
  return;
}




long * FUN_001015a8(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102340(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029c6(void)

{
  return;
}




undefined8 FUN_0010245a(undefined8 param_1)

{
  return param_1;
}




void FUN_001014b3(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_001014fe(param_1);
  if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
    FUN_00102484("data is NULL");
  }
  else {
    FUN_0010255a(*(undefined8 *)*plVar1);
  }
  return;
}




void FUN_001022ab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f3d(param_3);
  FUN_001023a8(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010220e(param_1);
  uVar2 = FUN_00101ed2(param_1);
  FUN_00102232(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f3d(param_2);
  uVar4 = FUN_0010160c(uVar1);
  FUN_001022ab(uVar2,uVar4,uVar3);
  FUN_001022e8(local_38,0);
  FUN_0010226c(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102072(undefined8 param_1,undefined8 param_2)

{
  FUN_0010230a(param_1,param_2);
  return;
}




void FUN_0010255a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010226c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021db(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102966(void)

{
  return 0;
}




void FUN_00102660(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}



