
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateUserReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateUserReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/PhoneNumberDto.h>
#include <huaweicloud/identitycenterstore/v1/model/EnterpriseDto.h>
#include <huaweicloud/identitycenterstore/v1/model/AddressDto.h>
#include <string>
#include <huaweicloud/identitycenterstore/v1/model/EmailDto.h>
#include <huaweicloud/identitycenterstore/v1/model/NameDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建用户请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  CreateUserReqBody
    : public ModelBase
{
public:
    CreateUserReqBody();
    virtual ~CreateUserReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUserReqBody members

    /// <summary>
    /// 用户的地址信息列表
    /// </summary>

    std::vector<AddressDto>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::vector<AddressDto>& value);

    /// <summary>
    /// 用户的显示名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 用户的电子邮箱信息列表
    /// </summary>

    std::vector<EmailDto>& getEmails();
    bool emailsIsSet() const;
    void unsetemails();
    void setEmails(const std::vector<EmailDto>& value);

    /// <summary>
    /// 用户的地理区域或位置信息
    /// </summary>

    std::string getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();
    void setLocale(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameDto getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const NameDto& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickname() const;
    bool nicknameIsSet() const;
    void unsetnickname();
    void setNickname(const std::string& value);

    /// <summary>
    /// 用户的电话号码信息列表
    /// </summary>

    std::vector<PhoneNumberDto>& getPhoneNumbers();
    bool phoneNumbersIsSet() const;
    void unsetphoneNumbers();
    void setPhoneNumbers(const std::vector<PhoneNumberDto>& value);

    /// <summary>
    /// 用户语言首选项
    /// </summary>

    std::string getPreferredLanguage() const;
    bool preferredLanguageIsSet() const;
    void unsetpreferredLanguage();
    void setPreferredLanguage(const std::string& value);

    /// <summary>
    /// 与用户关联的URL
    /// </summary>

    std::string getProfileUrl() const;
    bool profileUrlIsSet() const;
    void unsetprofileUrl();
    void setProfileUrl(const std::string& value);

    /// <summary>
    /// 用户时区
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);

    /// <summary>
    /// 用户头衔
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 用户名，用于标识用户的唯一字符串
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户类型
    /// </summary>

    std::string getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(const std::string& value);

    /// <summary>
    /// 初始化密码方式，一次性密码/邮箱
    /// </summary>

    std::string getPasswordMode() const;
    bool passwordModeIsSet() const;
    void unsetpasswordMode();
    void setPasswordMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EnterpriseDto getEnterprise() const;
    bool enterpriseIsSet() const;
    void unsetenterprise();
    void setEnterprise(const EnterpriseDto& value);


protected:
    std::vector<AddressDto> addresses_;
    bool addressesIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::vector<EmailDto> emails_;
    bool emailsIsSet_;
    std::string locale_;
    bool localeIsSet_;
    NameDto name_;
    bool nameIsSet_;
    std::string nickname_;
    bool nicknameIsSet_;
    std::vector<PhoneNumberDto> phoneNumbers_;
    bool phoneNumbersIsSet_;
    std::string preferredLanguage_;
    bool preferredLanguageIsSet_;
    std::string profileUrl_;
    bool profileUrlIsSet_;
    std::string timezone_;
    bool timezoneIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string userType_;
    bool userTypeIsSet_;
    std::string passwordMode_;
    bool passwordModeIsSet_;
    EnterpriseDto enterprise_;
    bool enterpriseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateUserReqBody_H_
