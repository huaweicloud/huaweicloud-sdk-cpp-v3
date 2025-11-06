
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryProtectedActionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryProtectedActionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/UserTeamBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BasicRoleDto.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryUserDto.h>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepositoryProtectedActionDto
    : public ModelBase
{
public:
    RepositoryProtectedActionDto();
    virtual ~RepositoryProtectedActionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryProtectedActionDto members

    /// <summary>
    /// **参数解释：** 事件名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否启用。 **取值范围：** - true，开启规则限制。 - false，未开启规则限制。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 白名单用户列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<RepositoryUserDto>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RepositoryUserDto>& value);

    /// <summary>
    /// **参数解释：** 白名单用户组列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<UserTeamBasicDto>& getUserTeams();
    bool userTeamsIsSet() const;
    void unsetuserTeams();
    void setUserTeams(const std::vector<UserTeamBasicDto>& value);

    /// <summary>
    /// **参数解释：** 白名单角色列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<BasicRoleDto>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<BasicRoleDto>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::vector<RepositoryUserDto> users_;
    bool usersIsSet_;
    std::vector<UserTeamBasicDto> userTeams_;
    bool userTeamsIsSet_;
    std::vector<BasicRoleDto> roles_;
    bool rolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryProtectedActionDto_H_
