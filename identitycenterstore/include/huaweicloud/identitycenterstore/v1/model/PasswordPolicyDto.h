
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_PasswordPolicyDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_PasswordPolicyDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  PasswordPolicyDto
    : public ModelBase
{
public:
    PasswordPolicyDto();
    virtual ~PasswordPolicyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PasswordPolicyDto members

    /// <summary>
    /// 最小密码长度
    /// </summary>

    int32_t getMinimumPasswordLength() const;
    bool minimumPasswordLengthIsSet() const;
    void unsetminimumPasswordLength();
    void setMinimumPasswordLength(int32_t value);

    /// <summary>
    /// 是否要求小写字母
    /// </summary>

    bool isRequireLowercaseCharacters() const;
    bool requireLowercaseCharactersIsSet() const;
    void unsetrequireLowercaseCharacters();
    void setRequireLowercaseCharacters(bool value);

    /// <summary>
    /// 是否要求数字
    /// </summary>

    bool isRequireNumbers() const;
    bool requireNumbersIsSet() const;
    void unsetrequireNumbers();
    void setRequireNumbers(bool value);

    /// <summary>
    /// 是否要求特殊字符
    /// </summary>

    bool isRequireSymbols() const;
    bool requireSymbolsIsSet() const;
    void unsetrequireSymbols();
    void setRequireSymbols(bool value);

    /// <summary>
    /// 是否要求大写字母
    /// </summary>

    bool isRequireUppercaseCharacters() const;
    bool requireUppercaseCharactersIsSet() const;
    void unsetrequireUppercaseCharacters();
    void setRequireUppercaseCharacters(bool value);

    /// <summary>
    /// 密码有效期
    /// </summary>

    int32_t getMaxPasswordAge() const;
    bool maxPasswordAgeIsSet() const;
    void unsetmaxPasswordAge();
    void setMaxPasswordAge(int32_t value);

    /// <summary>
    /// 密码重复使用次数，默认只支持1
    /// </summary>

    int32_t getPasswordReusePrevention() const;
    bool passwordReusePreventionIsSet() const;
    void unsetpasswordReusePrevention();
    void setPasswordReusePrevention(int32_t value);


protected:
    int32_t minimumPasswordLength_;
    bool minimumPasswordLengthIsSet_;
    bool requireLowercaseCharacters_;
    bool requireLowercaseCharactersIsSet_;
    bool requireNumbers_;
    bool requireNumbersIsSet_;
    bool requireSymbols_;
    bool requireSymbolsIsSet_;
    bool requireUppercaseCharacters_;
    bool requireUppercaseCharactersIsSet_;
    int32_t maxPasswordAge_;
    bool maxPasswordAgeIsSet_;
    int32_t passwordReusePrevention_;
    bool passwordReusePreventionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_PasswordPolicyDto_H_
