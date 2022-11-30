
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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

    std::string getEcsperformancetype() const;
    bool ecsperformancetypeIsSet() const;
    void unsetecsperformancetype();
    void setEcsperformancetype(const std::string& value);

    /// <summary>
    /// 主机的物理cpu数量。
    /// </summary>

    std::string getHwnumaNodes() const;
    bool hwnumaNodesIsSet() const;
    void unsethwnumaNodes();
    void setHwnumaNodes(const std::string& value);

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

    std::string getInstanceVnictype() const;
    bool instanceVnictypeIsSet() const;
    void unsetinstanceVnictype();
    void setInstanceVnictype(const std::string& value);

    /// <summary>
    /// 最大带宽，单位Mbps，最大值为10000。
    /// </summary>

    std::string getInstanceVnicinstanceBandwidth() const;
    bool instanceVnicinstanceBandwidthIsSet() const;
    void unsetinstanceVnicinstanceBandwidth();
    void setInstanceVnicinstanceBandwidth(const std::string& value);

    /// <summary>
    /// 最大网卡个数，最大为4。
    /// </summary>

    std::string getInstanceVnicmaxCount() const;
    bool instanceVnicmaxCountIsSet() const;
    void unsetinstanceVnicmaxCount();
    void setInstanceVnicmaxCount(const std::string& value);

    /// <summary>
    /// 值格式为{type}:{count}:{size}:{safeFormat}，其中：  - type指磁盘类型，当前只支持hdd。 - count指本地磁盘数量，目前支持d1类型：3/6/12/24，d2类型：2/4/8/12/16/24，d3类型：2/4/8/12/16/24/28。 - size指单个磁盘容量，单位GB，目前只支持1675（实际磁盘大小为1800，格式化后可用大小为1675）。 - safeFormat指云服务器本地磁盘是否安全格式化，目前仅支持d1类型：FALSE，d2/d3类型：True。  &gt; 说明：  - 磁盘增强型特有字段。
    /// </summary>

    std::string getQuotalocalDisk() const;
    bool quotalocalDiskIsSet() const;
    void unsetquotalocalDisk();
    void setQuotalocalDisk(const std::string& value);

    /// <summary>
    /// 值格式为{type}:{spec}:{size}:{safeFormat}，其中：  - type指主机上配备的nvme ssd的单卡容量大小，当前只支持1.6T/3.2T。 - spec指nvme ssd的规格，包括large/small。large表示大规格，small表示小规格。目前仅支持i3类型：large。 - size指guest使用的盘的容量大小，单位为GB。在spec值为large的情况下，此项即为host单卡大小。在spec值为small的情况下，此为1/4规格或者1/2规格。 - safeFormat指云服务器本地磁盘是否安全格式化，目前仅支持i3类型：True。  &gt; 说明：  - 超高I/O型特有字段。
    /// </summary>

    std::string getQuotanvmeSsd() const;
    bool quotanvmeSsdIsSet() const;
    void unsetquotanvmeSsd();
    void setQuotanvmeSsd(const std::string& value);

    /// <summary>
    /// 是否支持持久化，值为true。  代表云服务器访问存储的方式为持久化授权。   &gt; 说明：  - 密集存储D1型特有字段。
    /// </summary>

    std::string getExtraSpeciopersistentGrant() const;
    bool extraSpeciopersistentGrantIsSet() const;
    void unsetextraSpeciopersistentGrant();
    void setExtraSpeciopersistentGrant(const std::string& value);

    /// <summary>
    /// 弹性云服务器类型的代数。  - s1：通用型I代 - s2：通用型II代 - s3：通用型 - m1：内存优化型I代 - m2：内存优化型II代 - m3：内存优化型 - h1：高性能计算型I代 - h2：高性能计算型II代 - h3：高性能计算型 - hi3：超高性能计算型 - d1：密集存储型I代 - d2：密集存储型II代 - d3：磁盘增强型 - g1：GPU加速型I代 - g2：GPU加速型II代 - f1：FPGA高性能型 - f2：FPGA通用型 - c3：通用计算增强型 - e3：大内存型 - i3：超高I/O型
    /// </summary>

    std::string getEcsgeneration() const;
    bool ecsgenerationIsSet() const;
    void unsetecsgeneration();
    void setEcsgeneration(const std::string& value);

    /// <summary>
    /// 虚拟化类型。  - 如果值为“FusionCompute”，表示弹性云服务器使用基于XEN的虚拟化技术。 - 如果值为“CloudCompute”，表示弹性云服务器使用基于KVM的虚拟化技术。
    /// </summary>

    std::string getEcsvirtualizationEnvTypes() const;
    bool ecsvirtualizationEnvTypesIsSet() const;
    void unsetecsvirtualizationEnvTypes();
    void setEcsvirtualizationEnvTypes(const std::string& value);

    /// <summary>
    /// 显卡是否直通。  值为“true”，表示GPU直通。
    /// </summary>

    std::string getPciPassthroughenableGpu() const;
    bool pciPassthroughenableGpuIsSet() const;
    void unsetpciPassthroughenableGpu();
    void setPciPassthroughenableGpu(const std::string& value);

    /// <summary>
    /// G1型和G2型云服务器应用的技术，包括GPU虚拟化和GPU直通。  - 如果该规格的云服务器使用GPU虚拟化技术，且GPU卡的型号为M60-1Q，参数值可设置为“m60_1q:virt:1”。 - 如果该规格的云服务器使用GPU直通技术，且GPU卡的型号为M60，参数值可设置为“m60:direct_graphics:1”。
    /// </summary>

    std::string getPciPassthroughgpuSpecs() const;
    bool pciPassthroughgpuSpecsIsSet() const;
    void unsetpciPassthroughgpuSpecs();
    void setPciPassthroughgpuSpecs(const std::string& value);

    /// <summary>
    /// P1型v本地直通GPU的型号和数量，参数值可设置为“nvidia-p100:1”，表示使用该规格创建的弹性云服务器将占用1张NVIDIA P100显卡。
    /// </summary>

    std::string getPciPassthroughalias() const;
    bool pciPassthroughaliasIsSet() const;
    void unsetpciPassthroughalias();
    void setPciPassthroughalias(const std::string& value);

    /// <summary>
    /// 此参数是Region级配置，某个AZ没有在cond:operation:az参数中配置时默认使用此参数的取值。不配置或无此参数时等同于“normal”。取值范围：  - normal：正常商用 - abandon：下线（即不显示） - sellout：售罄 - obt：公测 - promotion：推荐(等同normal，也是商用)
    /// </summary>

    std::string getCondoperationstatus() const;
    bool condoperationstatusIsSet() const;
    void unsetcondoperationstatus();
    void setCondoperationstatus(const std::string& value);

    /// <summary>
    /// 此参数是AZ级配置，某个AZ没有在此参数中配置时默认使用cond:operation:status参数的取值。此参数的配置格式“az(xx)”。()内为某个AZ的flavor状态，()内必须要填有状态，不填为无效配置。状态的取值范围与cond:operation:status参数相同。  例如：flavor在某个region的az0正常商用，az1售罄，az2公测，az3正常商用，其他az显示下线，可配置为：  - “cond:operation:status”设置为“abandon” - “cond:operation:az”设置为“az0(normal), az1(sellout), az2(obt), az3(normal)”  &gt; 说明：  - 如果flavor在某个AZ下的状态与cond:operation:status配置状态不同，必须配置该参数。
    /// </summary>

    std::string getCondoperationaz() const;
    bool condoperationazIsSet() const;
    void unsetcondoperationaz();
    void setCondoperationaz(const std::string& value);

    /// <summary>
    /// 最大带宽  - 单位Mbps，显示为Gbps时除以1000
    /// </summary>

    std::string getQuotamaxRate() const;
    bool quotamaxRateIsSet() const;
    void unsetquotamaxRate();
    void setQuotamaxRate(const std::string& value);

    /// <summary>
    /// 基准带宽  - 单位Mbps，显示为Gbps时除以1000
    /// </summary>

    std::string getQuotaminRate() const;
    bool quotaminRateIsSet() const;
    void unsetquotaminRate();
    void setQuotaminRate(const std::string& value);

    /// <summary>
    /// 内网最大收发包能力  - 单位个，显示为xx万时除以10000
    /// </summary>

    std::string getQuotamaxPps() const;
    bool quotamaxPpsIsSet() const;
    void unsetquotamaxPps();
    void setQuotamaxPps(const std::string& value);

    /// <summary>
    /// 计费类型  - 计费场景，不配置时都支持 - period，包周期 - demand，按需
    /// </summary>

    std::string getCondoperationcharge() const;
    bool condoperationchargeIsSet() const;
    void unsetcondoperationcharge();
    void setCondoperationcharge(const std::string& value);

    /// <summary>
    /// 关机是否收费  - 关机是否计费，默认免费： - charge - free
    /// </summary>

    std::string getCondoperationchargestop() const;
    bool condoperationchargestopIsSet() const;
    void unsetcondoperationchargestop();
    void setCondoperationchargestop(const std::string& value);

    /// <summary>
    /// 计费类型  - 计费场景，不配置时都支持 - period，包周期 - demand，按需
    /// </summary>

    std::string getCondspotoperationaz() const;
    bool condspotoperationazIsSet() const;
    void unsetcondspotoperationaz();
    void setCondspotoperationaz(const std::string& value);

    /// <summary>
    /// 允许的角色 匹配的用户标签（roles的op_gatexxx标签）。不设置时所有用户可见
    /// </summary>

    std::string getCondoperationroles() const;
    bool condoperationrolesIsSet() const;
    void unsetcondoperationroles();
    void setCondoperationroles(const std::string& value);

    /// <summary>
    /// Flavor在竞价销售模式下的状态  - 不配置时等同abandon - normal，正常商用 - abandon，下线 - sellout，售罄 - obt，公测，未申请时提示申请（暂不支持） - private，私有，只给特定用户显示（暂不支持） - test，试用/免费（暂不支持） - promotion，推荐
    /// </summary>

    std::string getCondspotoperationstatus() const;
    bool condspotoperationstatusIsSet() const;
    void unsetcondspotoperationstatus();
    void setCondspotoperationstatus(const std::string& value);

    /// <summary>
    /// 网络约束 支持网络特性，不配置时以UI配置为准。
    /// </summary>

    std::string getCondnetwork() const;
    bool condnetworkIsSet() const;
    void unsetcondnetwork();
    void setCondnetwork(const std::string& value);

    /// <summary>
    /// 存储约束  - 支持磁盘特性，不配置时以UI配置为准。 - scsi，支持scsi - localdisk，支持本地盘 - ib，支持ib
    /// </summary>

    std::string getCondstorage() const;
    bool condstorageIsSet() const;
    void unsetcondstorage();
    void setCondstorage(const std::string& value);

    /// <summary>
    /// 计算约束  - true，支持在线扩容。 - false或不存在该字段，不支持在线扩容。
    /// </summary>

    std::string getCondcomputeliveResizable() const;
    bool condcomputeliveResizableIsSet() const;
    void unsetcondcomputeliveResizable();
    void setCondcomputeliveResizable(const std::string& value);

    /// <summary>
    /// 计算约束  - autorecovery，自动恢复特性。 - 不存在该字段，不支持自动恢复。
    /// </summary>

    std::string getCondcompute() const;
    bool condcomputeIsSet() const;
    void unsetcondcompute();
    void setCondcompute(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getInfogpuname() const;
    bool infogpunameIsSet() const;
    void unsetinfogpuname();
    void setInfogpuname(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getInfocpuname() const;
    bool infocpunameIsSet() const;
    void unsetinfocpuname();
    void setInfocpuname(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getQuotagpu() const;
    bool quotagpuIsSet() const;
    void unsetquotagpu();
    void setQuotagpu(const std::string& value);

    /// <summary>
    /// 该规格对应的CPU架构，且仅鲲鹏实例架构规格返回该字段  - 取值为arm64表示CPU架构为鲲鹏计算。
    /// </summary>

    std::string getEcsinstanceArchitecture() const;
    bool ecsinstanceArchitectureIsSet() const;
    void unsetecsinstanceArchitecture();
    void setEcsinstanceArchitecture(const std::string& value);


protected:
    std::string ecsperformancetype_;
    bool ecsperformancetypeIsSet_;
    std::string hwnumaNodes_;
    bool hwnumaNodesIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string hpetSupport_;
    bool hpetSupportIsSet_;
    std::string instanceVnictype_;
    bool instanceVnictypeIsSet_;
    std::string instanceVnicinstanceBandwidth_;
    bool instanceVnicinstanceBandwidthIsSet_;
    std::string instanceVnicmaxCount_;
    bool instanceVnicmaxCountIsSet_;
    std::string quotalocalDisk_;
    bool quotalocalDiskIsSet_;
    std::string quotanvmeSsd_;
    bool quotanvmeSsdIsSet_;
    std::string extraSpeciopersistentGrant_;
    bool extraSpeciopersistentGrantIsSet_;
    std::string ecsgeneration_;
    bool ecsgenerationIsSet_;
    std::string ecsvirtualizationEnvTypes_;
    bool ecsvirtualizationEnvTypesIsSet_;
    std::string pciPassthroughenableGpu_;
    bool pciPassthroughenableGpuIsSet_;
    std::string pciPassthroughgpuSpecs_;
    bool pciPassthroughgpuSpecsIsSet_;
    std::string pciPassthroughalias_;
    bool pciPassthroughaliasIsSet_;
    std::string condoperationstatus_;
    bool condoperationstatusIsSet_;
    std::string condoperationaz_;
    bool condoperationazIsSet_;
    std::string quotamaxRate_;
    bool quotamaxRateIsSet_;
    std::string quotaminRate_;
    bool quotaminRateIsSet_;
    std::string quotamaxPps_;
    bool quotamaxPpsIsSet_;
    std::string condoperationcharge_;
    bool condoperationchargeIsSet_;
    std::string condoperationchargestop_;
    bool condoperationchargestopIsSet_;
    std::string condspotoperationaz_;
    bool condspotoperationazIsSet_;
    std::string condoperationroles_;
    bool condoperationrolesIsSet_;
    std::string condspotoperationstatus_;
    bool condspotoperationstatusIsSet_;
    std::string condnetwork_;
    bool condnetworkIsSet_;
    std::string condstorage_;
    bool condstorageIsSet_;
    std::string condcomputeliveResizable_;
    bool condcomputeliveResizableIsSet_;
    std::string condcompute_;
    bool condcomputeIsSet_;
    std::string infogpuname_;
    bool infogpunameIsSet_;
    std::string infocpuname_;
    bool infocpunameIsSet_;
    std::string quotagpu_;
    bool quotagpuIsSet_;
    std::string ecsinstanceArchitecture_;
    bool ecsinstanceArchitectureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_
