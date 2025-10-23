
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedTagActionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedTagActionDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ProjectProtectedTagActionDto
    : public ModelBase
{
public:
    ProjectProtectedTagActionDto();
    virtual ~ProjectProtectedTagActionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectProtectedTagActionDto members

    /// <summary>
    /// **参数解释：** 事件名称。 **取值范围：read 查询,create-delete 增删,create 创建** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否启用。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 用户ID列表。 **约束限制：** 不涉及。 **取值范围：** Integer **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 用户name列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getUserNames();
    bool userNamesIsSet() const;
    void unsetuserNames();
    void setUserNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 成员组ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getUserTeamIds();
    bool userTeamIdsIsSet() const;
    void unsetuserTeamIds();
    void setUserTeamIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 成员组name列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getUserTeamNames();
    bool userTeamNamesIsSet() const;
    void unsetuserTeamNames();
    void setUserTeamNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 关联角色ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getRelatedRoleIds();
    bool relatedRoleIdsIsSet() const;
    void unsetrelatedRoleIds();
    void setRelatedRoleIds(const std::vector<std::string>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::vector<int32_t> userIds_;
    bool userIdsIsSet_;
    std::vector<std::string> userNames_;
    bool userNamesIsSet_;
    std::vector<int32_t> userTeamIds_;
    bool userTeamIdsIsSet_;
    std::vector<std::string> userTeamNames_;
    bool userTeamNamesIsSet_;
    std::vector<std::string> relatedRoleIds_;
    bool relatedRoleIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedTagActionDto_H_
