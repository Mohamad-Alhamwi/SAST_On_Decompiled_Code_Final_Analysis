
void FUN_00102282(long param_1)

{
  FUN_00102b8e(param_1 + 0x20);
  return;
}




void FUN_0010408c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104360(void)

{
  return;
}




undefined8
FUN_001027e0(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102aba(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102dc4(param_3);
      uVar5 = FUN_0010278d(param_4);
      cVar1 = FUN_00101e56(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102864;
      }
    }
  }
  bVar2 = true;
LAB_00102864:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001028ca(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00103372(undefined8 *param_1)

{
  return *param_1;
}




ulong FUN_00103eaf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102aba(long param_1)

{
  return param_1 + 8;
}




void FUN_0010278d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001030b6(param_1);
  FUN_001030d8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aea(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d8a(param_1);
  FUN_00101d20(param_1,uVar1);
  FUN_001019e4(param_1);
  return;
}




void FUN_00101ef2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104008(void)

{
  return;
}




void FUN_00101d10(void)

{
  return;
}




undefined8 * FUN_0010304a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101e90(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ee(param_1,param_2);
  return;
}




undefined8 FUN_00101e7d(undefined8 param_1)

{
  return param_1;
}




void FUN_00104029(void)

{
  return;
}




void FUN_00103fdc(void)

{
  return;
}




void FUN_0010401e(void)

{
  return;
}




void FUN_00104060(void)

{
  return;
}




void FUN_0010397a(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101b28(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  FUN_00103b13(*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101de8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00103734(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001040c3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010408c,local_18);
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




void FUN_0010205a(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028e8(param_1,param_2);
  FUN_00102962(param_1,param_2);
  FUN_0010197a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fc6(void)

{
  return;
}




void FUN_00102962(void)

{
  return;
}




void FUN_00104013(void)

{
  return;
}




undefined8 FUN_00102c02(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a04(undefined8 param_1)

{
  FUN_00101a8e(param_1);
  return;
}




void FUN_001028ca(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_0010194d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103c12(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001018f7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102de2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103425(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001039de(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101b28(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  FUN_00103b13(*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e34(undefined8 *param_1)

{
  FUN_00102282(*param_1);
  return;
}




long FUN_00103146(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001034ee(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103552(param_2);
                    /* try { // try from 001031b5 to 00103247 has its CatchHandler @ 00103273 */
    uVar2 = FUN_00103146(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103568(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001034ee(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103552(local_38);
      uVar2 = FUN_00103146(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103568(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103d18(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001033b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102352(param_5);
  uVar2 = FUN_00102340(param_4);
  uVar3 = FUN_0010232e(param_3);
  FUN_0010360a(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




bool FUN_00104190(pthread_t *param_1)

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




undefined8 FUN_00102d48(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028ca(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cbf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102ad0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_0010278d(local_38);
    cVar1 = FUN_00101e56(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102169(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010217f(local_38);
    }
  }
  FUN_001028ca(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010215a(void)

{
  return;
}




void FUN_00104287(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102352(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103425(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102c3e(param_1);
  uVar2 = FUN_00102352(param_4);
  uVar3 = FUN_00102340(param_3);
  uVar4 = FUN_0010232e(param_2);
  FUN_00102c6a(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_001030d8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102938(undefined8 param_1,undefined8 param_2)

{
  FUN_0010311c(param_1,param_2);
  return;
}




undefined8 FUN_0010420e(undefined8 *param_1)

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




undefined4 FUN_00101e0e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102274(param_1);
  return unaff_EBX;
}




undefined4 FUN_00101e56(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00102224(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028ca(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001018f7(0x30,param_2);
  uVar1 = FUN_0010379d(param_3);
  uVar2 = FUN_00102282(param_2);
  uVar3 = FUN_001032f2(param_1);
  FUN_001038cc(uVar3,uVar2,uVar1);
  return;
}




long FUN_00101920(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001022a4(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010301e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101ce0(undefined8 param_1)

{
  FUN_0010215a(param_1);
  return;
}




void FUN_001036fa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010379d(param_2);
  FUN_001037b0(uVar1,uVar2);
  return;
}




void FUN_00104081(void)

{
  return;
}




void FUN_00103fe7(void)

{
  return;
}




undefined8 FUN_001041eb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d00(void)

{
  return;
}




void FUN_00101a24(undefined8 param_1)

{
  FUN_00101a04(param_1);
  return;
}




void FUN_0010357e(void)

{
  return;
}




void FUN_00101d20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102169(local_28);
    FUN_00101d20(param_1,uVar1);
    lVar2 = FUN_0010217f(local_28);
    FUN_00102196(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010332e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103592(param_1,param_2,param_3);
  return;
}




void FUN_00102a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032f2(param_1);
  FUN_0010332e(uVar1,param_2,1);
  return;
}




void FUN_00102b8e(undefined8 param_1)

{
  FUN_00103360(param_1);
  return;
}




void FUN_00103cea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101616(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined4 *local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 5;
  FUN_00101a24(local_88);
  local_90 = &local_94;
  local_58[0] = 0;
                    /* try { // try from 0010166e to 001016d7 has its CatchHandler @ 00101723 */
  plVar1 = (long *)FUN_00101b28(local_88,local_58);
  *plVar1 = (long)local_90;
  local_58[0] = 1;
  plVar1 = (long *)FUN_00101b28(local_88,local_58);
  *plVar1 = (long)local_90;
  local_58[0] = 2;
  plVar1 = (long *)FUN_00101b28(local_88,local_58);
  *plVar1 = (long)local_90;
  FUN_00101a64(local_58,local_88);
                    /* try { // try from 001016df to 001016e3 has its CatchHandler @ 0010170e */
  FUN_001039de(local_58);
  FUN_00101a44(local_58);
  FUN_00101a44(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102169(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103552(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103d4b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010190d(void)

{
  return;
}




undefined8 FUN_001028e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030ee(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104055(void)

{
  return;
}




void FUN_00103c97(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_00101b28(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101da0(param_1,param_2);
  local_28 = FUN_00101dca(param_1);
  cVar2 = FUN_00101de8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101e0e(param_1);
    uVar3 = FUN_00101e34(&local_38);
    cVar2 = FUN_00101e56(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101bc8;
    }
  }
  bVar1 = true;
LAB_00101bc8:
  if (bVar1) {
    uVar3 = FUN_00101e7d(param_2);
    FUN_00101eba(local_30,uVar3);
    FUN_00101ef2(&local_28,&local_38);
    local_38 = FUN_00101f14(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101e34(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_001038ae(undefined8 param_1)

{
  FUN_00103909(param_1);
  return;
}




void FUN_001032b5(undefined8 param_1)

{
  FUN_00101920(param_1);
  return;
}




void FUN_00103b13(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101eba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a4(param_2);
  FUN_001022b6(param_1,uVar1);
  return param_1;
}




void FUN_00101a44(undefined8 param_1)

{
  FUN_00101aea(param_1);
  return;
}




undefined8 FUN_00103438(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028ca(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001020ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104076(void)

{
  return;
}




void FUN_00102976(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001022ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102be4(param_2);
  uVar1 = FUN_00102c02(uVar1);
  FUN_00102c14(param_1,uVar1);
  return;
}




void FUN_001021d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102aba(param_1);
  uVar2 = FUN_00101d8a(param_1);
  FUN_00102ad0(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00103130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fd1(void)

{
  return;
}




long FUN_00102dae(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010403f(void)

{
  return;
}




void FUN_00101da0(undefined8 param_1,undefined8 param_2)

{
  FUN_001021d4(param_1,param_2);
  return;
}




void FUN_00101aca(undefined8 param_1)

{
  FUN_00101d10(param_1);
  return;
}




void FUN_001032d3(undefined8 param_1)

{
  FUN_0010194d(param_1);
  return;
}




undefined8 FUN_00102340(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ae1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010404a(void)

{
  return;
}




undefined4 * FUN_001034ee(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001030b6(param_2);
  puVar2 = (undefined4 *)FUN_001036fa(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_00102fc0(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_001036d5(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a4(param_2);
  FUN_00102c14(param_1,uVar1);
  return;
}




void FUN_00103488(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001036d5(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103425(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010217f(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010197a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001019a4(param_1);
  return;
}




undefined8 FUN_00101d8a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001023e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00102d48(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102aba(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102dc4(local_50);
    cVar2 = FUN_00101e56(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102dc4(local_50);
      cVar2 = FUN_00101e56(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103076(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102dae(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102dae(local_60);
          local_48[1] = 0;
          FUN_00102de2(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010304a(local_48);
          uVar6 = FUN_00102dc4(*puVar5);
          cVar2 = FUN_00101e56(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102e22(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102169(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102de2(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102fd6(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102fc0(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102fc0(local_60);
        uVar6 = FUN_00102fc0(local_60);
        FUN_00102fd6(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010301e(local_48);
        uVar6 = FUN_00102dc4(*puVar5);
        cVar2 = FUN_00101e56(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102e22(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102169(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102de2(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102fd6(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102772;
  }
  lVar3 = FUN_00102d98(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102486:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102dae(local_60);
    uVar6 = FUN_00102dc4(*puVar5);
    cVar2 = FUN_00101e56(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102486;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102dae(local_60);
    local_48[1] = 0;
    FUN_00102de2(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102e22(local_60,param_3);
  }
LAB_00102772:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001038cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010379d(param_3);
  FUN_00103928(param_1,param_2,uVar1);
  return;
}




void FUN_001037fc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001038ae(param_2);
  puVar2 = (undefined4 *)FUN_00102c02(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




undefined8 FUN_001032f2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ff2(void)

{
  return;
}




undefined8 FUN_00103360(undefined8 param_1)

{
  return param_1;
}




void FUN_0010406b(void)

{
  return;
}




void FUN_001034d0(undefined8 param_1)

{
  FUN_001036e8(param_1);
  return;
}




undefined8 FUN_00103f9d(void)

{
  return 0;
}




void FUN_00103bbc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001030ee(undefined8 param_1,undefined8 param_2)

{
  FUN_00102938(param_1,param_2);
  return param_1;
}




undefined8
FUN_00101f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102352(param_5);
  uVar2 = FUN_00102340(param_4);
  uVar3 = FUN_0010232e(param_3);
  local_40 = FUN_00102364(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f90 to 00101fd3 has its CatchHandler @ 00102011 */
  uVar1 = FUN_0010278d(local_40);
  local_38 = FUN_001023e4(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102196(param_1,local_40);
    FUN_001028ca(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001027e0(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103c3d(undefined4 param_1)

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




undefined8 FUN_00101892(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103abb("Calling good()...");
  FUN_0010187d();
  FUN_00103abb("Finished good()");
  FUN_00103abb("Calling bad()...");
  FUN_001014e9();
  FUN_00103abb("Finished bad()");
  return 0;
}




void FUN_00102c6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001018f7(0x30,param_2);
  uVar1 = FUN_00102352(param_5);
  uVar2 = FUN_00102340(param_4);
  uVar3 = FUN_0010232e(param_3);
  uVar4 = FUN_00102282(param_2);
  uVar5 = FUN_001032f2(param_1);
                    /* try { // try from 00102cf9 to 00102cfd has its CatchHandler @ 00102d00 */
  FUN_001033b5(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103592(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103a42(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101b28(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  if (local_18 == (undefined4 *)0x0) {
    FUN_00103abb("data is NULL");
  }
  else {
    FUN_00103b13(*local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102e22(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00101d8a(param_1);
  local_50 = FUN_00102aba(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010278d(local_58);
    local_59 = FUN_00101e56(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102169(local_58);
    }
    else {
      local_58 = FUN_0010217f(local_58);
    }
  }
  FUN_001028ca(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103438(param_1);
    cVar1 = FUN_00101de8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103488(local_38,&local_58,&local_50);
      goto LAB_00102fa4;
    }
    FUN_0010301e(&local_48);
  }
  uVar2 = FUN_00102dc4(local_48);
  cVar1 = FUN_00101e56(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103076(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103488(local_38,&local_58,&local_50);
  }
LAB_00102fa4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001019a4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




ulong FUN_00103dab(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001037b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c3e(param_1);
  uVar2 = FUN_0010379d(param_2);
  FUN_00103840(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103b67(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102994(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102aba(param_1);
  uVar2 = FUN_00103130(param_2);
  uVar1 = FUN_00103146(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102fc0(param_1);
  uVar2 = FUN_001032b5(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102dae(param_1);
  uVar2 = FUN_001032d3(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102196(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a3c(param_1,param_2);
  FUN_00102a80(param_1,param_2);
  return;
}




void FUN_001030b6(long param_1)

{
  FUN_001034d0(param_1 + 0x20);
  return;
}




undefined8 FUN_00103f8e(void)

{
  return 1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101430();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_0010311c(void)

{
  return;
}




void FUN_00102be4(undefined8 param_1)

{
  FUN_00103372(param_1);
  return;
}




void FUN_00102fd6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103425(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103425(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001019e4(undefined8 param_1)

{
  FUN_00101aca(param_1);
  return;
}




void FUN_00101dca(undefined8 param_1)

{
  FUN_00102224(param_1);
  return;
}




void FUN_00104034(void)

{
  return;
}




void FUN_0010187d(void)

{
  FUN_00101616();
  FUN_00101750();
  return;
}




void FUN_001020f6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102976(local_18,param_1);
  FUN_00102994(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103909(undefined8 param_1)

{
  FUN_00102be4(param_1);
  return;
}




void FUN_001042a6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103b3b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102274(void)

{
  return;
}




void FUN_00103be7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001014e9(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a24(local_88);
  local_58[0] = 0;
                    /* try { // try from 00101534 to 0010159d has its CatchHandler @ 001015e9 */
  puVar1 = (undefined8 *)FUN_00101b28(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101b28(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101b28(local_88,local_58);
  *puVar1 = 0;
  FUN_00101a64(local_58,local_88);
                    /* try { // try from 001015a5 to 001015a9 has its CatchHandler @ 001015d4 */
  FUN_0010397a(local_58);
  FUN_00101a44(local_58);
  FUN_00101a44(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103fac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010232e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a64(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c54(param_1,param_2);
  return;
}




void FUN_00102dc4(undefined8 param_1)

{
  FUN_0010278d(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00103928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010379d(param_3);
  puVar3 = (undefined8 *)FUN_001018f7(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_001036e8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ffd(void)

{
  return;
}




undefined8 FUN_00102d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010360a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010232e(param_3);
  uVar1 = FUN_00102340(param_4);
  FUN_00101e90(local_38,uVar1);
  FUN_00102352(param_5);
  uVar1 = FUN_001018f7(0x10,param_2);
                    /* try { // try from 00103692 to 00103696 has its CatchHandler @ 00103699 */
  FUN_0010374c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103076(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103425(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102c3e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032f2(param_1);
  FUN_00103387(uVar1,1);
  return;
}




void FUN_001022b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a4(param_2);
  FUN_00102bac(param_1,uVar1);
  return;
}




void FUN_00103387(undefined8 param_1,undefined8 param_2)

{
  FUN_001035ba(param_1,param_2,0);
  return;
}




void FUN_00103abb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001035ba(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103734(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_0010379d(undefined8 param_1)

{
  return param_1;
}




long FUN_001020e0(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001042f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103b91(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010374c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_001037fc(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102282(param_2);
  uVar2 = FUN_001032f2(param_1);
  FUN_00103304(uVar2,uVar1);
  return;
}




void FUN_00101a8e(long param_1)

{
  FUN_00101ce0(param_1);
  FUN_00101d00(param_1);
  FUN_0010197a(param_1 + 8);
  return;
}




void FUN_00102c14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a4(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101750(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a24(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010179b to 00101804 has its CatchHandler @ 00101850 */
  puVar1 = (undefined8 *)FUN_00101b28(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101b28(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101b28(local_88,local_58);
  *puVar1 = 0;
  FUN_00101a64(local_58,local_88);
                    /* try { // try from 0010180c to 00101810 has its CatchHandler @ 0010183b */
  FUN_00103a42(local_58);
  FUN_00101a44(local_58);
  FUN_00101a44(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103304(undefined8 param_1,undefined8 param_2)

{
  FUN_0010357e(param_1,param_2);
  return;
}




void FUN_001042c5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010205a(param_1,param_2);
  lVar1 = FUN_001020ca(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001020e0(param_1);
                    /* try { // try from 00101caf to 00101cb3 has its CatchHandler @ 00101cb9 */
    uVar3 = FUN_001020f6(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}



