
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GrantedUsersDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GrantedUsersDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GrantedUsersDto
    : public ModelBase
{
public:
    GrantedUsersDto();
    virtual ~GrantedUsersDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GrantedUsersDto members

    /// <summary>
    /// **参数解释：** 用户id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户iam_id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户昵称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户邮箱。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户iam_id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// **参数解释：** license的状态。
    /// </summary>

    int32_t getServiceLicenseStatus() const;
    bool serviceLicenseStatusIsSet() const;
    void unsetserviceLicenseStatus();
    void setServiceLicenseStatus(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string iamId_;
    bool iamIdIsSet_;
    int32_t serviceLicenseStatus_;
    bool serviceLicenseStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GrantedUsersDto_H_
