
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServer_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServer_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/NovaNetwork.h"
#include "huaweicloud/ecs/model/NovaServerImage.h"
#include "huaweicloud/ecs/model/NovaServerFlavor.h"
#include "huaweicloud/ecs/model/NovaServerSecurityGroup.h"
#include <string>
#include "huaweicloud/ecs/model/NovaServerFault.h"
#include <map>
#include <vector>
#include "huaweicloud/ecs/model/NovaLink.h"
#include "huaweicloud/ecs/model/NovaServerVolume.h"

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
class HUAWEICLOUD_ECS_EXPORT  NovaServer
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
    /// 云服务器当前状态信息。   取值范围： ACTIVE， BUILD，DELETED，ERROR，HARD_REBOOT，MIGRATING，REBOOT，RESIZE，REVERT_RESIZE，SHELVED，SHELVED_OFFLOADED，SHUTOFF，UNKNOWN，VERIFY_RESIZE
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

    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);

    /// <summary>
    /// 扩展属性，可用分区编码。
    /// </summary>

    std::string getOSEXTAZavailabilityZone() const;
    bool oSEXTAZavailabilityZoneIsSet() const;
    void unsetoSEXTAZavailabilityZone();
    void setOSEXTAZavailabilityZone(const std::string& value);

    /// <summary>
    /// 扩展属性，与主机宿主名称。
    /// </summary>

    std::string getOSEXTSRVATTRhost() const;
    bool oSEXTSRVATTRhostIsSet() const;
    void unsetoSEXTSRVATTRhost();
    void setOSEXTSRVATTRhost(const std::string& value);

    /// <summary>
    /// 扩展属性，hypervisor主机名。
    /// </summary>

    std::string getOSEXTSRVATTRhypervisorHostname() const;
    bool oSEXTSRVATTRhypervisorHostnameIsSet() const;
    void unsetoSEXTSRVATTRhypervisorHostname();
    void setOSEXTSRVATTRhypervisorHostname(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器实例ID。
    /// </summary>

    std::string getOSEXTSRVATTRinstanceName() const;
    bool oSEXTSRVATTRinstanceNameIsSet() const;
    void unsetoSEXTSRVATTRinstanceName();
    void setOSEXTSRVATTRinstanceName(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器电源状态。  取值范围：0，1，2，3，4  - 0 : pending - 1 : running - 2 : paused - 3 : shutdown - 4 : crashed
    /// </summary>

    int32_t getOSEXTSTSpowerState() const;
    bool oSEXTSTSpowerStateIsSet() const;
    void unsetoSEXTSTSpowerState();
    void setOSEXTSTSpowerState(int32_t value);

    /// <summary>
    /// 扩展属性，云服务器任务状态。   取值范围：  SHOUTOFF, RESIZE, REBUILD, VERIFY_RESIZE, REVERT_RESIZE, PAUSED, MIGRATING, SUSPENDED, RESCUE, ERROR, DELETED,SOFT_DELETED,SHELVED,SHELVED_OFFLOADED
    /// </summary>

    std::string getOSEXTSTStaskState() const;
    bool oSEXTSTStaskStateIsSet() const;
    void unsetoSEXTSTStaskState();
    void setOSEXTSTStaskState(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器状态。  取值范围：   ACTIVE,BUILDING,STOPPED,RESIZED,PAUSED,SUSPENDED,RESCUED,ERROR,DELETED,SOFT_DELETED,SHELVED,SHELVED_OFFLOADED
    /// </summary>

    std::string getOSEXTSTSvmState() const;
    bool oSEXTSTSvmStateIsSet() const;
    void unsetoSEXTSTSvmState();
    void setOSEXTSTSvmState(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器启动时间。时间格式例如：2019-05-22T07:48:19.000000
    /// </summary>

    std::string getOSSRVUSGlaunchedAt() const;
    bool oSSRVUSGlaunchedAtIsSet() const;
    void unsetoSSRVUSGlaunchedAt();
    void setOSSRVUSGlaunchedAt(const std::string& value);

    /// <summary>
    /// 扩展属性，云服务器关闭时间。  时间格式例如：2019-05-22T07:48:19.000000
    /// </summary>

    std::string getOSSRVUSGterminatedAt() const;
    bool oSSRVUSGterminatedAtIsSet() const;
    void unsetoSSRVUSGterminatedAt();
    void setOSSRVUSGterminatedAt(const std::string& value);

    /// <summary>
    /// 云服务器挂载的云磁盘信息。
    /// </summary>

    std::vector<NovaServerVolume>& getOsExtendedVolumesvolumesAttached();
    bool osExtendedVolumesvolumesAttachedIsSet() const;
    void unsetosExtendedVolumesvolumesAttached();
    void setOsExtendedVolumesvolumesAttached(const std::vector<NovaServerVolume>& value);

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

    std::string getOSEXTSRVATTRhostname() const;
    bool oSEXTSRVATTRhostnameIsSet() const;
    void unsetoSEXTSRVATTRhostname();
    void setOSEXTSRVATTRhostname(const std::string& value);

    /// <summary>
    /// 批量创建场景，弹性云服务器的预留ID。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRreservationId() const;
    bool oSEXTSRVATTRreservationIdIsSet() const;
    void unsetoSEXTSRVATTRreservationId();
    void setOSEXTSRVATTRreservationId(const std::string& value);

    /// <summary>
    /// 批量创建场景，弹性云服务器的启动顺序。  微版本2.3后支持
    /// </summary>

    int32_t getOSEXTSRVATTRlaunchIndex() const;
    bool oSEXTSRVATTRlaunchIndexIsSet() const;
    void unsetoSEXTSRVATTRlaunchIndex();
    void setOSEXTSRVATTRlaunchIndex(int32_t value);

    /// <summary>
    /// 若使用AMI格式的镜像，则表示kernel image的UUID；否则，留空。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRkernelId() const;
    bool oSEXTSRVATTRkernelIdIsSet() const;
    void unsetoSEXTSRVATTRkernelId();
    void setOSEXTSRVATTRkernelId(const std::string& value);

    /// <summary>
    /// 若使用AMI格式镜像，则表示ramdisk image的UUID；否则，留空。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRramdiskId() const;
    bool oSEXTSRVATTRramdiskIdIsSet() const;
    void unsetoSEXTSRVATTRramdiskId();
    void setOSEXTSRVATTRramdiskId(const std::string& value);

    /// <summary>
    /// 弹性云服务器系统盘的设备名称。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRrootDeviceName() const;
    bool oSEXTSRVATTRrootDeviceNameIsSet() const;
    void unsetoSEXTSRVATTRrootDeviceName();
    void setOSEXTSRVATTRrootDeviceName(const std::string& value);

    /// <summary>
    /// 创建弹性云服务器时指定的user_data。  微版本2.3后支持
    /// </summary>

    std::string getOSEXTSRVATTRuserData() const;
    bool oSEXTSRVATTRuserDataIsSet() const;
    void unsetoSEXTSRVATTRuserData();
    void setOSEXTSRVATTRuserData(const std::string& value);

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
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string oSEXTAZavailabilityZone_;
    bool oSEXTAZavailabilityZoneIsSet_;
    std::string oSEXTSRVATTRhost_;
    bool oSEXTSRVATTRhostIsSet_;
    std::string oSEXTSRVATTRhypervisorHostname_;
    bool oSEXTSRVATTRhypervisorHostnameIsSet_;
    std::string oSEXTSRVATTRinstanceName_;
    bool oSEXTSRVATTRinstanceNameIsSet_;
    int32_t oSEXTSTSpowerState_;
    bool oSEXTSTSpowerStateIsSet_;
    std::string oSEXTSTStaskState_;
    bool oSEXTSTStaskStateIsSet_;
    std::string oSEXTSTSvmState_;
    bool oSEXTSTSvmStateIsSet_;
    std::string oSSRVUSGlaunchedAt_;
    bool oSSRVUSGlaunchedAtIsSet_;
    std::string oSSRVUSGterminatedAt_;
    bool oSSRVUSGterminatedAtIsSet_;
    std::vector<NovaServerVolume> osExtendedVolumesvolumesAttached_;
    bool osExtendedVolumesvolumesAttachedIsSet_;
    NovaServerFault fault_;
    bool faultIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string hostStatus_;
    bool hostStatusIsSet_;
    std::string oSEXTSRVATTRhostname_;
    bool oSEXTSRVATTRhostnameIsSet_;
    std::string oSEXTSRVATTRreservationId_;
    bool oSEXTSRVATTRreservationIdIsSet_;
    int32_t oSEXTSRVATTRlaunchIndex_;
    bool oSEXTSRVATTRlaunchIndexIsSet_;
    std::string oSEXTSRVATTRkernelId_;
    bool oSEXTSRVATTRkernelIdIsSet_;
    std::string oSEXTSRVATTRramdiskId_;
    bool oSEXTSRVATTRramdiskIdIsSet_;
    std::string oSEXTSRVATTRrootDeviceName_;
    bool oSEXTSRVATTRrootDeviceNameIsSet_;
    std::string oSEXTSRVATTRuserData_;
    bool oSEXTSRVATTRuserDataIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServer_H_
