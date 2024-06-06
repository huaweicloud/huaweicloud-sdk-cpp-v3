
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器规格的扩展字段。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  FlavorExtraSpec
    : public ModelBase
{
public:
    FlavorExtraSpec();
    virtual ~FlavorExtraSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorExtraSpec members

    /// <summary>
    /// 云服务器规格的分类：  - normal：通用型 - entry：通用入门型 - cpuv1：计算I型 - cpuv2：计算II型 - computingv3：通用计算增强型 - kunpeng_computing：鲲鹏通用计算增强型 - kunpeng_highmem：鲲鹏内存优化型 - highmem：内存优化型 - saphana：大内存型 - diskintensive：磁盘增强型 - highio：超高I/O型 - ultracpu：超高性能计算型 - gpu：GPU加速型 - fpga：FPGA加速型 - ascend：AI加速型  &gt; 说明：  - 早期注册的规格该字段为hws:performancetype。
    /// </summary>

    std::string getEcsPerformancetype() const;
    bool ecsPerformancetypeIsSet() const;
    void unsetecsPerformancetype();
    void setEcsPerformancetype(const std::string& value);

    /// <summary>
    /// 主机的物理cpu数量。
    /// </summary>

    std::string getHwNumaNodes() const;
    bool hwNumaNodesIsSet() const;
    void unsethwNumaNodes();
    void setHwNumaNodes(const std::string& value);

    /// <summary>
    /// 资源类型。resource_type是为了区分云服务器的物理主机类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 弹性运服务器高精度时钟是否开启，开启为true，否则为false。（该字段是否返回根据云服务器规格而定）
    /// </summary>

    std::string getHpetSupport() const;
    bool hpetSupportIsSet() const;
    void unsethpetSupport();
    void setHpetSupport(const std::string& value);

    /// <summary>
    /// 网卡类型，值固定为“enhanced”，表示使用增强型网络的资源创建云服务器。
    /// </summary>

    std::string getInstanceVnicType() const;
    bool instanceVnicTypeIsSet() const;
    void unsetinstanceVnicType();
    void setInstanceVnicType(const std::string& value);

    /// <summary>
    /// 最大带宽，单位Mbps，最大值为10000。
    /// </summary>

    std::string getInstanceVnicInstanceBandwidth() const;
    bool instanceVnicInstanceBandwidthIsSet() const;
    void unsetinstanceVnicInstanceBandwidth();
    void setInstanceVnicInstanceBandwidth(const std::string& value);

    /// <summary>
    /// 最大网卡个数，最大为4。
    /// </summary>

    std::string getInstanceVnicMaxCount() const;
    bool instanceVnicMaxCountIsSet() const;
    void unsetinstanceVnicMaxCount();
    void setInstanceVnicMaxCount(const std::string& value);

    /// <summary>
    /// 值格式为{type}:{count}:{size}:{safeFormat}，其中：  - type指磁盘类型，当前只支持hdd。 - count指本地磁盘数量，目前支持d1类型：3/6/12/24，d2类型：2/4/8/12/16/24，d3类型：2/4/8/12/16/24/28。 - size指单个磁盘容量，单位GB，目前只支持1675（实际磁盘大小为1800，格式化后可用大小为1675）。 - safeFormat指云服务器本地磁盘是否安全格式化，目前仅支持d1类型：FALSE，d2/d3类型：True。  &gt; 说明：  - 磁盘增强型特有字段。
    /// </summary>

    std::string getQuotaLocalDisk() const;
    bool quotaLocalDiskIsSet() const;
    void unsetquotaLocalDisk();
    void setQuotaLocalDisk(const std::string& value);

    /// <summary>
    /// 值格式为{type}:{spec}:{size}:{safeFormat}，其中：  - type指主机上配备的nvme ssd的单卡容量大小，当前只支持1.6T/3.2T。 - spec指nvme ssd的规格，包括large/small。large表示大规格，small表示小规格。目前仅支持i3类型：large。 - size指guest使用的盘的容量大小，单位为GB。在spec值为large的情况下，此项即为host单卡大小。在spec值为small的情况下，此为1/4规格或者1/2规格。 - safeFormat指云服务器本地磁盘是否安全格式化，目前仅支持i3类型：True。  &gt; 说明：  - 超高I/O型特有字段。
    /// </summary>

    std::string getQuotaNvmeSsd() const;
    bool quotaNvmeSsdIsSet() const;
    void unsetquotaNvmeSsd();
    void setQuotaNvmeSsd(const std::string& value);

    /// <summary>
    /// 是否支持持久化，值为true。  代表云服务器访问存储的方式为持久化授权。   &gt; 说明：  - 密集存储D1型特有字段。
    /// </summary>

    std::string getExtraSpecIoPersistentGrant() const;
    bool extraSpecIoPersistentGrantIsSet() const;
    void unsetextraSpecIoPersistentGrant();
    void setExtraSpecIoPersistentGrant(const std::string& value);

    /// <summary>
    /// 弹性云服务器类型的代数。  - s1：通用型I代 - s2：通用型II代 - s3：通用型 - m1：内存优化型I代 - m2：内存优化型II代 - m3：内存优化型 - h1：高性能计算型I代 - h2：高性能计算型II代 - h3：高性能计算型 - hi3：超高性能计算型 - d1：密集存储型I代 - d2：密集存储型II代 - d3：磁盘增强型 - g1：GPU加速型I代 - g2：GPU加速型II代 - f1：FPGA高性能型 - f2：FPGA通用型 - c3：通用计算增强型 - e3：大内存型 - i3：超高I/O型
    /// </summary>

    std::string getEcsGeneration() const;
    bool ecsGenerationIsSet() const;
    void unsetecsGeneration();
    void setEcsGeneration(const std::string& value);

    /// <summary>
    /// 虚拟化类型。  - 如果值为“FusionCompute”，表示弹性云服务器使用基于XEN的虚拟化技术。 - 如果值为“CloudCompute”，表示弹性云服务器使用基于KVM的虚拟化技术。
    /// </summary>

    std::string getEcsVirtualizationEnvTypes() const;
    bool ecsVirtualizationEnvTypesIsSet() const;
    void unsetecsVirtualizationEnvTypes();
    void setEcsVirtualizationEnvTypes(const std::string& value);

    /// <summary>
    /// 显卡是否直通。  值为“true”，表示GPU直通。
    /// </summary>

    std::string getPciPassthroughEnableGpu() const;
    bool pciPassthroughEnableGpuIsSet() const;
    void unsetpciPassthroughEnableGpu();
    void setPciPassthroughEnableGpu(const std::string& value);

    /// <summary>
    /// G1型和G2型云服务器应用的技术，包括GPU虚拟化和GPU直通。  - 如果该规格的云服务器使用GPU虚拟化技术，且GPU卡的型号为M60-1Q，参数值可设置为“m60_1q:virt:1”。 - 如果该规格的云服务器使用GPU直通技术，且GPU卡的型号为M60，参数值可设置为“m60:direct_graphics:1”。
    /// </summary>

    std::string getPciPassthroughGpuSpecs() const;
    bool pciPassthroughGpuSpecsIsSet() const;
    void unsetpciPassthroughGpuSpecs();
    void setPciPassthroughGpuSpecs(const std::string& value);

    /// <summary>
    /// P1型v本地直通GPU的型号和数量，参数值可设置为“nvidia-p100:1”，表示使用该规格创建的弹性云服务器将占用1张NVIDIA P100显卡。
    /// </summary>

    std::string getPciPassthroughAlias() const;
    bool pciPassthroughAliasIsSet() const;
    void unsetpciPassthroughAlias();
    void setPciPassthroughAlias(const std::string& value);

    /// <summary>
    /// 此参数是Region级配置，某个AZ没有在cond:operation:az参数中配置时默认使用此参数的取值。不配置或无此参数时等同于“normal”。取值范围：  - normal：正常商用 - abandon：下线（即不显示） - sellout：售罄 - obt：公测 - promotion：推荐(等同normal，也是商用)
    /// </summary>

    std::string getCondOperationStatus() const;
    bool condOperationStatusIsSet() const;
    void unsetcondOperationStatus();
    void setCondOperationStatus(const std::string& value);

    /// <summary>
    /// 此参数是AZ级配置，某个AZ没有在此参数中配置时默认使用cond:operation:status参数的取值。此参数的配置格式“az(xx)”。()内为某个AZ的flavor状态，()内必须要填有状态，不填为无效配置。状态的取值范围与cond:operation:status参数相同。  例如：flavor在某个region的az0正常商用，az1售罄，az2公测，az3正常商用，其他az显示下线，可配置为：  - “cond:operation:status”设置为“abandon” - “cond:operation:az”设置为“az0(normal), az1(sellout), az2(obt), az3(normal)”  &gt; 说明：  - 如果flavor在某个AZ下的状态与cond:operation:status配置状态不同，必须配置该参数。
    /// </summary>

    std::string getCondOperationAz() const;
    bool condOperationAzIsSet() const;
    void unsetcondOperationAz();
    void setCondOperationAz(const std::string& value);

    /// <summary>
    /// 最大带宽  - 单位Mbps，显示为Gbps时除以1000
    /// </summary>

    std::string getQuotaMaxRate() const;
    bool quotaMaxRateIsSet() const;
    void unsetquotaMaxRate();
    void setQuotaMaxRate(const std::string& value);

    /// <summary>
    /// 基准带宽  - 单位Mbps，显示为Gbps时除以1000
    /// </summary>

    std::string getQuotaMinRate() const;
    bool quotaMinRateIsSet() const;
    void unsetquotaMinRate();
    void setQuotaMinRate(const std::string& value);

    /// <summary>
    /// 内网最大收发包能力  - 单位个，显示为xx万时除以10000
    /// </summary>

    std::string getQuotaMaxPps() const;
    bool quotaMaxPpsIsSet() const;
    void unsetquotaMaxPps();
    void setQuotaMaxPps(const std::string& value);

    /// <summary>
    /// 计费类型  - 计费场景，不配置时都支持 - period，包周期 - demand，按需
    /// </summary>

    std::string getCondOperationCharge() const;
    bool condOperationChargeIsSet() const;
    void unsetcondOperationCharge();
    void setCondOperationCharge(const std::string& value);

    /// <summary>
    /// 关机是否收费  - 关机是否计费，默认免费： - charge - free
    /// </summary>

    std::string getCondOperationChargeStop() const;
    bool condOperationChargeStopIsSet() const;
    void unsetcondOperationChargeStop();
    void setCondOperationChargeStop(const std::string& value);

    /// <summary>
    /// 计费类型  - 计费场景，不配置时都支持 - period，包周期 - demand，按需
    /// </summary>

    std::string getCondSpotOperationAz() const;
    bool condSpotOperationAzIsSet() const;
    void unsetcondSpotOperationAz();
    void setCondSpotOperationAz(const std::string& value);

    /// <summary>
    /// 允许的角色 匹配的用户标签（roles的op_gatexxx标签）。不设置时所有用户可见
    /// </summary>

    std::string getCondOperationRoles() const;
    bool condOperationRolesIsSet() const;
    void unsetcondOperationRoles();
    void setCondOperationRoles(const std::string& value);

    /// <summary>
    /// Flavor在竞价销售模式下的状态  - 不配置时等同abandon - normal，正常商用 - abandon，下线 - sellout，售罄 - obt，公测，未申请时提示申请（暂不支持） - private，私有，只给特定用户显示（暂不支持） - test，试用/免费（暂不支持） - promotion，推荐
    /// </summary>

    std::string getCondSpotOperationStatus() const;
    bool condSpotOperationStatusIsSet() const;
    void unsetcondSpotOperationStatus();
    void setCondSpotOperationStatus(const std::string& value);

    /// <summary>
    /// 网络约束 支持网络特性，不配置时以UI配置为准。
    /// </summary>

    std::string getCondNetwork() const;
    bool condNetworkIsSet() const;
    void unsetcondNetwork();
    void setCondNetwork(const std::string& value);

    /// <summary>
    /// 存储约束  - 支持磁盘特性，不配置时以UI配置为准。 - scsi，支持scsi - localdisk，支持本地盘 - ib，支持ib
    /// </summary>

    std::string getCondStorage() const;
    bool condStorageIsSet() const;
    void unsetcondStorage();
    void setCondStorage(const std::string& value);

    /// <summary>
    /// 存储约束  - 支持磁盘特性，不配置时以UI配置为准。
    /// </summary>

    std::string getCondStorageType() const;
    bool condStorageTypeIsSet() const;
    void unsetcondStorageType();
    void setCondStorageType(const std::string& value);

    /// <summary>
    /// 计算约束  - true，支持在线扩容。 - false或不存在该字段，不支持在线扩容。
    /// </summary>

    std::string getCondComputeLiveResizable() const;
    bool condComputeLiveResizableIsSet() const;
    void unsetcondComputeLiveResizable();
    void setCondComputeLiveResizable(const std::string& value);

    /// <summary>
    /// 计算约束  - autorecovery，自动恢复特性。 - 不存在该字段，不支持自动恢复。
    /// </summary>

    std::string getCondCompute() const;
    bool condComputeIsSet() const;
    void unsetcondCompute();
    void setCondCompute(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getInfoGpuName() const;
    bool infoGpuNameIsSet() const;
    void unsetinfoGpuName();
    void setInfoGpuName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getInfoCpuName() const;
    bool infoCpuNameIsSet() const;
    void unsetinfoCpuName();
    void setInfoCpuName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getQuotaGpu() const;
    bool quotaGpuIsSet() const;
    void unsetquotaGpu();
    void setQuotaGpu(const std::string& value);

    /// <summary>
    /// 最多支持的弹性网卡个数
    /// </summary>

    std::string getQuotaVifMaxNum() const;
    bool quotaVifMaxNumIsSet() const;
    void unsetquotaVifMaxNum();
    void setQuotaVifMaxNum(const std::string& value);

    /// <summary>
    /// 最多支持的辅助弹性网卡个数
    /// </summary>

    std::string getQuotaSubNetworkInterfaceMaxNum() const;
    bool quotaSubNetworkInterfaceMaxNumIsSet() const;
    void unsetquotaSubNetworkInterfaceMaxNum();
    void setQuotaSubNetworkInterfaceMaxNum(const std::string& value);

    /// <summary>
    /// 该规格对应的CPU架构，且仅鲲鹏实例架构规格返回该字段  - 取值为arm64表示CPU架构为鲲鹏计算。
    /// </summary>

    std::string getEcsInstanceArchitecture() const;
    bool ecsInstanceArchitectureIsSet() const;
    void unsetecsInstanceArchitecture();
    void setEcsInstanceArchitecture(const std::string& value);


protected:
    std::string ecsPerformancetype_;
    bool ecsPerformancetypeIsSet_;
    std::string hwNumaNodes_;
    bool hwNumaNodesIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string hpetSupport_;
    bool hpetSupportIsSet_;
    std::string instanceVnicType_;
    bool instanceVnicTypeIsSet_;
    std::string instanceVnicInstanceBandwidth_;
    bool instanceVnicInstanceBandwidthIsSet_;
    std::string instanceVnicMaxCount_;
    bool instanceVnicMaxCountIsSet_;
    std::string quotaLocalDisk_;
    bool quotaLocalDiskIsSet_;
    std::string quotaNvmeSsd_;
    bool quotaNvmeSsdIsSet_;
    std::string extraSpecIoPersistentGrant_;
    bool extraSpecIoPersistentGrantIsSet_;
    std::string ecsGeneration_;
    bool ecsGenerationIsSet_;
    std::string ecsVirtualizationEnvTypes_;
    bool ecsVirtualizationEnvTypesIsSet_;
    std::string pciPassthroughEnableGpu_;
    bool pciPassthroughEnableGpuIsSet_;
    std::string pciPassthroughGpuSpecs_;
    bool pciPassthroughGpuSpecsIsSet_;
    std::string pciPassthroughAlias_;
    bool pciPassthroughAliasIsSet_;
    std::string condOperationStatus_;
    bool condOperationStatusIsSet_;
    std::string condOperationAz_;
    bool condOperationAzIsSet_;
    std::string quotaMaxRate_;
    bool quotaMaxRateIsSet_;
    std::string quotaMinRate_;
    bool quotaMinRateIsSet_;
    std::string quotaMaxPps_;
    bool quotaMaxPpsIsSet_;
    std::string condOperationCharge_;
    bool condOperationChargeIsSet_;
    std::string condOperationChargeStop_;
    bool condOperationChargeStopIsSet_;
    std::string condSpotOperationAz_;
    bool condSpotOperationAzIsSet_;
    std::string condOperationRoles_;
    bool condOperationRolesIsSet_;
    std::string condSpotOperationStatus_;
    bool condSpotOperationStatusIsSet_;
    std::string condNetwork_;
    bool condNetworkIsSet_;
    std::string condStorage_;
    bool condStorageIsSet_;
    std::string condStorageType_;
    bool condStorageTypeIsSet_;
    std::string condComputeLiveResizable_;
    bool condComputeLiveResizableIsSet_;
    std::string condCompute_;
    bool condComputeIsSet_;
    std::string infoGpuName_;
    bool infoGpuNameIsSet_;
    std::string infoCpuName_;
    bool infoCpuNameIsSet_;
    std::string quotaGpu_;
    bool quotaGpuIsSet_;
    std::string quotaVifMaxNum_;
    bool quotaVifMaxNumIsSet_;
    std::string quotaSubNetworkInterfaceMaxNum_;
    bool quotaSubNetworkInterfaceMaxNumIsSet_;
    std::string ecsInstanceArchitecture_;
    bool ecsInstanceArchitectureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_
