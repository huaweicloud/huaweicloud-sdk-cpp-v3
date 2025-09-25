
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ApproverBasicDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ApproverBasicDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/UserSafeDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Get a merge request approver info
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ApproverBasicDto
    : public ModelBase
{
public:
    ApproverBasicDto();
    virtual ~ApproverBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApproverBasicDto members

    /// <summary>
    /// **参数解释：** 用户id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 中文名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 邮件。 **取值范围：** 不涉及。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// **参数解释：** 状态。 - optional，可选（审核人、检视人）（未审核/检视） - required，必选（审核人、检视人）（未审核/检视） - approve，审核通过 - true，检视通过 - passed，审核/检视 通过，（未审核/检视） - reject，审核拒绝
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间 **取值范围：** 不涉及。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 头像链接 **取值范围：** 不涉及。
    /// </summary>

    std::string getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetavatarUrl();
    void setAvatarUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 昵称 **取值范围：** 不涉及。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 审核备注。 **取值范围：** 不涉及。
    /// </summary>

    std::string getApproverComment() const;
    bool approverCommentIsSet() const;
    void unsetapproverComment();
    void setApproverComment(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string avatarUrl_;
    bool avatarUrlIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string approverComment_;
    bool approverCommentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ApproverBasicDto_H_
