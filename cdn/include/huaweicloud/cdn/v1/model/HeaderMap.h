
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_HeaderMap_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_HeaderMap_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置HTTP头参数。取值：\&quot;Content-Disposition\&quot;, \&quot;Content-Language\&quot;, \&quot;Access-Control-Allow-Origin\&quot;,\&quot;Access-Control-Allow-Methods\&quot;, \&quot;Access-Control-Max-Age\&quot;, \&quot;Access-Control-Expose-Headers\&quot;。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  HeaderMap
    : public ModelBase
{
public:
    HeaderMap();
    virtual ~HeaderMap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HeaderMap members

    /// <summary>
    /// 指示回复的内容该以何种形式展示
    /// </summary>

    std::string getContentDisposition() const;
    bool contentDispositionIsSet() const;
    void unsetcontentDisposition();
    void setContentDisposition(const std::string& value);

    /// <summary>
    /// 说明访问者希望采用的语言或语言组合
    /// </summary>

    std::string getContentLanguage() const;
    bool contentLanguageIsSet() const;
    void unsetcontentLanguage();
    void setContentLanguage(const std::string& value);

    /// <summary>
    /// 指定了该响应的资源是否被允许与给定的origin共享
    /// </summary>

    std::string getAccessControlAllowOrigin() const;
    bool accessControlAllowOriginIsSet() const;
    void unsetaccessControlAllowOrigin();
    void setAccessControlAllowOrigin(const std::string& value);

    /// <summary>
    /// 明确了客户端所要访问的资源允许使用的方法或方法列表
    /// </summary>

    std::string getAccessControlAllowMethods() const;
    bool accessControlAllowMethodsIsSet() const;
    void unsetaccessControlAllowMethods();
    void setAccessControlAllowMethods(const std::string& value);

    /// <summary>
    /// Access-Control-Allow-Methods 和Access-Control-Allow-Headers 提供的信息可以被缓存多久
    /// </summary>

    std::string getAccessControlMaxAge() const;
    bool accessControlMaxAgeIsSet() const;
    void unsetaccessControlMaxAge();
    void setAccessControlMaxAge(const std::string& value);

    /// <summary>
    /// 列出了哪些首部可以作为响应的一部分暴露给外部
    /// </summary>

    std::string getAccessControlExposeHeaders() const;
    bool accessControlExposeHeadersIsSet() const;
    void unsetaccessControlExposeHeaders();
    void setAccessControlExposeHeaders(const std::string& value);


protected:
    std::string contentDisposition_;
    bool contentDispositionIsSet_;
    std::string contentLanguage_;
    bool contentLanguageIsSet_;
    std::string accessControlAllowOrigin_;
    bool accessControlAllowOriginIsSet_;
    std::string accessControlAllowMethods_;
    bool accessControlAllowMethodsIsSet_;
    std::string accessControlMaxAge_;
    bool accessControlMaxAgeIsSet_;
    std::string accessControlExposeHeaders_;
    bool accessControlExposeHeadersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_HeaderMap_H_
