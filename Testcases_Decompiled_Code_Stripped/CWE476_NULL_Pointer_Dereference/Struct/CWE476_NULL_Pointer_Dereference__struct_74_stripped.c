
void FUN_001027ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ae8(param_2);
  uVar2 = FUN_001028a8(param_1);
  FUN_00102a20(uVar2,uVar1);
  return;
}




void FUN_00104370(void)

{
  return;
}




void FUN_001029ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b97(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102958(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103538(void)

{
  return;
}




void FUN_00104008(void)

{
  return;
}




void FUN_00102bd0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010296a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101bca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102326(param_1);
  uVar2 = FUN_00101bb8(param_4);
  uVar3 = FUN_00101ba6(param_3);
  uVar4 = FUN_00101b94(param_2);
  FUN_00102352(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00102480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00104076(void)

{
  return;
}




void FUN_0010216e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010321e(undefined8 param_1)

{
  FUN_001032c4(param_1);
  return;
}




void FUN_00102352(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010162a(0x30,param_2);
  uVar1 = FUN_00101bb8(param_5);
  uVar2 = FUN_00101ba6(param_4);
  uVar3 = FUN_00101b94(param_3);
  uVar4 = FUN_00101ae8(param_2);
  uVar5 = FUN_001028a8(param_1);
                    /* try { // try from 001023e1 to 001023e5 has its CatchHandler @ 001023e8 */
  FUN_001028e8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102326(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a8(param_1);
  FUN_001028ba(uVar1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_0010404a(void)

{
  return;
}




void FUN_0010408c(void)

{
  return;
}




void FUN_00104097(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104292(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103bc7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b0a(param_2);
  FUN_001022fc(param_1,uVar1);
  return;
}




undefined8 FUN_0010397c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102326(param_1);
  uVar2 = FUN_0010396a(param_2);
  FUN_001039c8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001024ac(undefined8 param_1)

{
  FUN_00101ff3(param_1);
  return;
}




void FUN_00104034(void)

{
  return;
}




void FUN_00102a7c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bf8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00104081(void)

{
  return;
}




void FUN_00102cc3(undefined8 param_1)

{
  FUN_001022cc(param_1);
  return;
}




undefined8 FUN_00101b0a(undefined8 param_1)

{
  return param_1;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101654(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  FUN_00103b1e(*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a02(undefined8 param_1)

{
  FUN_00102baa(param_1);
  return;
}




void FUN_00101a3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021a2(param_1);
  uVar2 = FUN_0010218c(param_1);
  FUN_001021b8(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00103f99(void)

{
  return 1;
}




undefined8 FUN_0010189a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b0a(param_2);
  FUN_00101b1c(param_1,uVar1);
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_00103154(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010317e(param_1);
  return;
}




undefined8 FUN_001022ea(undefined8 param_1)

{
  return param_1;
}




void FUN_001033ae(void)

{
  return;
}




void FUN_00103bf2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103fe7(void)

{
  return;
}




void FUN_00103598(undefined8 param_1,undefined8 param_2)

{
  FUN_001036ca(param_1,param_2);
  return;
}




void FUN_001015b1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101654(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  if (local_18 == (undefined4 *)0x0) {
    FUN_00103ac6("data is NULL");
  }
  else {
    FUN_00103b1e(*local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010307f(void)

{
  FUN_00102e0e();
  FUN_00102f52();
  return;
}




void FUN_00103fd1(void)

{
  return;
}




undefined8 FUN_00102bf8(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001026be(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102958(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102958(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001028ba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a7c(param_1,param_2,0);
  return;
}




void FUN_001035c2(void)

{
  return;
}




void FUN_001028e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101bb8(param_5);
  uVar2 = FUN_00101ba6(param_4);
  uVar3 = FUN_00101b94(param_3);
  FUN_00102acc(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001032a4(undefined8 param_1)

{
  FUN_001033be(param_1);
  return;
}




void FUN_00102a4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bd0(param_1,param_2,param_3);
  return;
}




void FUN_001022cc(undefined8 param_1)

{
  FUN_00102892(param_1);
  return;
}




void FUN_001022fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b0a(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001027b4(long param_1)

{
  FUN_00102a02(param_1 + 0x20);
  return;
}




void FUN_00103aec(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8
FUN_001018f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101bb8(param_5);
  uVar2 = FUN_00101ba6(param_4);
  uVar3 = FUN_00101b94(param_3);
  local_40 = FUN_00101bca(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101970 to 001019b3 has its CatchHandler @ 001019f1 */
  uVar1 = FUN_00101ff3(local_40);
  local_38 = FUN_00101c4a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102130(param_1,local_40);
    FUN_0010216e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102046(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102830(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a8(param_1);
  FUN_00102a4a(uVar1,param_2,1);
  return;
}




void FUN_001031fe(undefined8 param_1)

{
  FUN_001031de(param_1);
  return;
}




undefined8
FUN_00102046(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001021a2(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024ac(param_3);
      uVar5 = FUN_00101ff3(param_4);
      cVar1 = FUN_00101836(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020ca;
      }
    }
  }
  bVar2 = true;
LAB_001020ca:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010216e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010396a(undefined8 param_1)

{
  return param_1;
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




void FUN_00104055(void)

{
  return;
}




void FUN_00102130(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ec(param_1,param_2);
  FUN_00102830(param_1,param_2);
  return;
}




void FUN_00101b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b0a(param_2);
  FUN_00102294(param_1,uVar1);
  return;
}




void FUN_00103863(undefined8 param_1)

{
  FUN_001030f9(param_1);
  return;
}




undefined8 FUN_0010218c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_001034be(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102bbc(void)

{
  return;
}




void FUN_00102c10(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c62(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fdc(void)

{
  return;
}




void FUN_00101814(undefined8 *param_1)

{
  FUN_00101ae8(*param_1);
  return;
}




undefined8 * FUN_00102706(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001036de(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ff2(void)

{
  return;
}




void FUN_001018d2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102a20(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bbc(param_1,param_2);
  return;
}




undefined8 FUN_00104219(undefined8 *param_1)

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




int FUN_00103fb7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102430(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001021a2(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024ac(local_50);
    cVar2 = FUN_00101836(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024ac(local_50);
      cVar2 = FUN_00101836(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102774(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102496(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102496(local_60);
          local_48[1] = 0;
          FUN_001024ca(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102748(local_48);
          uVar6 = FUN_001024ac(*puVar5);
          cVar2 = FUN_00101836(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010250a(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102732(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024ca(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026be(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026a8(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026a8(local_60);
        uVar6 = FUN_001026a8(local_60);
        FUN_001026be(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102706(local_48);
        uVar6 = FUN_001024ac(*puVar5);
        cVar2 = FUN_00101836(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010250a(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102732(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024ca(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026be(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fd8;
  }
  lVar3 = FUN_00102480(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cec:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102496(local_60);
    uVar6 = FUN_001024ac(*puVar5);
    cVar2 = FUN_00101836(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cec;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102496(local_60);
    local_48[1] = 0;
    FUN_001024ca(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010250a(local_60,param_3);
  }
LAB_00101fd8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103b1e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001033be(void)

{
  return;
}




void FUN_00103cca(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102430(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022cc(param_2);
  uVar1 = FUN_001022ea(uVar1);
  FUN_001022fc(param_1,uVar1);
  return;
}




void FUN_001035d6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001024ca(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102958(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001042d0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b94(param_3);
  uVar1 = FUN_00101ba6(param_4);
  FUN_00101870(local_38,uVar1);
  FUN_00101bb8(param_5);
  uVar1 = FUN_0010162a(0x10,param_2);
                    /* try { // try from 00102b54 to 00102b58 has its CatchHandler @ 00102b5b */
  FUN_00102c10(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102880(undefined8 param_1)

{
  return param_1;
}




void FUN_00102774(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102958(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010338e(undefined8 param_1)

{
  FUN_00103538(param_1);
  return;
}




void FUN_0010403f(void)

{
  return;
}




long FUN_001030f9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




bool FUN_0010419b(pthread_t *param_1)

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




undefined8 FUN_001021b8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101ff3(local_38);
    cVar1 = FUN_00101836(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102732(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010286a(local_38);
    }
  }
  FUN_0010216e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
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




undefined8 FUN_00101bb8(undefined8 param_1)

{
  return param_1;
}




void FUN_001033ce(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102732(local_28);
    FUN_001033ce(param_1,uVar1);
    lVar2 = FUN_0010286a(local_28);
    FUN_00102130(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001028a8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001041f6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001036ca(void)

{
  return;
}




void FUN_001031be(undefined8 param_1)

{
  FUN_001032a4(param_1);
  return;
}




undefined8 FUN_0010391a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c62(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ca5(param_2);
  puVar2 = (undefined4 *)FUN_001022ea(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001035f4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001021a2(param_1);
  uVar2 = FUN_001036de(param_2);
  uVar1 = FUN_001036f4(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026a8(param_1);
  uVar2 = FUN_00103863(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102496(param_1);
  uVar2 = FUN_00103881(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102732(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00101a8a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001021a2(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102958(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b46(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103ac6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101640(void)

{
  return;
}




void FUN_00103438(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103547(param_1,param_2);
  FUN_001035c2(param_1,param_2);
  FUN_00103154(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104060(void)

{
  return;
}




void FUN_001034d4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035d6(local_18,param_1);
  FUN_001035f4(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042b1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010369c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103598(param_1,param_2);
  return param_1;
}




void FUN_0010401e(void)

{
  return;
}




undefined8 FUN_0010162a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_00103db6(long param_1,ulong param_2,long param_3)

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




void FUN_001032c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010218c(param_1);
  FUN_001033ce(param_1,uVar1);
  FUN_001031be(param_1);
  return;
}




long FUN_00102496(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103fa8(void)

{
  return 0;
}




void FUN_00101870(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b54(param_1,param_2);
  return;
}




void FUN_00102f52(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031fe(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f9d to 00103006 has its CatchHandler @ 00103052 */
  puVar1 = (undefined8 *)FUN_00101654(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101654(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101654(local_88,local_58);
  *puVar1 = 0;
  FUN_0010323e(local_58,local_88);
                    /* try { // try from 0010300e to 00103012 has its CatchHandler @ 0010303d */
  FUN_001015b1(local_58);
  FUN_0010321e(local_58);
  FUN_0010321e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103881(undefined8 param_1)

{
  FUN_00103126(param_1);
  return;
}




void FUN_00103c1d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010317e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001017aa(undefined8 param_1)

{
  FUN_00101a8a(param_1);
  return;
}




void FUN_00101ada(void)

{
  return;
}




void FUN_00103ffd(void)

{
  return;
}




void FUN_00103a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010396a(param_3);
  puVar3 = (undefined8 *)FUN_0010162a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103d23(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102b97(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102748(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103268(long param_1)

{
  FUN_0010338e(param_1);
  FUN_001033ae(param_1);
  FUN_00103154(param_1 + 8);
  return;
}




void FUN_00104013(void)

{
  return;
}




undefined8 FUN_001017c8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103302(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103438(param_1,param_2);
  lVar1 = FUN_001034a8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034be(param_1);
                    /* try { // try from 0010335d to 00103361 has its CatchHandler @ 00103367 */
    uVar3 = FUN_001034d4(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102ca5(undefined8 param_1)

{
  FUN_00102cc3(param_1);
  return;
}




void FUN_001031de(undefined8 param_1)

{
  FUN_00103268(param_1);
  return;
}




void FUN_00101ae8(long param_1)

{
  FUN_00102276(param_1 + 0x20);
  return;
}




void FUN_00102276(undefined8 param_1)

{
  FUN_00102880(param_1);
  return;
}




undefined8 FUN_001040ce(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104097,local_18);
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




undefined8 FUN_0010185d(undefined8 param_1)

{
  return param_1;
}




long FUN_001026a8(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103b72(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103cf5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001027d6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_00103eba(long param_1,ulong param_2,long param_3)

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




undefined4 FUN_001017ee(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ada(param_1);
  return unaff_EBX;
}




void FUN_00104029(void)

{
  return;
}




undefined8 FUN_00102892(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101b94(undefined8 param_1)

{
  return param_1;
}




long FUN_00103126(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101780(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a3a(param_1,param_2);
  return;
}




void FUN_00103b9c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103930(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010396a(param_2);
  FUN_0010397c(uVar1,uVar2);
  return;
}




long FUN_001036f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038a0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103904(param_2);
                    /* try { // try from 00103763 to 001037f5 has its CatchHandler @ 00103821 */
    uVar2 = FUN_001036f4(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010391a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038a0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103904(local_38);
      uVar2 = FUN_001036f4(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010391a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_0010406b(void)

{
  return;
}




undefined8 FUN_00103094(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ac6("Calling good()...");
  FUN_0010307f();
  FUN_00103ac6("Finished good()");
  FUN_00103ac6("Calling bad()...");
  FUN_00102ce1();
  FUN_00103ac6("Finished bad()");
  return 0;
}




undefined8 FUN_00103904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010323e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103302(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




long FUN_00101654(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101780(param_1,param_2);
  local_28 = FUN_001017aa(param_1);
  cVar2 = FUN_001017c8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017ee(param_1);
    uVar3 = FUN_00101814(&local_38);
    cVar2 = FUN_00101836(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016f4;
    }
  }
  bVar1 = true;
LAB_001016f4:
  if (bVar1) {
    uVar3 = FUN_0010185d(param_2);
    FUN_0010189a(local_30,uVar3);
    FUN_001018d2(&local_28,&local_38);
    local_38 = FUN_001018f4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101814(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010154d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101654(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  FUN_00103b1e(*local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e0e(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_90;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031fe(local_88);
  local_90 = 0;
  local_8c = 0;
  local_58[0] = 0;
                    /* try { // try from 00102e70 to 00102ed9 has its CatchHandler @ 00102f25 */
  plVar1 = (long *)FUN_00101654(local_88,local_58);
  *plVar1 = (long)&local_90;
  local_58[0] = 1;
  plVar1 = (long *)FUN_00101654(local_88,local_58);
  *plVar1 = (long)&local_90;
  local_58[0] = 2;
  plVar1 = (long *)FUN_00101654(local_88,local_58);
  *plVar1 = (long)&local_90;
  FUN_0010323e(local_58,local_88);
                    /* try { // try from 00102ee1 to 00102ee5 has its CatchHandler @ 00102f10 */
  FUN_0010154d(local_58);
  FUN_0010321e(local_58);
  FUN_0010321e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010286a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103547(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010369c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103c48(undefined4 param_1)

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




undefined4 * FUN_001038a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027b4(param_2);
  puVar2 = (undefined4 *)FUN_00103930(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103a36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010396a(param_3);
  FUN_00103a74(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010250a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010218c(param_1);
  local_50 = FUN_001021a2(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101ff3(local_58);
    local_59 = FUN_00101836(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102732(local_58);
    }
    else {
      local_58 = FUN_0010286a(local_58);
    }
  }
  FUN_0010216e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010296a(param_1);
    cVar1 = FUN_001017c8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029ba(local_38,&local_58,&local_50);
      goto LAB_0010268c;
    }
    FUN_00102706(&local_48);
  }
  uVar2 = FUN_001024ac(local_48);
  cVar1 = FUN_00101836(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102774(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029ba(local_38,&local_58,&local_50);
  }
LAB_0010268c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103d56(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001039c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010162a(0x30,param_2);
  uVar1 = FUN_0010396a(param_3);
  uVar2 = FUN_00101ae8(param_2);
  uVar3 = FUN_001028a8(param_1);
  FUN_00103a36(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102baa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101ba6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ce1(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031fe(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102d2c to 00102d95 has its CatchHandler @ 00102de1 */
  puVar1 = (undefined8 *)FUN_00101654(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101654(local_88,local_58);
  *puVar1 = 0;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101654(local_88,local_58);
  *puVar1 = 0;
  FUN_0010323e(local_58,local_88);
                    /* try { // try from 00102d9d to 00102da1 has its CatchHandler @ 00102dcc */
  FUN_001014e9(local_58);
  FUN_0010321e(local_58);
  FUN_0010321e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00101836(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_001034a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101ff3(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027b4(param_1);
  FUN_001027d6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



