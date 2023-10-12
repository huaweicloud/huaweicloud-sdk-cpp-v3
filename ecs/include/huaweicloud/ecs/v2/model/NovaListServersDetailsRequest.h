
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListServersDetailsRequest
    : public ModelBase
{
public:
    NovaListServersDetailsRequest();
    virtual ~NovaListServersDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListServersDetailsRequest members

    /// <summary>
    /// 云服务器上次更新状态的时间戳信息。时间戳为UTC格式。
    /// </summary>

    std::string getChangesSince() const;
    bool changesSinceIsSet() const;
    void unsetchangesSince();
    void setChangesSince(const std::string& value);

    /// <summary>
    /// 云服务器规格ID。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 镜像ID  在使用image作为条件过滤时，不能同时支持其他过滤条件和分页条件。如果同时指定image及其他条件，则以image条件为准；当条件不含image时，接口功能不受限制。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// IPv4地址过滤结果，匹配规则为模糊匹配。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 查询返回云服务器数量限制。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 从marker指定的云服务器ID的下一条数据开始查询。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 云服务器名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 查询tag字段中不包含该值的云服务器，值为标签的Key。  &gt; 说明： &gt;  &gt; 系统近期对标签功能进行了升级。如果之前添加的Tag为“Key.Value”的形式，则查询的时候需要使用“Key”来查询。 &gt;  &gt; 例如：之前添加的tag为“a.b”,则升级后，查询时需使用“not-tags&#x3D;a”。
    /// </summary>

    std::string getNotTags() const;
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::string& value);

    /// <summary>
    /// 批量创建弹性云服务器时，指定返回的ID，用于查询本次批量创建的弹性云服务器。
    /// </summary>

    std::string getReservationId() const;
    bool reservationIdIsSet() const;
    void unsetreservationId();
    void setReservationId(const std::string& value);

    /// <summary>
    /// 查询结果按弹性云服务器属性排序，默认排序顺序为created_at逆序。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 云服务器状态。  取值范围： ACTIVE， BUILD，DELETED，ERROR，HARD_REBOOT，MIGRATING，REBOOT，RESIZE，REVERT_RESIZE，SHELVED，SHELVED_OFFLOADED，SHUTOFF，UNKNOWN，VERIFY_RESIZE  直到2.37微版本，非上面范围的status字段将返回空列表，2.38之后的微版本，将返回400错误。  云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 查询tag字段中包含该值的云服务器。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 微版本头
    /// </summary>

    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);


protected:
    std::string changesSince_;
    bool changesSinceIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string notTags_;
    bool notTagsIsSet_;
    std::string reservationId_;
    bool reservationIdIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaListServersDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<NovaListServersDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsRequest_H_
