
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestUrlRewriteEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestUrlRewriteEngine_H_


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
/// **参数解释：** 访问URL重写，当用户请求URL与CDN节点缓存资源的URL不一致时，可以通过访问URL重写功能重定向到目标URL **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RequestUrlRewriteEngine
    : public ModelBase
{
public:
    RequestUrlRewriteEngine();
    virtual ~RequestUrlRewriteEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequestUrlRewriteEngine members

    /// <summary>
    /// **参数解释：** 重定向状态码 **约束限制：** 不涉及 **取值范围：** - 301 - 302 - 303 - 307 **默认取值：** 不涉及
    /// </summary>

    int32_t getRedirectStatusCode() const;
    bool redirectStatusCodeIsSet() const;
    void unsetredirectStatusCode();
    void setRedirectStatusCode(int32_t value);

    /// <summary>
    /// **参数解释：** 重定向URL **约束限制：** - 重定向后的URL，以正斜线（/）开头，不含http://头及域名，如：/test/index.html - 当匹配类型为全路径时，\&quot;\\*\&quot;可以用“$1”捕获，例如：匹配内容为/test/\\*.jpg，重定向URL配置为/newtest/$1.jpg，则用户请求/test/11.jpg时，$1捕获11，重定向后请求的URL为/newtest/11.jpg **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getRedirectUrl() const;
    bool redirectUrlIsSet() const;
    void unsetredirectUrl();
    void setRedirectUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 支持将客户端请求重定向到其他域名 **约束限制：** 不涉及 **取值范围：** - 1-255个字符 - 必须以http://或https://开头 **默认取值：** 不填时默认为当前域名
    /// </summary>

    std::string getRedirectHost() const;
    bool redirectHostIsSet() const;
    void unsetredirectHost();
    void setRedirectHost(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行规则 **约束限制：** 不涉及 **取值范围：** - redirect: 如果请求的URL匹配了当前规则，该请求将被重定向到目标Path。执行完当前规则后，当存在其他配置规则时，会继续匹配剩余规则 - break: 如果请求的URL匹配了当前规则，请求将被改写为目标Path。执行完当前规则后，当存在其他配置规则时，将不再匹配剩余规则，此时不支持配置重定向Host和重定向状态码，返回状态码200 **默认取值：** 不涉及
    /// </summary>

    std::string getExecutionMode() const;
    bool executionModeIsSet() const;
    void unsetexecutionMode();
    void setExecutionMode(const std::string& value);


protected:
    int32_t redirectStatusCode_;
    bool redirectStatusCodeIsSet_;
    std::string redirectUrl_;
    bool redirectUrlIsSet_;
    std::string redirectHost_;
    bool redirectHostIsSet_;
    std::string executionMode_;
    bool executionModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestUrlRewriteEngine_H_
