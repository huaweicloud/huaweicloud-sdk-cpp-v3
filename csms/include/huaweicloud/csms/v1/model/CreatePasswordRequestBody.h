
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreatePasswordRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreatePasswordRequestBody_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 生成随机密码入参
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreatePasswordRequestBody
    : public ModelBase
{
public:
    CreatePasswordRequestBody();
    virtual ~CreatePasswordRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePasswordRequestBody members

    /// <summary>
    /// 策略名称
    /// </summary>

    std::string getPasswordPolicyName() const;
    bool passwordPolicyNameIsSet() const;
    void unsetpasswordPolicyName();
    void setPasswordPolicyName(const std::string& value);

    /// <summary>
    /// 长度，默认32
    /// </summary>

    int32_t getLength() const;
    bool lengthIsSet() const;
    void unsetlength();
    void setLength(int32_t value);

    /// <summary>
    /// 需要排除的字符
    /// </summary>

    std::string getExcludeCharacters() const;
    bool excludeCharactersIsSet() const;
    void unsetexcludeCharacters();
    void setExcludeCharacters(const std::string& value);

    /// <summary>
    /// 排除小写字母，默认false
    /// </summary>

    bool isExcludeLowercase() const;
    bool excludeLowercaseIsSet() const;
    void unsetexcludeLowercase();
    void setExcludeLowercase(bool value);

    /// <summary>
    /// 排除大写字母，默认false
    /// </summary>

    bool isExcludeUppercase() const;
    bool excludeUppercaseIsSet() const;
    void unsetexcludeUppercase();
    void setExcludeUppercase(bool value);

    /// <summary>
    /// 排除数字，默认false
    /// </summary>

    bool isExcludeNumbers() const;
    bool excludeNumbersIsSet() const;
    void unsetexcludeNumbers();
    void setExcludeNumbers(bool value);

    /// <summary>
    /// 排除符号，默认false
    /// </summary>

    bool isExcludePunctuation() const;
    bool excludePunctuationIsSet() const;
    void unsetexcludePunctuation();
    void setExcludePunctuation(bool value);

    /// <summary>
    /// 包含空格，默认false
    /// </summary>

    bool isIncludeSpace() const;
    bool includeSpaceIsSet() const;
    void unsetincludeSpace();
    void setIncludeSpace(bool value);

    /// <summary>
    /// 需要每个包含的类型，默认false
    /// </summary>

    bool isRequireEachIncludedType() const;
    bool requireEachIncludedTypeIsSet() const;
    void unsetrequireEachIncludedType();
    void setRequireEachIncludedType(bool value);


protected:
    std::string passwordPolicyName_;
    bool passwordPolicyNameIsSet_;
    int32_t length_;
    bool lengthIsSet_;
    std::string excludeCharacters_;
    bool excludeCharactersIsSet_;
    bool excludeLowercase_;
    bool excludeLowercaseIsSet_;
    bool excludeUppercase_;
    bool excludeUppercaseIsSet_;
    bool excludeNumbers_;
    bool excludeNumbersIsSet_;
    bool excludePunctuation_;
    bool excludePunctuationIsSet_;
    bool includeSpace_;
    bool includeSpaceIsSet_;
    bool requireEachIncludedType_;
    bool requireEachIncludedTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreatePasswordRequestBody_H_
