
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestUrlRewrite_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestUrlRewrite_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/UrlRewriteCondition.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 访问URL重写。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RequestUrlRewrite
    : public ModelBase
{
public:
    RequestUrlRewrite();
    virtual ~RequestUrlRewrite();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequestUrlRewrite members

    /// <summary>
    /// 
    /// </summary>

    UrlRewriteCondition getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const UrlRewriteCondition& value);

    /// <summary>
    /// 重定向状态码。支持301、302、303、307。
    /// </summary>

    int32_t getRedirectStatusCode() const;
    bool redirectStatusCodeIsSet() const;
    void unsetredirectStatusCode();
    void setRedirectStatusCode(int32_t value);

    /// <summary>
    /// 重定向URL。重定向后的URL，以正斜线（/）开头，不含http://头及域名，如：/test/index.html。   - 当匹配类型为全路径时，\&quot;\\*\&quot;可以用“$1”捕获，例如：匹配内容为/test/\\*.jpg，重定向URL配置为/newtest/$1.jpg，则用户请求/test/11.jpg时，$1捕获11，重定向后请求的URL为/newtest/11.jpg。
    /// </summary>

    std::string getRedirectUrl() const;
    bool redirectUrlIsSet() const;
    void unsetredirectUrl();
    void setRedirectUrl(const std::string& value);

    /// <summary>
    /// 支持将客户端请求重定向到其他域名。   &gt; 不填时默认为当前域名。   &gt; 支持字符长度为1-255，必须以http://或https://开头，例如http://www.example.com。
    /// </summary>

    std::string getRedirectHost() const;
    bool redirectHostIsSet() const;
    void unsetredirectHost();
    void setRedirectHost(const std::string& value);

    /// <summary>
    /// 执行规则：   - redirect：如果请求的URL匹配了当前规则，该请求将被重定向到目标Path。执行完当前规则后，当存在其他配置规则时，会继续匹配剩余规则。   - break：如果请求的URL匹配了当前规则，请求将被改写为目标Path。执行完当前规则后，当存在其他配置规则时，将不再匹配剩余规则，此时不支持配置重定向Host和重定向状态码，返回状态码200。
    /// </summary>

    std::string getExecutionMode() const;
    bool executionModeIsSet() const;
    void unsetexecutionMode();
    void setExecutionMode(const std::string& value);


protected:
    UrlRewriteCondition condition_;
    bool conditionIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RequestUrlRewrite_H_
