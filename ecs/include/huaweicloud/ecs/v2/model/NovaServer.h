
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServer_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServer_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaServerSecurityGroup.h>
#include <huaweicloud/ecs/v2/model/NovaLink.h>
#include <huaweicloud/ecs/v2/model/NovaServerFault.h>
#include <huaweicloud/ecs/v2/model/NovaServerFlavor.h>
#include <huaweicloud/ecs/v2/model/NovaNetwork.h>
#include <huaweicloud/ecs/v2/model/NovaServerSchedulerHints.h>
#include <string>
#include <huaweicloud/ecs/v2/model/NovaServerImage.h>
#include <map>
#include <vector>
#include <huaweicloud/ecs/v2/model/NovaServerVolume.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaServer
    : public ModelBase
{
public:
    NovaServer();
    virtual ~NovaServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaServer members

    /// <summary>
    /// 云服务器名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务器唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器当前状态信息。  取值范围： ACTIVE， BUILD，DELETED，ERROR，HARD_REBOOT，MIGRATING，REBOOT，RESIZE，REVERT_RESIZE，SHELVED，SHELVED_OFFLOADED，SHUTOFF，UNKNOWN，VERIFY_RESIZE  云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云服务器创建时间。 时间格式例如：2019-05-22T07:48:53Z
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 云服务器上一次更新时间。时间格式例如：2019-05-22T07:48:53Z
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NovaServerFlavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const NovaServerFlavor& value);

    /// <summary>
    /// 
    /// </summary>

    NovaServerImage getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const NovaServerImage& value);

    /// <summary>
    /// 云服务器所属租户ID。即项目id，与project_id表示相同的概念。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// SSH密钥名称。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 云服务器所属用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 云服务器元数据。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 云服务器对应的主机ID。
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

    /// <summary>
    /// 云服务器对应的网络地址信息。
    /// </summary>

    std::map<std::string, std::vector<NovaNetwork>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<NovaNetwork>>& value);

    /// <summary>
    /// 云服务器所属安全组列表。
    /// </summary>

    std::vector<NovaServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value);

    /// <summary>
    /// 云服务器相关标记快捷链接信息。
    /// </summary>

    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);

    /// <summary>
    /// 扩展属性，磁盘配置方式。对镜像启动云服务器生效。  取值范围：  - AUTO: API使用单个分区构建目标磁盘大小的云服务器。 API会自动调整文件系统以适应整个分区。 - MANUAL：API使用源映像中的分区方案和文件系统构建服务器。如果目标磁盘较大，则API不分区剩余的磁盘空间。
    /// </summary>

    std::string getOSDCFDiskConfig() const;
    bool oSDCFDiskConfigIsSet() const;
    void unsetoSDCFDiskConfig();
    void setOSDCFDiskConfig(const std::string& value);

    /// <summary>
    /// 扩展属性，可用分区编码。
    /// </summary>

    std::string getOSEXTAZAvailabilityZone() const;
    bool oSEXTAZAvailabilityZoneIsSet() const;
    void unsetoSEXTAZAvailabilityZone();
    void setOSEXTAZAvailabilityZone(const std::string& value);

    /// <summary>
    /// 扩展属性，与主机宿主名称。
    /// </summary>

    std::string getOSEXTSRVATTRHost() const;
    bool oSEXTSRVATTRHostIsSet() const;
    void unsetoSEXTSRVATTRHost();
    void setOSEXTSRVATTRHost(const std::string& value);

    /// <summary>
    /// 扩展属性，hypervisor主机名。
    /// </summary>

    std::string getOSEXTSRVATTRHypervisorHostname() const;
    bool oSEXTSRVATTRHypervisorHostnameIsSet() const;
    void unsetoSEXTSRVATTRHypervisorHostname();
    void setOSEXTSRVATTRHypervisorHostname(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器实例ID。
    /// </summary>

    std::string getOSEXTSRVATTRInstanceName() const;
    bool oSEXTSRVATTRInstanceNameIsSet() const;
    void unsetoSEXTSRVATTRInstanceName();
    void setOSEXTSRVATTRInstanceName(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器电源状态。  取值范围：0，1，2，3，4  - 0 : pending - 1 : running - 2 : paused - 3 : shutdown - 4 : crashed
    /// </summary>

    int32_t getOSEXTSTSPowerState() const;
    bool oSEXTSTSPowerStateIsSet() const;
    void unsetoSEXTSTSPowerState();
    void setOSEXTSTSPowerState(int32_t value);

    /// <summary>
    /// 扩展属性，云服务器任务状态。  取值范围：  SHOUTOFF, RESIZE, REBUILD, VERIFY_RESIZE, REVERT_RESIZE, PAUSED, MIGRATING, SUSPENDED, RESCUE, ERROR, DELETED,SOFT_DELETED,SHELVED,SHELVED_OFFLOADED  取值范围请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)表3。
    /// </summary>

    std::string getOSEXTSTSTaskState() const;
    bool oSEXTSTSTaskStateIsSet() const;
    void unsetoSEXTSTSTaskState();
    void setOSEXTSTSTaskState(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器状态。  取值范围：  ACTIVE,BUILDING,STOPPED,RESIZED,PAUSED,SUSPENDED,RESCUED,ERROR,DELETED,SOFT_DELETED,SHELVED,SHELVED_OFFLOADED  云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)。
    /// </summary>

    std::string getOSEXTSTSVmState() const;
    bool oSEXTSTSVmStateIsSet() const;
    void unsetoSEXTSTSVmState();
    void setOSEXTSTSVmState(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器启动时间。时间格式例如：2019-05-22T07:48:19.000000
    /// </summary>

    std::string getOSSRVUSGLaunchedAt() const;
    bool oSSRVUSGLaunchedAtIsSet() const;
    void unsetoSSRVUSGLaunchedAt();
    void setOSSRVUSGLaunchedAt(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器关闭时间。  时间格式例如：2019-05-22T07:48:19.000000
    /// </summary>

    std::string getOSSRVUSGTerminatedAt() const;
    bool oSSRVUSGTerminatedAtIsSet() const;
    void unsetoSSRVUSGTerminatedAt();
    void setOSSRVUSGTerminatedAt(const std::string& value);

    /// <summary>
    /// 云服务器挂载的云磁盘信息。
    /// </summary>

    std::vector<NovaServerVolume>& getOsExtendedVolumesVolumesAttached();
    bool osExtendedVolumesVolumesAttachedIsSet() const;
    void unsetosExtendedVolumesVolumesAttached();
    void setOsExtendedVolumesVolumesAttached(const std::vector<NovaServerVolume>& value);

    /// <summary>
    /// 
    /// </summary>

    NovaServerFault getFault() const;
    bool faultIsSet() const;
    void unsetfault();
    void setFault(const NovaServerFault& value);

    /// <summary>
    /// 弹性云服务器的描述信息。  微版本2.19后支持
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
    /// 弹性云服务器的主机名。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRHostname() const;
    bool oSEXTSRVATTRHostnameIsSet() const;
    void unsetoSEXTSRVATTRHostname();
    void setOSEXTSRVATTRHostname(const std::string& value);

    /// <summary>
    /// 批量创建场景，弹性云服务器的预留ID。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRReservationId() const;
    bool oSEXTSRVATTRReservationIdIsSet() const;
    void unsetoSEXTSRVATTRReservationId();
    void setOSEXTSRVATTRReservationId(const std::string& value);

    /// <summary>
    /// 批量创建场景，弹性云服务器的启动顺序。  微版本2.3后支持
    /// </summary>

    int32_t getOSEXTSRVATTRLaunchIndex() const;
    bool oSEXTSRVATTRLaunchIndexIsSet() const;
    void unsetoSEXTSRVATTRLaunchIndex();
    void setOSEXTSRVATTRLaunchIndex(int32_t value);

    /// <summary>
    /// 若使用AMI格式的镜像，则表示kernel image的UUID；否则，留空。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRKernelId() const;
    bool oSEXTSRVATTRKernelIdIsSet() const;
    void unsetoSEXTSRVATTRKernelId();
    void setOSEXTSRVATTRKernelId(const std::string& value);

    /// <summary>
    /// 若使用AMI格式镜像，则表示ramdisk image的UUID；否则，留空。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRRamdiskId() const;
    bool oSEXTSRVATTRRamdiskIdIsSet() const;
    void unsetoSEXTSRVATTRRamdiskId();
    void setOSEXTSRVATTRRamdiskId(const std::string& value);

    /// <summary>
    /// 弹性云服务器系统盘的设备名称。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRRootDeviceName() const;
    bool oSEXTSRVATTRRootDeviceNameIsSet() const;
    void unsetoSEXTSRVATTRRootDeviceName();
    void setOSEXTSRVATTRRootDeviceName(const std::string& value);

    /// <summary>
    /// 创建弹性云服务器时指定的user_data。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRUserData() const;
    bool oSEXTSRVATTRUserDataIsSet() const;
    void unsetoSEXTSRVATTRUserData();
    void setOSEXTSRVATTRUserData(const std::string& value);

    /// <summary>
    /// 云服务器的标签列表。  系统近期对标签功能进行了升级，升级后，返回的tag值遵循如下规则：  - key与value使用“&#x3D;”连接，如“key&#x3D;value”。 - 如果value为空字符串，则仅返回key。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 当云服务器被锁时为True，否则为False。  微版本2.9后支持
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);

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
    /// 预留属性。
    /// </summary>

    std::string getConfigDrive() const;
    bool configDriveIsSet() const;
    void unsetconfigDrive();
    void setConfigDrive(const std::string& value);

    /// <summary>
    /// 预留属性
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    NovaServerSchedulerHints getOsSchedulerHints() const;
    bool osSchedulerHintsIsSet() const;
    void unsetosSchedulerHints();
    void setOsSchedulerHints(const NovaServerSchedulerHints& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    NovaServerFlavor flavor_;
    bool flavorIsSet_;
    NovaServerImage image_;
    bool imageIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    std::map<std::string, std::vector<NovaNetwork>> addresses_;
    bool addressesIsSet_;
    std::vector<NovaServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    std::string oSDCFDiskConfig_;
    bool oSDCFDiskConfigIsSet_;
    std::string oSEXTAZAvailabilityZone_;
    bool oSEXTAZAvailabilityZoneIsSet_;
    std::string oSEXTSRVATTRHost_;
    bool oSEXTSRVATTRHostIsSet_;
    std::string oSEXTSRVATTRHypervisorHostname_;
    bool oSEXTSRVATTRHypervisorHostnameIsSet_;
    std::string oSEXTSRVATTRInstanceName_;
    bool oSEXTSRVATTRInstanceNameIsSet_;
    int32_t oSEXTSTSPowerState_;
    bool oSEXTSTSPowerStateIsSet_;
    std::string oSEXTSTSTaskState_;
    bool oSEXTSTSTaskStateIsSet_;
    std::string oSEXTSTSVmState_;
    bool oSEXTSTSVmStateIsSet_;
    std::string oSSRVUSGLaunchedAt_;
    bool oSSRVUSGLaunchedAtIsSet_;
    std::string oSSRVUSGTerminatedAt_;
    bool oSSRVUSGTerminatedAtIsSet_;
    std::vector<NovaServerVolume> osExtendedVolumesVolumesAttached_;
    bool osExtendedVolumesVolumesAttachedIsSet_;
    NovaServerFault fault_;
    bool faultIsSet_;
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
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::string accessIPv4_;
    bool accessIPv4IsSet_;
    std::string accessIPv6_;
    bool accessIPv6IsSet_;
    std::string configDrive_;
    bool configDriveIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    NovaServerSchedulerHints osSchedulerHints_;
    bool osSchedulerHintsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServer_H_
