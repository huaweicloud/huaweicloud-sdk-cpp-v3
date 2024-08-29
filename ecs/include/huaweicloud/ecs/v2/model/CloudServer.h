
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CloudServer_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CloudServer_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/SecurityGroup.h>
#include <huaweicloud/ecs/v2/model/Image.h>
#include <string>
#include <huaweicloud/ecs/v2/model/FlavorQuasar.h>
#include <huaweicloud/ecs/v2/model/NetworkAddresses.h>
#include <huaweicloud/ecs/v2/model/CpuOptions.h>
#include <huaweicloud/ecs/v2/model/MarketModel.h>
#include <map>
#include <huaweicloud/ecs/v2/model/VolumeAttach.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/Fault.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  CloudServer
    : public ModelBase
{
public:
    CloudServer();
    virtual ~CloudServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudServer members

    /// <summary>
    /// 云服务器唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务器当前状态信息。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云服务器所属租户ID。即项目id，与project_id表示相同的概念。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 云服务器所属用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MarketModel getMarketInfo() const;
    bool marketInfoIsSet() const;
    void unsetmarketInfo();
    void setMarketInfo(const MarketModel& value);

    /// <summary>
    /// 可用分区
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 云服务器的状态。
    /// </summary>

    std::string getVmState() const;
    bool vmStateIsSet() const;
    void unsetvmState();
    void setVmState(const std::string& value);

    /// <summary>
    /// 云服务器任务状态。
    /// </summary>

    std::string getTaskState() const;
    bool taskStateIsSet() const;
    void unsettaskState();
    void setTaskState(const std::string& value);

    /// <summary>
    /// 云服务器电源状态。
    /// </summary>

    int32_t getPowerState() const;
    bool powerStateIsSet() const;
    void unsetpowerState();
    void setPowerState(int32_t value);

    /// <summary>
    /// 云服务器创建时间。 时间格式例如：2020-05-22T07:48:53Z。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 云服务器是否处于回收站中
    /// </summary>

    bool isInRecycleBin() const;
    bool inRecycleBinIsSet() const;
    void unsetinRecycleBin();
    void setInRecycleBin(bool value);

    /// <summary>
    /// 共池裸机按整机柜发放的同一批次的批创ID
    /// </summary>

    std::string getSpodId() const;
    bool spodIdIsSet() const;
    void unsetspodId();
    void setSpodId(const std::string& value);

    /// <summary>
    /// 云服务器上一次更新时间。时间格式例如：2020-05-22T07:48:53Z
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 云服务器启动时间。时间格式例如：2020-05-22T07:48:53Z。
    /// </summary>

    std::string getLaunched() const;
    bool launchedIsSet() const;
    void unsetlaunched();
    void setLaunched(const std::string& value);

    /// <summary>
    /// 云服务器的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 云服务器使用的密钥对名称。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 云服务器是否为锁定状态。  true：锁定 false：未锁定
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);

    /// <summary>
    /// 云服务器系统盘的设备名称，例如当系统盘的磁盘模式是VDB时，为/dev/vda。
    /// </summary>

    std::string getRootDeviceName() const;
    bool rootDeviceNameIsSet() const;
    void unsetrootDeviceName();
    void setRootDeviceName(const std::string& value);

    /// <summary>
    /// 在专属主机或共享池中创建云服务器。默认为在共享池创建。值为： shared或dedicated。  shared：表示共享池。 dedicated:表示专属主机。
    /// </summary>

    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);

    /// <summary>
    /// 专属主机ID。此属性仅在tenancy值为dedicated时有效，不指定此属性，系统将自动分配租户可自动放置云服务器的专属主机。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);

    /// <summary>
    /// 查询绑定某个企业项目的云服务器。 若需要查询当前用户所有企业项目绑定的云服务，请传参all_granted_eps。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 云服务器元数据。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 云服务器的标签列表。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 云服务器对应的网络地址信息。
    /// </summary>

    std::map<std::string, std::vector<NetworkAddresses>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<NetworkAddresses>>& value);

    /// <summary>
    /// 云服务器的安全组信息。
    /// </summary>

    std::vector<SecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<SecurityGroup>& value);

    /// <summary>
    /// 云服务器挂载磁盘信息。
    /// </summary>

    std::vector<VolumeAttach>& getVolumesAttached();
    bool volumesAttachedIsSet() const;
    void unsetvolumesAttached();
    void setVolumesAttached(const std::vector<VolumeAttach>& value);

    /// <summary>
    /// 
    /// </summary>

    Image getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const Image& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorQuasar getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const FlavorQuasar& value);

    /// <summary>
    /// 
    /// </summary>

    Fault getFault() const;
    bool faultIsSet() const;
    void unsetfault();
    void setFault(const Fault& value);

    /// <summary>
    /// 
    /// </summary>

    CpuOptions getCpuOptions() const;
    bool cpuOptionsIsSet() const;
    void unsetcpuOptions();
    void setCpuOptions(const CpuOptions& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    MarketModel marketInfo_;
    bool marketInfoIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string vmState_;
    bool vmStateIsSet_;
    std::string taskState_;
    bool taskStateIsSet_;
    int32_t powerState_;
    bool powerStateIsSet_;
    std::string created_;
    bool createdIsSet_;
    bool inRecycleBin_;
    bool inRecycleBinIsSet_;
    std::string spodId_;
    bool spodIdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string launched_;
    bool launchedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::string rootDeviceName_;
    bool rootDeviceNameIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::map<std::string, std::vector<NetworkAddresses>> addresses_;
    bool addressesIsSet_;
    std::vector<SecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<VolumeAttach> volumesAttached_;
    bool volumesAttachedIsSet_;
    Image image_;
    bool imageIsSet_;
    FlavorQuasar flavor_;
    bool flavorIsSet_;
    Fault fault_;
    bool faultIsSet_;
    CpuOptions cpuOptions_;
    bool cpuOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CloudServer_H_
