
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UserDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UserDto_H_


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
#include <huaweicloud/identitycenterstore/v1/model/ExternalIdDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// A user object that contains a specified user’s metadata and attributes.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UserDto
    : public ModelBase
{
public:
    UserDto();
    virtual ~UserDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserDto members

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
    /// 外部身份源分配给此资源的标识符
    /// </summary>

    std::string getExternalId() const;
    bool externalIdIsSet() const;
    void unsetexternalId();
    void setExternalId(const std::string& value);

    /// <summary>
    /// 用户的外部标识符信息列表
    /// </summary>

    std::vector<ExternalIdDto>& getExternalIds();
    bool externalIdsIsSet() const;
    void unsetexternalIds();
    void setExternalIds(const std::vector<ExternalIdDto>& value);

    /// <summary>
    /// 身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

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
    /// 身份源中IAM身份中心用户的全局唯一标识符（ID）
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

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
    /// 创建用户时的时间戳
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// 创建者
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 更新用户时的时间戳
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);

    /// <summary>
    /// 更新者
    /// </summary>

    std::string getUpdatedBy() const;
    bool updatedByIsSet() const;
    void unsetupdatedBy();
    void setUpdatedBy(const std::string& value);

    /// <summary>
    /// 一个布尔值，表示用户是否启用
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

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
    std::string externalId_;
    bool externalIdIsSet_;
    std::vector<ExternalIdDto> externalIds_;
    bool externalIdsIsSet_;
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
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
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string userType_;
    bool userTypeIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;
    std::string updatedBy_;
    bool updatedByIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    EnterpriseDto enterprise_;
    bool enterpriseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UserDto_H_
