
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedActionResultDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedActionResultDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/UserTeamBasicDto.h>
#include <huaweicloud/codehub/v4/model/ForceActionEnableDto.h>
#include <string>
#include <huaweicloud/codehub/v4/model/RoleBasicDto.h>
#include <huaweicloud/codehub/v4/model/UserBasicDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ProjectProtectedActionResultDto
    : public ModelBase
{
public:
    ProjectProtectedActionResultDto();
    virtual ~ProjectProtectedActionResultDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectProtectedActionResultDto members

    /// <summary>
    /// **参数解释：** 动作。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 权限点。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getLevels() const;
    bool levelsIsSet() const;
    void unsetlevels();
    void setLevels(const std::string& value);

    /// <summary>
    /// **参数解释：** 权限名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getLevelNames() const;
    bool levelNamesIsSet() const;
    void unsetlevelNames();
    void setLevelNames(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员列表。
    /// </summary>

    std::vector<UserBasicDto>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// **参数解释：** 成员组列表。
    /// </summary>

    std::vector<UserTeamBasicDto>& getUserTeams();
    bool userTeamsIsSet() const;
    void unsetuserTeams();
    void setUserTeams(const std::vector<UserTeamBasicDto>& value);

    /// <summary>
    /// **参数解释：** 角色列表。
    /// </summary>

    std::vector<RoleBasicDto>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<RoleBasicDto>& value);

    /// <summary>
    /// **参数解释：** 操作选择列表。
    /// </summary>

    std::vector<ForceActionEnableDto>& getAdditionSwitchers();
    bool additionSwitchersIsSet() const;
    void unsetadditionSwitchers();
    void setAdditionSwitchers(const std::vector<ForceActionEnableDto>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::string levels_;
    bool levelsIsSet_;
    std::string levelNames_;
    bool levelNamesIsSet_;
    std::vector<UserBasicDto> users_;
    bool usersIsSet_;
    std::vector<UserTeamBasicDto> userTeams_;
    bool userTeamsIsSet_;
    std::vector<RoleBasicDto> roles_;
    bool rolesIsSet_;
    std::vector<ForceActionEnableDto> additionSwitchers_;
    bool additionSwitchersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ProjectProtectedActionResultDto_H_
