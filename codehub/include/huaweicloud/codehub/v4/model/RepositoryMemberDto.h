
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryMemberDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryMemberDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 仓库成员详情
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryMemberDto
    : public ModelBase
{
public:
    RepositoryMemberDto();
    virtual ~RepositoryMemberDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryMemberDto members

    /// <summary>
    /// 用户id
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// 用户iamId
    /// </summary>

    std::string getUserIamId() const;
    bool userIamIdIsSet() const;
    void unsetuserIamId();
    void setUserIamId(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getUserNickName() const;
    bool userNickNameIsSet() const;
    void unsetuserNickName();
    void setUserNickName(const std::string& value);

    /// <summary>
    /// 租户名称
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 是否为仓库所有者
    /// </summary>

    int32_t getIsRepoCreator() const;
    bool isRepoCreatorIsSet() const;
    void unsetisRepoCreator();
    void setIsRepoCreator(int32_t value);

    /// <summary>
    /// 是否为父代码组所有者
    /// </summary>

    int32_t getIsGroupCreator() const;
    bool isGroupCreatorIsSet() const;
    void unsetisGroupCreator();
    void setIsGroupCreator(int32_t value);

    /// <summary>
    /// 是否为项目管理员
    /// </summary>

    int32_t getIsProjectAdmin() const;
    bool isProjectAdminIsSet() const;
    void unsetisProjectAdmin();
    void setIsProjectAdmin(int32_t value);

    /// <summary>
    /// 项目角色名称
    /// </summary>

    std::string getProjectRoleName() const;
    bool projectRoleNameIsSet() const;
    void unsetprojectRoleName();
    void setProjectRoleName(const std::string& value);

    /// <summary>
    /// 仓库角色名称
    /// </summary>

    std::string getRepositoryRoleName() const;
    bool repositoryRoleNameIsSet() const;
    void unsetrepositoryRoleName();
    void setRepositoryRoleName(const std::string& value);

    /// <summary>
    /// 仓库角色id
    /// </summary>

    std::string getRepositoryRoleId() const;
    bool repositoryRoleIdIsSet() const;
    void unsetrepositoryRoleId();
    void setRepositoryRoleId(const std::string& value);

    /// <summary>
    /// 成员如果来自成员组，成员组名称
    /// </summary>

    std::string getMemberSource() const;
    bool memberSourceIsSet() const;
    void unsetmemberSource();
    void setMemberSource(const std::string& value);

    /// <summary>
    /// 成员如果来自上层代码组，代码组名称
    /// </summary>

    std::string getMemberGroupSource() const;
    bool memberGroupSourceIsSet() const;
    void unsetmemberGroupSource();
    void setMemberGroupSource(const std::string& value);

    /// <summary>
    /// 成员来源id —— 代码组id或者成员组id
    /// </summary>

    std::string getMemberSourceId() const;
    bool memberSourceIdIsSet() const;
    void unsetmemberSourceId();
    void setMemberSourceId(const std::string& value);

    /// <summary>
    /// 成员服务级权限状态： 1-使用中、0-已停用
    /// </summary>

    int32_t getServiceLicenseStatus() const;
    bool serviceLicenseStatusIsSet() const;
    void unsetserviceLicenseStatus();
    void setServiceLicenseStatus(int32_t value);

    /// <summary>
    /// 是否有对应权限： true-有权限、false-无权限
    /// </summary>

    bool isActionEnabled() const;
    bool actionEnabledIsSet() const;
    void unsetactionEnabled();
    void setActionEnabled(bool value);


protected:
    int32_t userId_;
    bool userIdIsSet_;
    std::string userIamId_;
    bool userIamIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string userNickName_;
    bool userNickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    int32_t isRepoCreator_;
    bool isRepoCreatorIsSet_;
    int32_t isGroupCreator_;
    bool isGroupCreatorIsSet_;
    int32_t isProjectAdmin_;
    bool isProjectAdminIsSet_;
    std::string projectRoleName_;
    bool projectRoleNameIsSet_;
    std::string repositoryRoleName_;
    bool repositoryRoleNameIsSet_;
    std::string repositoryRoleId_;
    bool repositoryRoleIdIsSet_;
    std::string memberSource_;
    bool memberSourceIsSet_;
    std::string memberGroupSource_;
    bool memberGroupSourceIsSet_;
    std::string memberSourceId_;
    bool memberSourceIdIsSet_;
    int32_t serviceLicenseStatus_;
    bool serviceLicenseStatusIsSet_;
    bool actionEnabled_;
    bool actionEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryMemberDto_H_
