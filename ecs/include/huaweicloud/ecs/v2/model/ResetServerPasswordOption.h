
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ResetServerPasswordOption
    : public ModelBase
{
public:
    ResetServerPasswordOption();
    virtual ~ResetServerPasswordOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResetServerPasswordOption members

    /// <summary>
    /// 弹性云服务器新密码。  该接口默认不做密码安全性校验；如需校验，请指定字段“is_check_password”为true。  新密码的校验规则： - 密码长度范围为8到26位。 - 允许输入的字符包括：!@%-_&#x3D;+[]:./? - 禁止输入的字符包括：汉字及【】：；“”‘’、，。《》？￥…（）—— ·！~&#x60;#&amp;^,{}*();\&quot;&#39;&lt;&gt;|\\ $ - 复杂度上必须包含大写字母（A-Z）、小写字母（a-z）、数字（0-9）、以及允许的特殊字符中的3种以上搭配 - 不能包含用户名 \&quot;Administrator\&quot; 和“root”及逆序字符 - 不能包含用户名 \&quot;Administrator\&quot; 中连续3个字符
    /// </summary>

    std::string getNewPassword() const;
    bool newPasswordIsSet() const;
    void unsetnewPassword();
    void setNewPassword(const std::string& value);

    /// <summary>
    /// 是否检查密码的复杂度。
    /// </summary>

    bool isIsCheckPassword() const;
    bool isCheckPasswordIsSet() const;
    void unsetisCheckPassword();
    void setIsCheckPassword(bool value);


protected:
    std::string newPassword_;
    bool newPasswordIsSet_;
    bool isCheckPassword_;
    bool isCheckPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordOption_H_
