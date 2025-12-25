
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoUserPrivilegeV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoUserPrivilegeV5_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RepoUserPrivilegeV5
    : public ModelBase
{
public:
    RepoUserPrivilegeV5();
    virtual ~RepoUserPrivilegeV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoUserPrivilegeV5 members

    /// <summary>
    /// **参数解释**: 用户id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**: 租户id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// **参数解释**: 权限信息。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPrivilege() const;
    bool privilegeIsSet() const;
    void unsetprivilege();
    void setPrivilege(const std::string& value);

    /// <summary>
    /// **参数解释**: 角色id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释**: 角色名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string privilege_;
    bool privilegeIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoUserPrivilegeV5_H_
