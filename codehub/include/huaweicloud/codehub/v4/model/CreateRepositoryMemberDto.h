
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateRepositoryMemberDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateRepositoryMemberDto_H_


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
/// 添加仓库成员信息
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateRepositoryMemberDto
    : public ModelBase
{
public:
    CreateRepositoryMemberDto();
    virtual ~CreateRepositoryMemberDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRepositoryMemberDto members

    /// <summary>
    /// **参数解释：** 用户iamId **约束限制：** 不涉及。
    /// </summary>

    std::string getUserIamId() const;
    bool userIamIdIsSet() const;
    void unsetuserIamId();
    void setUserIamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称。 **约束限制：** - 不涉及。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户id。 **约束限制：** - 不涉及。    
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色id。 **约束限制：** - 不涉及。    
    /// </summary>

    std::string getRepositoryRoleId() const;
    bool repositoryRoleIdIsSet() const;
    void unsetrepositoryRoleId();
    void setRepositoryRoleId(const std::string& value);


protected:
    std::string userIamId_;
    bool userIamIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string repositoryRoleId_;
    bool repositoryRoleIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateRepositoryMemberDto_H_
