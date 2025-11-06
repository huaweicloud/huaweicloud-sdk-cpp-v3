
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryProtectedTagActionBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryProtectedTagActionBodyDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedActionBasicBodyDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepositoryProtectedTagActionBodyDto
    : public ModelBase
{
public:
    RepositoryProtectedTagActionBodyDto();
    virtual ~RepositoryProtectedTagActionBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryProtectedTagActionBodyDto members

    /// <summary>
    /// **参数解释：** 是否启用。 **约束限制：** 不涉及。 **取值范围：** - true，开启规则限制 - false，关闭规则限制 **默认取值：** 不涉及。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 用户ID列表。 **约束限制：** 不涉及。 **取值范围：** Integer **默认取值：** 不涉及。
    /// </summary>

    std::vector<Object>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(const std::vector<Object>& value);

    /// <summary>
    /// **参数解释：** 成员组ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getUserTeamIds();
    bool userTeamIdsIsSet() const;
    void unsetuserTeamIds();
    void setUserTeamIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 关联角色ID列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getRelatedRoleIds();
    bool relatedRoleIdsIsSet() const;
    void unsetrelatedRoleIds();
    void setRelatedRoleIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 事件名称。 **约束限制：** 不涉及 **取值范围：** - create，创建。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::vector<Object> userIds_;
    bool userIdsIsSet_;
    std::vector<int32_t> userTeamIds_;
    bool userTeamIdsIsSet_;
    std::vector<std::string> relatedRoleIds_;
    bool relatedRoleIdsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryProtectedTagActionBodyDto_H_
