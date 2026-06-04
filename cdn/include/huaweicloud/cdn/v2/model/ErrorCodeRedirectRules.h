
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrorCodeRedirectRules_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrorCodeRedirectRules_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义错误页面。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ErrorCodeRedirectRules
    : public ModelBase
{
public:
    ErrorCodeRedirectRules();
    virtual ~ErrorCodeRedirectRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorCodeRedirectRules members

    /// <summary>
    /// **参数解释：** 重定向的错误码 **约束限制：** 不涉及 **取值范围：** - 4xx: 400, 403, 404, 405, 414, 416, 451 - 5xx: 500, 501, 502, 503, 504  **默认取值：** 不涉及
    /// </summary>

    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(int32_t value);

    /// <summary>
    /// **参数解释：** 执行规则 **约束限制：** 不涉及 **取值范围：** - break：如果错误码匹配了当前配置，请求将被重定向到目标Path。执行完当前规则后，当存在其他配置规则时，将不再匹配剩余规则。 - redirect：如果错误码匹配了当前配置，请求将被重定向到目标Path。执行完当前规则后，当存在其他配置规则时，将继续匹配剩余规则。  **默认取值：** 不涉及
    /// </summary>

    std::string getExecutionMode() const;
    bool executionModeIsSet() const;
    void unsetexecutionMode();
    void setExecutionMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 重定向状态码 **约束限制：** 当执行规则选择redirect时，需要配置该参数 **取值范围：** - 301 - 302  **默认取值：** 不涉及
    /// </summary>

    int32_t getTargetCode() const;
    bool targetCodeIsSet() const;
    void unsettargetCode();
    void setTargetCode(int32_t value);

    /// <summary>
    /// **参数解释：** 重定向的目标链接 **约束限制：** “执行规则”选择“Break”时：全路径匹配，支持输入一个目标地址，以“/”作为首字符，字符长度不超过512，如：/errorcode.html。 “执行规则”选择“Redirect”时：输入的URL须以http://或https:// 开头 ，字符长度不超过512，包含完整的域名和路径信息，如：http://example.com/errorcode.html。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTargetLink() const;
    bool targetLinkIsSet() const;
    void unsettargetLink();
    void setTargetLink(const std::string& value);


protected:
    int32_t errorCode_;
    bool errorCodeIsSet_;
    std::string executionMode_;
    bool executionModeIsSet_;
    int32_t targetCode_;
    bool targetCodeIsSet_;
    std::string targetLink_;
    bool targetLinkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrorCodeRedirectRules_H_
