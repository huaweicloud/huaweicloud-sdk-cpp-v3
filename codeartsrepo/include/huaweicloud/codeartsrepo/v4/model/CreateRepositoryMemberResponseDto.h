
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateRepositoryMemberResponseDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateRepositoryMemberResponseDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateRepositoryMemberResponseDto
    : public ModelBase
{
public:
    CreateRepositoryMemberResponseDto();
    virtual ~CreateRepositoryMemberResponseDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRepositoryMemberResponseDto members

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
    /// **参数解释：** 用户昵称。 **约束限制：** - 不涉及。    
    /// </summary>

    std::string getUserNickName() const;
    bool userNickNameIsSet() const;
    void unsetuserNickName();
    void setUserNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色id。 **约束限制：** **约束限制：** - success，添加成功。 - error，添加失败。  
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员添加结果信息。 **约束限制：** - 不涉及。    
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string userIamId_;
    bool userIamIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string userNickName_;
    bool userNickNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateRepositoryMemberResponseDto_H_
