
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerDetail_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerDetail_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/ecs/v2/model/ServerImage.h>
#include <huaweicloud/ecs/v2/model/ServerExtendVolumeAttachment.h>
#include <huaweicloud/ecs/v2/model/ServerSchedulerHints.h>
#include <string>
#include <huaweicloud/ecs/v2/model/SecurityOptions.h>
#include <huaweicloud/ecs/v2/model/Hypervisor.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/ServerSystemTag.h>
#include <huaweicloud/ecs/v2/model/ServerSecurityGroup.h>
#include <huaweicloud/ecs/v2/model/CpuOptions.h>
#include <map>
#include <huaweicloud/ecs/v2/model/ServerFlavor.h>
#include <huaweicloud/ecs/v2/model/ServerAddress.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器详情。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerDetail
    : public ModelBase
{
public:
    ServerDetail();
    virtual ~ServerDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerDetail members

    /// <summary>
    /// 弹性云服务器状态。  取值范围：  ACTIVE、BUILD、DELETED、ERROR、HARD_REBOOT、MIGRATING、PAUSED、REBOOT、REBUILD、RESIZE、REVERT_RESIZE、SHUTOFF、SHELVED、SHELVED_OFFLOADED、SOFT_DELETED、SUSPENDED、VERIFY_RESIZE  弹性云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 弹性云服务器更新时间。  时间格式例如：2019-05-22T03:30:52Z
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 弹性云服务器定时删除时间。  时间格式例如：2020-01-19T03:30:52Z
    /// </summary>

    std::string getAutoTerminateTime() const;
    bool autoTerminateTimeIsSet() const;
    void unsetautoTerminateTime();
    void setAutoTerminateTime(const std::string& value);

    /// <summary>
    /// 弹性云服务器所在主机的主机ID。
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

    /// <summary>
    /// 弹性云服务器所在主机的主机名称。
    /// </summary>

    std::string getOSEXTSRVATTRHost() const;
    bool oSEXTSRVATTRHostIsSet() const;
    void unsetoSEXTSRVATTRHost();
    void setOSEXTSRVATTRHost(const std::string& value);

    /// <summary>
    /// 弹性云服务器的网络属性。
    /// </summary>

    std::map<std::string, std::vector<ServerAddress>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<ServerAddress>>& value);

    /// <summary>
    /// 弹性云服务器使用的密钥对名称。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerImage getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const ServerImage& value);

    /// <summary>
    /// 扩展属性，弹性云服务器当前任务的状态。  取值范围请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)表3。
    /// </summary>

    std::string getOSEXTSTSTaskState() const;
    bool oSEXTSTSTaskStateIsSet() const;
    void unsetoSEXTSTSTaskState();
    void setOSEXTSTSTaskState(const std::string& value);

    /// <summary>
    /// 扩展属性，弹性云服务器当前状态。  云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)。
    /// </summary>

    std::string getOSEXTSTSVmState() const;
    bool oSEXTSTSVmStateIsSet() const;
    void unsetoSEXTSTSVmState();
    void setOSEXTSTSVmState(const std::string& value);

    /// <summary>
    /// 扩展属性，弹性云服务器别名。
    /// </summary>

    std::string getOSEXTSRVATTRInstanceName() const;
    bool oSEXTSRVATTRInstanceNameIsSet() const;
    void unsetoSEXTSRVATTRInstanceName();
    void setOSEXTSRVATTRInstanceName(const std::string& value);

    /// <summary>
    /// 扩展属性，弹性云服务器所在虚拟化主机名。
    /// </summary>

    std::string getOSEXTSRVATTRHypervisorHostname() const;
    bool oSEXTSRVATTRHypervisorHostnameIsSet() const;
    void unsetoSEXTSRVATTRHypervisorHostname();
    void setOSEXTSRVATTRHypervisorHostname(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerFlavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const ServerFlavor& value);

    /// <summary>
    /// 弹性云服务器ID，格式为UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性云服务器所属安全组列表。
    /// </summary>

    std::vector<ServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<ServerSecurityGroup>& value);

    /// <summary>
    /// 扩展属性，弹性云服务器所在可用区名称。
    /// </summary>

    std::string getOSEXTAZAvailabilityZone() const;
    bool oSEXTAZAvailabilityZoneIsSet() const;
    void unsetoSEXTAZAvailabilityZone();
    void setOSEXTAZAvailabilityZone(const std::string& value);

    /// <summary>
    /// 创建弹性云服务器的用户ID，格式为UUID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 弹性云服务器名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 弹性云服务器创建时间。  时间格式例如：2019-05-22T03:19:19Z
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 弹性云服务器所属租户ID，即项目id，和project_id表示相同的概念，格式为UUID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 扩展属性， diskConfig的类型。  - MANUAL，镜像空间不会扩展。 - AUTO，系统盘镜像空间会自动扩展为与flavor大小一致。
    /// </summary>

    std::string getOSDCFDiskConfig() const;
    bool oSDCFDiskConfigIsSet() const;
    void unsetoSDCFDiskConfig();
    void setOSDCFDiskConfig(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAccessIPv4() const;
    bool accessIPv4IsSet() const;
    void unsetaccessIPv4();
    void setAccessIPv4(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAccessIPv6() const;
    bool accessIPv6IsSet() const;
    void unsetaccessIPv6();
    void setAccessIPv6(const std::string& value);

    /// <summary>
    /// 弹性云服务器故障信息。  可选参数，在弹性云服务器状态为ERROR且存在异常的情况下返回。
    /// </summary>

    Object getFault() const;
    bool faultIsSet() const;
    void unsetfault();
    void setFault(const Object& value);

    /// <summary>
    /// 弹性云服务器进度。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 扩展属性，弹性云服务器电源状态。
    /// </summary>

    int32_t getOSEXTSTSPowerState() const;
    bool oSEXTSTSPowerStateIsSet() const;
    void unsetoSEXTSTSPowerState();
    void setOSEXTSTSPowerState(int32_t value);

    /// <summary>
    /// config drive信息。
    /// </summary>

    std::string getConfigDrive() const;
    bool configDriveIsSet() const;
    void unsetconfigDrive();
    void setConfigDrive(const std::string& value);

    /// <summary>
    /// 弹性云服务器元数据。  &gt; 说明： &gt;  &gt; 元数据包含系统默认添加字段和用户设置的字段。  系统默认添加字段  1. charging_mode 云服务器的计费类型。  - “0”：按需计费（即postPaid-后付费方式）。 - “1”：按包年包月计费（即prePaid-预付费方式）。\&quot;2\&quot;：竞价实例计费  2. metering.order_id 按“包年/包月”计费的云服务器对应的订单ID。  3. metering.product_id 按“包年/包月”计费的云服务器对应的产品ID。  4. vpc_id 云服务器所属的虚拟私有云ID。  5. EcmResStatus 云服务器的冻结状态。  - normal：云服务器正常状态（未被冻结）。 - freeze：云服务器被冻结。  &gt; 当云服务器被冻结或者解冻后，系统默认添加该字段，且该字段必选。  6. metering.image_id 云服务器操作系统对应的镜像ID  7.  metering.imagetype 镜像类型，目前支持：  - 公共镜像（gold） - 私有镜像（private） - 共享镜像（shared）  8. metering.resourcespeccode 云服务器对应的资源规格。  9. image_name 云服务器操作系统对应的镜像名称。  10. os_bit 操作系统位数，一般取值为“32”或者“64”。  11. lockCheckEndpoint 回调URL，用于检查弹性云服务器的加锁是否有效。  - 如果有效，则云服务器保持锁定状态。 - 如果无效，解除锁定状态，删除失效的锁。  12. lockSource 弹性云服务器来自哪个服务。订单加锁（ORDER）  13. lockSourceId 弹性云服务器的加锁来自哪个ID。lockSource为“ORDER”时，lockSourceId为订单ID。  14. lockScene 弹性云服务器的加锁类型。  - 按需转包周期（TO_PERIOD_LOCK）  15. virtual_env_type  - IOS镜像创建虚拟机，\&quot;virtual_env_type\&quot;: \&quot;IsoImage\&quot; 属性； - 非IOS镜像创建虚拟机，在19.5.0版本以后创建的虚拟机将不会添加virtual_env_type 属性，而在此之前的版本创建的虚拟机可能会返回\&quot;virtual_env_type\&quot;: \&quot;FusionCompute\&quot;属性 。  &gt; virtual_env_type属性不允许用户增加、删除和修改。  16. metering.resourcetype 云服务器对应的资源类型。  17. os_type 操作系统类型，取值为：Linux、Windows。  18. cascaded.instance_extrainfo 系统内部虚拟机扩展信息。  19. __support_agent_list 云服务器是否支持企业主机安全、主机监控。  - “hss”：企业主机安全 -  “ces”：主机监控  20. agency_name 委托的名称。  委托是由租户管理员在统一身份认证服务（Identity and Access Management，IAM）上创建的，可以为弹性云服务器提供访问云服务的临时凭证。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 弹性云服务器启动时间。时间格式例如：2019-05-22T03:23:59.000000
    /// </summary>

    std::string getOSSRVUSGLaunchedAt() const;
    bool oSSRVUSGLaunchedAtIsSet() const;
    void unsetoSSRVUSGLaunchedAt();
    void setOSSRVUSGLaunchedAt(const std::string& value);

    /// <summary>
    /// 弹性云服务器删除时间。  时间格式例如：2019-05-22T03:23:59.000000
    /// </summary>

    std::string getOSSRVUSGTerminatedAt() const;
    bool oSSRVUSGTerminatedAtIsSet() const;
    void unsetoSSRVUSGTerminatedAt();
    void setOSSRVUSGTerminatedAt(const std::string& value);

    /// <summary>
    /// 挂载到弹性云服务器上的磁盘。
    /// </summary>

    std::vector<ServerExtendVolumeAttachment>& getOsExtendedVolumesVolumesAttached();
    bool osExtendedVolumesVolumesAttachedIsSet() const;
    void unsetosExtendedVolumesVolumesAttached();
    void setOsExtendedVolumesVolumesAttached(const std::vector<ServerExtendVolumeAttachment>& value);

    /// <summary>
    /// 弹性云服务器的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// nova-compute状态。  - UP：服务正常 - UNKNOWN：状态未知 - DOWN：服务异常 - MAINTENANCE：维护状态 - 空字符串：弹性云服务器无主机信息
    /// </summary>

    std::string getHostStatus() const;
    bool hostStatusIsSet() const;
    void unsethostStatus();
    void setHostStatus(const std::string& value);

    /// <summary>
    /// 弹性云服务器的主机名。
    /// </summary>

    std::string getOSEXTSRVATTRHostname() const;
    bool oSEXTSRVATTRHostnameIsSet() const;
    void unsetoSEXTSRVATTRHostname();
    void setOSEXTSRVATTRHostname(const std::string& value);

    /// <summary>
    /// 批量创建场景，弹性云服务器的预留ID。
    /// </summary>

    std::string getOSEXTSRVATTRReservationId() const;
    bool oSEXTSRVATTRReservationIdIsSet() const;
    void unsetoSEXTSRVATTRReservationId();
    void setOSEXTSRVATTRReservationId(const std::string& value);

    /// <summary>
    /// 批量创建场景，弹性云服务器的启动顺序。
    /// </summary>

    int32_t getOSEXTSRVATTRLaunchIndex() const;
    bool oSEXTSRVATTRLaunchIndexIsSet() const;
    void unsetoSEXTSRVATTRLaunchIndex();
    void setOSEXTSRVATTRLaunchIndex(int32_t value);

    /// <summary>
    /// 若使用AMI格式的镜像，则表示kernel image的UUID；否则，留空。
    /// </summary>

    std::string getOSEXTSRVATTRKernelId() const;
    bool oSEXTSRVATTRKernelIdIsSet() const;
    void unsetoSEXTSRVATTRKernelId();
    void setOSEXTSRVATTRKernelId(const std::string& value);

    /// <summary>
    /// 若使用AMI格式镜像，则表示ramdisk image的UUID；否则，留空。
    /// </summary>

    std::string getOSEXTSRVATTRRamdiskId() const;
    bool oSEXTSRVATTRRamdiskIdIsSet() const;
    void unsetoSEXTSRVATTRRamdiskId();
    void setOSEXTSRVATTRRamdiskId(const std::string& value);

    /// <summary>
    /// 弹性云服务器系统盘的设备名称。
    /// </summary>

    std::string getOSEXTSRVATTRRootDeviceName() const;
    bool oSEXTSRVATTRRootDeviceNameIsSet() const;
    void unsetoSEXTSRVATTRRootDeviceName();
    void setOSEXTSRVATTRRootDeviceName(const std::string& value);

    /// <summary>
    /// 创建弹性云服务器时指定的user_data。
    /// </summary>

    std::string getOSEXTSRVATTRUserData() const;
    bool oSEXTSRVATTRUserDataIsSet() const;
    void unsetoSEXTSRVATTRUserData();
    void setOSEXTSRVATTRUserData(const std::string& value);

    /// <summary>
    /// 弹性云服务器是否为锁定状态。  - true：锁定 - false：未锁定
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);

    /// <summary>
    /// 弹性云服务器标签。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ServerSchedulerHints getOsSchedulerHints() const;
    bool osSchedulerHintsIsSet() const;
    void unsetosSchedulerHints();
    void setOsSchedulerHints(const ServerSchedulerHints& value);

    /// <summary>
    /// 弹性云服务器所属的企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 弹性云服务器系统标签。
    /// </summary>

    std::vector<ServerSystemTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ServerSystemTag>& value);

    /// <summary>
    /// 
    /// </summary>

    CpuOptions getCpuOptions() const;
    bool cpuOptionsIsSet() const;
    void unsetcpuOptions();
    void setCpuOptions(const CpuOptions& value);

    /// <summary>
    /// 
    /// </summary>

    SecurityOptions getSecurityOptions() const;
    bool securityOptionsIsSet() const;
    void unsetsecurityOptions();
    void setSecurityOptions(const SecurityOptions& value);

    /// <summary>
    /// 
    /// </summary>

    Hypervisor getHypervisor() const;
    bool hypervisorIsSet() const;
    void unsethypervisor();
    void setHypervisor(const Hypervisor& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string autoTerminateTime_;
    bool autoTerminateTimeIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    std::string oSEXTSRVATTRHost_;
    bool oSEXTSRVATTRHostIsSet_;
    std::map<std::string, std::vector<ServerAddress>> addresses_;
    bool addressesIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    ServerImage image_;
    bool imageIsSet_;
    std::string oSEXTSTSTaskState_;
    bool oSEXTSTSTaskStateIsSet_;
    std::string oSEXTSTSVmState_;
    bool oSEXTSTSVmStateIsSet_;
    std::string oSEXTSRVATTRInstanceName_;
    bool oSEXTSRVATTRInstanceNameIsSet_;
    std::string oSEXTSRVATTRHypervisorHostname_;
    bool oSEXTSRVATTRHypervisorHostnameIsSet_;
    ServerFlavor flavor_;
    bool flavorIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<ServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string oSEXTAZAvailabilityZone_;
    bool oSEXTAZAvailabilityZoneIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string oSDCFDiskConfig_;
    bool oSDCFDiskConfigIsSet_;
    std::string accessIPv4_;
    bool accessIPv4IsSet_;
    std::string accessIPv6_;
    bool accessIPv6IsSet_;
    Object fault_;
    bool faultIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    int32_t oSEXTSTSPowerState_;
    bool oSEXTSTSPowerStateIsSet_;
    std::string configDrive_;
    bool configDriveIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string oSSRVUSGLaunchedAt_;
    bool oSSRVUSGLaunchedAtIsSet_;
    std::string oSSRVUSGTerminatedAt_;
    bool oSSRVUSGTerminatedAtIsSet_;
    std::vector<ServerExtendVolumeAttachment> osExtendedVolumesVolumesAttached_;
    bool osExtendedVolumesVolumesAttachedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string hostStatus_;
    bool hostStatusIsSet_;
    std::string oSEXTSRVATTRHostname_;
    bool oSEXTSRVATTRHostnameIsSet_;
    std::string oSEXTSRVATTRReservationId_;
    bool oSEXTSRVATTRReservationIdIsSet_;
    int32_t oSEXTSRVATTRLaunchIndex_;
    bool oSEXTSRVATTRLaunchIndexIsSet_;
    std::string oSEXTSRVATTRKernelId_;
    bool oSEXTSRVATTRKernelIdIsSet_;
    std::string oSEXTSRVATTRRamdiskId_;
    bool oSEXTSRVATTRRamdiskIdIsSet_;
    std::string oSEXTSRVATTRRootDeviceName_;
    bool oSEXTSRVATTRRootDeviceNameIsSet_;
    std::string oSEXTSRVATTRUserData_;
    bool oSEXTSRVATTRUserDataIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    ServerSchedulerHints osSchedulerHints_;
    bool osSchedulerHintsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<ServerSystemTag> sysTags_;
    bool sysTagsIsSet_;
    CpuOptions cpuOptions_;
    bool cpuOptionsIsSet_;
    SecurityOptions securityOptions_;
    bool securityOptionsIsSet_;
    Hypervisor hypervisor_;
    bool hypervisorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerDetail_H_
