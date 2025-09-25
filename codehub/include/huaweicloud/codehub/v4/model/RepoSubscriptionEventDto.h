
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepoSubscriptionEventDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepoSubscriptionEventDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepoSubscriptionEventDto
    : public ModelBase
{
public:
    RepoSubscriptionEventDto();
    virtual ~RepoSubscriptionEventDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoSubscriptionEventDto members

    /// <summary>
    /// **参数解释：** 资源类型。 - repo，仓库。 - mr，合并请求。  - member，成员。 - note，检视意见。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件名。 - create，创建。 - open，开启。 - update，更新。  - delete，删除。 - merge，合并。 - review，检视。  - approve，审核。 - create_note，新建评审意见。 - resolve_note，解决评审意见。 - mention，被提及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 启用事件通知
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释：** 通知的角色ID列表
    /// </summary>

    std::vector<std::string>& getRoleIds();
    bool roleIdsIsSet() const;
    void unsetroleIds();
    void setRoleIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 通知的角色名称列表。 - creator，创建者。 - assignee，合并人。 - reviewer，评审人。 - scorer，审核人。 - approver，检视人。
    /// </summary>

    std::vector<std::string>& getRoleNames();
    bool roleNamesIsSet() const;
    void unsetroleNames();
    void setRoleNames(const std::vector<std::string>& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string action_;
    bool actionIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    std::vector<std::string> roleIds_;
    bool roleIdsIsSet_;
    std::vector<std::string> roleNames_;
    bool roleNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepoSubscriptionEventDto_H_
