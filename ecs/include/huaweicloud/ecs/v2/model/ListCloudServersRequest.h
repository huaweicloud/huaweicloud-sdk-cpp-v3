
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListCloudServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListCloudServersRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListCloudServersRequest
    : public ModelBase
{
public:
    ListCloudServersRequest();
    virtual ~ListCloudServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCloudServersRequest members

    /// <summary>
    /// 云服务器ID，格式为UUID，匹配规则为精确匹配。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器名称，匹配规则为模糊匹配。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务器状态。  取值范围：  ACTIVE， BUILD，DELETED，ERROR，HARD_REBOOT，MIGRATING，REBOOT，RESIZE，REVERT_RESIZE，SHELVED，SHELVED_OFFLOADED，SHUTOFF，UNKNOWN，VERIFY_RESIZE  弹性云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云服务器是否处于回收站中
    /// </summary>

    bool isInRecycleBin() const;
    bool inRecycleBinIsSet() const;
    void unsetinRecycleBin();
    void setInRecycleBin(bool value);

    /// <summary>
    /// 共池裸机按整机柜发放的同一批次的批创id。
    /// </summary>

    std::string getSpodId() const;
    bool spodIdIsSet() const;
    void unsetspodId();
    void setSpodId(const std::string& value);

    /// <summary>
    /// 云服务器规格名称。
    /// </summary>

    std::string getFlavorName() const;
    bool flavorNameIsSet() const;
    void unsetflavorName();
    void setFlavorName(const std::string& value);

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 元数据过滤，支持key&#x3D;value过滤。
    /// </summary>

    std::string getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::string& value);

    /// <summary>
    /// 元数据key过滤。
    /// </summary>

    std::string getMetadataKey() const;
    bool metadataKeyIsSet() const;
    void unsetmetadataKey();
    void setMetadataKey(const std::string& value);

    /// <summary>
    /// 查询tag字段中包含该值的云服务器。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    ///  查询tag字段中不包含该值的云服务器
    /// </summary>

    std::string getNotTags() const;
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::string& value);

    /// <summary>
    /// 云服务器所在的AZ，匹配规则为模糊匹配。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 云服务器所在的AZ，匹配规则为精确匹配。
    /// </summary>

    std::string getAvailabilityZoneEq() const;
    bool availabilityZoneEqIsSet() const;
    void unsetavailabilityZoneEq();
    void setAvailabilityZoneEq(const std::string& value);

    /// <summary>
    /// 云服务器的计费类型。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 云服务器使用的密钥对名称。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 过滤在launched_since时间之后启动的云服务器。格式为ISO8601时间格式，例如：2013-06-09T06:42:18Z。
    /// </summary>

    std::string getLaunchedSince() const;
    bool launchedSinceIsSet() const;
    void unsetlaunchedSince();
    void setLaunchedSince(const std::string& value);

    /// <summary>
    /// 过滤绑定某个企业项目的云服务器。 若需要查询当前用户所有企业项目绑定的云服务，请传参all_granted_eps。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 控制查询输出的字段。在默认字段的基础上选择是否查询，有管理员字段。
    /// </summary>

    std::vector<std::string>& getExpectFields();
    bool expectFieldsIsSet() const;
    void unsetexpectFields();
    void setExpectFields(const std::vector<std::string>& value);

    /// <summary>
    /// 查询返回VM数量限制。 limit 默认为10，最大为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool inRecycleBin_;
    bool inRecycleBinIsSet_;
    std::string spodId_;
    bool spodIdIsSet_;
    std::string flavorName_;
    bool flavorNameIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string metadata_;
    bool metadataIsSet_;
    std::string metadataKey_;
    bool metadataKeyIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string notTags_;
    bool notTagsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string availabilityZoneEq_;
    bool availabilityZoneEqIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string launchedSince_;
    bool launchedSinceIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> expectFields_;
    bool expectFieldsIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCloudServersRequest& dereference_from_shared_ptr(std::shared_ptr<ListCloudServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListCloudServersRequest_H_
