
void FUN_001027c0(long param_1)

{
  FUN_00102a0e(param_1 + 0x20);
  return;
}




void FUN_001042c8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102964(undefined8 param_1)

{
  return param_1;
}




long FUN_001034b6(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103fea(void)

{
  return;
}




undefined8 FUN_00102bb6(undefined8 param_1)

{
  return param_1;
}




void FUN_001028f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101bc4(param_5);
  uVar2 = FUN_00101bb2(param_4);
  uVar3 = FUN_00101ba0(param_3);
  FUN_00102ad8(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101bb2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010235e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101636(0x30,param_2);
  uVar1 = FUN_00101bc4(param_5);
  uVar2 = FUN_00101bb2(param_4);
  uVar3 = FUN_00101ba0(param_3);
  uVar4 = FUN_00101af4(param_2);
  uVar5 = FUN_001028b4(param_1);
                    /* try { // try from 001023ed to 001023f1 has its CatchHandler @ 001023f4 */
  FUN_001028f4(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104058(void)

{
  return;
}




undefined8
FUN_00102052(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001021ae(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024b8(param_3);
      uVar5 = FUN_00101fff(param_4);
      cVar1 = FUN_00101842(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020d6;
      }
    }
  }
  bVar2 = true;
LAB_001020d6:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010217a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001031d6(undefined8 param_1)

{
  FUN_00103260(param_1);
  return;
}




void FUN_00102308(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b16(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001022f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_0010402c(void)

{
  return;
}




void FUN_0010406e(void)

{
  return;
}




void FUN_00104079(void)

{
  return;
}




undefined8 FUN_001041ee(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b6a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001021c4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fff(local_38);
    cVar1 = FUN_00101842(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010273e(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102876(local_38);
    }
  }
  FUN_0010217a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103928(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103962(param_2);
  FUN_00103974(uVar1,uVar2);
  return;
}




void FUN_00104300(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010248c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00104016(void)

{
  return;
}




void FUN_00102a2c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc8(param_1,param_2);
  return;
}




void FUN_00104063(void)

{
  return;
}




void FUN_00102c6e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102cb1(param_2);
  puVar2 = (undefined4 *)FUN_001022f6(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00101ae6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_00102976(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018de(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong FUN_00103dae(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101869(undefined8 param_1)

{
  return param_1;
}




long FUN_001030f1(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103b94(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001022a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b16(param_2);
  FUN_00102308(param_1,uVar1);
  return;
}




void FUN_001032fa(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103430(param_1,param_2);
  lVar1 = FUN_001034a0(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034b6(param_1);
                    /* try { // try from 00103355 to 00103359 has its CatchHandler @ 0010335f */
    uVar3 = FUN_001034cc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103fc9(void)

{
  return;
}




void FUN_00103530(void)

{
  return;
}




void FUN_00104370(void)

{
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101660(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  FUN_00103c15((int)*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e1a(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031f6(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102e68 to 00102ed1 has its CatchHandler @ 00102f1d */
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = &DAT_00105017;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = &DAT_00105017;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = &DAT_00105017;
  FUN_00103236(local_58,local_88);
                    /* try { // try from 00102ed9 to 00102edd has its CatchHandler @ 00102f08 */
  FUN_00101551(local_58);
  FUN_00103216(local_58);
  FUN_00103216(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103fa0(void)

{
  return 0;
}




void FUN_00102bc8(void)

{
  return;
}




undefined8 FUN_00102516(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102198(param_1);
  local_50 = FUN_001021ae(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fff(local_58);
    local_59 = FUN_00101842(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010273e(local_58);
    }
    else {
      local_58 = FUN_00102876(local_58);
    }
  }
  FUN_0010217a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102976(param_1);
    cVar1 = FUN_001017d4(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029c6(local_38,&local_58,&local_50);
      goto LAB_00102698;
    }
    FUN_00102712(&local_48);
  }
  uVar2 = FUN_001024b8(local_48);
  cVar1 = FUN_00101842(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102780(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029c6(local_38,&local_58,&local_50);
  }
LAB_00102698:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010289e(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_0010353f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103694(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001028b4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103236(undefined8 param_1,undefined8 param_2)

{
  FUN_001032fa(param_1,param_2);
  return;
}




void FUN_00102a0e(undefined8 param_1)

{
  FUN_00102bb6(param_1);
  return;
}




void FUN_00102282(undefined8 param_1)

{
  FUN_0010288c(param_1);
  return;
}




void FUN_001022d8(undefined8 param_1)

{
  FUN_0010289e(param_1);
  return;
}




undefined8 * FUN_00102754(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103962(param_3);
  puVar3 = (undefined8 *)FUN_00101636(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_001018a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b16(param_2);
  FUN_00101b28(param_1,uVar1);
  return param_1;
}




undefined8 FUN_001027e2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031b6(undefined8 param_1)

{
  FUN_0010329c(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010243c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001021ae(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024b8(local_50);
    cVar2 = FUN_00101842(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024b8(local_50);
      cVar2 = FUN_00101842(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102780(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001024a2(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001024a2(local_60);
          local_48[1] = 0;
          FUN_001024d6(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102754(local_48);
          uVar6 = FUN_001024b8(*puVar5);
          cVar2 = FUN_00101842(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102516(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010273e(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024d6(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026ca(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026b4(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026b4(local_60);
        uVar6 = FUN_001026b4(local_60);
        FUN_001026ca(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102712(local_48);
        uVar6 = FUN_001024b8(*puVar5);
        cVar2 = FUN_00101842(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102516(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010273e(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024d6(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026ca(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fe4;
  }
  lVar3 = FUN_0010248c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cf8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001024a2(local_60);
    uVar6 = FUN_001024b8(*puVar5);
    cVar2 = FUN_00101842(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cf8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001024a2(local_60);
    local_48[1] = 0;
    FUN_001024d6(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102516(local_60,param_3);
  }
LAB_00101fe4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00103912(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001042a9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104037(void)

{
  return;
}




void FUN_00101fff(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027c0(param_1);
  FUN_001027e2(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101af4(long param_1)

{
  FUN_00102282(param_1 + 0x20);
  return;
}




undefined8 FUN_001036d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010213c(undefined8 param_1,undefined8 param_2)

{
  FUN_001027f8(param_1,param_2);
  FUN_0010283c(param_1,param_2);
  return;
}




void FUN_00103430(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010353f(param_1,param_2);
  FUN_001035ba(param_1,param_2);
  FUN_0010314c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ba3(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bdc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




int FUN_00103faf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001017d4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




long FUN_001026b4(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00103694(undefined8 param_1,undefined8 param_2)

{
  FUN_00103590(param_1,param_2);
  return param_1;
}




void FUN_00103fd4(void)

{
  return;
}




void FUN_0010187c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b60(param_1,param_2);
  return;
}




void FUN_001029c6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102ba3(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102964(param_3);
  param_1[1] = *puVar1;
  return;
}




bool FUN_00104193(pthread_t *param_1)

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




undefined8 FUN_00103f91(void)

{
  return 1;
}




undefined8 FUN_00101bc4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103abe(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103386(undefined8 param_1)

{
  FUN_00103530(param_1);
  return;
}




void FUN_00103c40(undefined4 param_1)

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




void FUN_00102332(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028b4(param_1);
  FUN_001028c6(uVar1,1);
  return;
}




undefined8 FUN_00101b16(undefined8 param_1)

{
  return param_1;
}




void FUN_00103590(undefined8 param_1,undefined8 param_2)

{
  FUN_001036c2(param_1,param_2);
  return;
}




long FUN_001024a2(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010428a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bdc(param_1,param_2,param_3);
  return;
}




void FUN_0010283c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028b4(param_1);
  FUN_00102a56(uVar1,param_2,1);
  return;
}




undefined8 FUN_0010273e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001032bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102198(param_1);
  FUN_001033c6(param_1,uVar1);
  FUN_001031b6(param_1);
  return;
}




void FUN_00104021(void)

{
  return;
}




void FUN_00103077(void)

{
  FUN_00102e1a();
  FUN_00102f4a();
  return;
}




void FUN_0010408f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_00101ba0(undefined8 param_1)

{
  return param_1;
}




void FUN_001033a6(void)

{
  return;
}




undefined8 FUN_0010288c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c15(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001040c6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010408f,local_18);
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




undefined8 FUN_001035ec(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001021ae(param_1);
  uVar2 = FUN_001036d6(param_2);
  uVar1 = FUN_001036ec(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026b4(param_1);
  uVar2 = FUN_0010385b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001024a2(param_1);
  uVar2 = FUN_00103879(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010314c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103176(param_1);
  return;
}




undefined4 * FUN_00103898(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027c0(param_2);
  puVar2 = (undefined4 *)FUN_00103928(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102c04(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001035ba(void)

{
  return;
}




void FUN_001026ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102964(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102964(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_00101900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101bc4(param_5);
  uVar2 = FUN_00101bb2(param_4);
  uVar3 = FUN_00101ba0(param_3);
  local_40 = FUN_00101bd6(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010197c to 001019bf has its CatchHandler @ 001019fd */
  uVar1 = FUN_00101fff(local_40);
  local_38 = FUN_00101c56(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010213c(param_1,local_40);
    FUN_0010217a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102052(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010217a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001028c6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a88(param_1,param_2,0);
  return;
}




void FUN_00103ae4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103a2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103962(param_3);
  FUN_00103a6c(param_1,param_2,uVar1);
  return;
}




void FUN_001015b9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101660(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  if (local_18 == (char *)0x0) {
    FUN_00103abe("data is NULL");
  }
  else {
    FUN_00103c15((int)*local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033b6(void)

{
  return;
}




void FUN_00104042(void)

{
  return;
}




undefined8 FUN_001034a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104211(undefined8 *param_1)

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




void FUN_001035ce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104000(void)

{
  return;
}




void FUN_00101551(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101660(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  FUN_00103c15((int)*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d1b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103260(long param_1)

{
  FUN_00103386(param_1);
  FUN_001033a6(param_1);
  FUN_0010314c(param_1 + 8);
  return;
}




undefined8 FUN_0010243c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103eb2(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_00101842(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102ced(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031f6(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102d38 to 00102da1 has its CatchHandler @ 00102ded */
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = 0;
  FUN_00103236(local_58,local_88);
                    /* try { // try from 00102da9 to 00102dad has its CatchHandler @ 00102dd8 */
  FUN_001014e9(local_58);
  FUN_00103216(local_58);
  FUN_00103216(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001036ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103898(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038fc(param_2);
                    /* try { // try from 0010375b to 001037ed has its CatchHandler @ 00103819 */
    uVar2 = FUN_001036ec(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103912(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103898(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038fc(local_38);
      uVar2 = FUN_001036ec(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103912(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103bbf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_0010311e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




long FUN_00101660(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010178c(param_1,param_2);
  local_28 = FUN_001017b6(param_1);
  cVar2 = FUN_001017d4(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017fa(param_1);
    uVar3 = FUN_00101820(&local_38);
    cVar2 = FUN_00101842(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101700;
    }
  }
  bVar1 = true;
LAB_00101700:
  if (bVar1) {
    uVar3 = FUN_00101869(param_2);
    FUN_001018a6(local_30,uVar3);
    FUN_001018de(&local_28,&local_38);
    local_38 = FUN_00101900(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101820(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00101a46(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021ae(param_1);
  uVar2 = FUN_00102198(param_1);
  FUN_001021c4(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103fdf(void)

{
  return;
}




void FUN_001039c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101636(0x30,param_2);
  uVar1 = FUN_00103962(param_3);
  uVar2 = FUN_00101af4(param_2);
  uVar3 = FUN_001028b4(param_1);
  FUN_00103a2e(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103cc2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a88(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c04(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_00102712(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103216(undefined8 param_1)

{
  FUN_001032bc(param_1);
  return;
}




void FUN_00103ff5(void)

{
  return;
}




void FUN_0010178c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a46(param_1,param_2);
  return;
}




void FUN_0010329c(undefined8 param_1)

{
  FUN_001033b6(param_1);
  return;
}




void FUN_00102c1c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c6e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103176(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00101a96(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001021ae(long param_1)

{
  return param_1 + 8;
}




void FUN_00104084(void)

{
  return;
}




void FUN_00101820(undefined8 *param_1)

{
  FUN_00101af4(*param_1);
  return;
}




void FUN_001024d6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102964(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103b16(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103c9a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102780(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102964(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103d4e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001017b6(undefined8 param_1)

{
  FUN_00101a96(param_1);
  return;
}




void FUN_0010400b(void)

{
  return;
}




undefined8 FUN_00102876(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101b28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b16(param_2);
  FUN_001022a0(param_1,uVar1);
  return;
}




undefined8 FUN_0010308c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103abe("Calling good()...");
  FUN_00103077();
  FUN_00103abe("Finished good()");
  FUN_00103abe("Calling bad()...");
  FUN_00102ced();
  FUN_00103abe("Finished bad()");
  return 0;
}




void FUN_0010164c(void)

{
  return;
}




void FUN_00103b3e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001038fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001036c2(void)

{
  return;
}




void FUN_0010404d(void)

{
  return;
}




void FUN_00102f4a(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031f6(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f95 to 00102ffe has its CatchHandler @ 0010304a */
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101660(local_88,local_58);
  *puVar1 = 0;
  FUN_00103236(local_58,local_88);
                    /* try { // try from 00103006 to 0010300a has its CatchHandler @ 00103035 */
  FUN_001015b9(local_58);
  FUN_00103216(local_58);
  FUN_00103216(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103879(undefined8 param_1)

{
  FUN_0010311e(param_1);
  return;
}




void FUN_001031f6(undefined8 param_1)

{
  FUN_001031d6(param_1);
  return;
}




undefined8 FUN_00101636(undefined8 param_1,undefined8 param_2)

{
  return param_2;
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




void FUN_00102ccf(undefined8 param_1)

{
  FUN_001022d8(param_1);
  return;
}




void FUN_001027f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101af4(param_2);
  uVar2 = FUN_001028b4(param_1);
  FUN_00102a2c(uVar2,uVar1);
  return;
}




void FUN_001034cc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035ce(local_18,param_1);
  FUN_001035ec(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bea(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010385b(undefined8 param_1)

{
  FUN_001030f1(param_1);
  return;
}




undefined8 FUN_00103974(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102332(param_1);
  uVar2 = FUN_00103962(param_2);
  FUN_001039c0(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001024b8(undefined8 param_1)

{
  FUN_00101fff(param_1);
  return;
}




void FUN_00103ced(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00103962(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ba0(param_3);
  uVar1 = FUN_00101bb2(param_4);
  FUN_0010187c(local_38,uVar1);
  FUN_00101bc4(param_5);
  uVar1 = FUN_00101636(0x10,param_2);
                    /* try { // try from 00102b60 to 00102b64 has its CatchHandler @ 00102b67 */
  FUN_00102c1c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d8(param_2);
  uVar1 = FUN_001022f6(uVar1);
  FUN_00102308(param_1,uVar1);
  return;
}




void FUN_00102cb1(undefined8 param_1)

{
  FUN_00102ccf(param_1);
  return;
}




undefined4 FUN_001017fa(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ae6(param_1);
  return unaff_EBX;
}




void FUN_001033c6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010273e(local_28);
    FUN_001033c6(param_1,uVar1);
    lVar2 = FUN_00102876(local_28);
    FUN_0010213c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00101bd6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102332(param_1);
  uVar2 = FUN_00101bc4(param_4);
  uVar3 = FUN_00101bb2(param_3);
  uVar4 = FUN_00101ba0(param_2);
  FUN_0010235e(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}



