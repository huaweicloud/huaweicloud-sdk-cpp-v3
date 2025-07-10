
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Actions_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Actions_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ErrorCodeCacheEngine.h>
#include <huaweicloud/cdn/v2/model/FlexibleOriginsEngine.h>
#include <huaweicloud/cdn/v2/model/HttpResponseHeader.h>
#include <huaweicloud/cdn/v2/model/OriginRequestHeader.h>
#include <huaweicloud/cdn/v2/model/BrowserCacheRulesEngine.h>
#include <huaweicloud/cdn/v2/model/CacheRulesEngine.h>
#include <huaweicloud/cdn/v2/model/OriginRequestUrlRewriteEngine.h>
#include <huaweicloud/cdn/v2/model/RequestUrlRewriteEngine.h>
#include <huaweicloud/cdn/v2/model/AccessControl.h>
#include <huaweicloud/cdn/v2/model/RequestLimitRulesEngine.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 规则行为 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Actions
    : public ModelBase
{
public:
    Actions();
    virtual ~Actions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Actions members

    /// <summary>
    /// **参数解释：** 高级回源，实现根据不同的资源类型或路径回源到不同源站 **约束限制：** 最多配置20条
    /// </summary>

    std::vector<FlexibleOriginsEngine>& getFlexibleOrigin();
    bool flexibleOriginIsSet() const;
    void unsetflexibleOrigin();
    void setFlexibleOrigin(const std::vector<FlexibleOriginsEngine>& value);

    /// <summary>
    /// **参数解释：** CDN节点回源时，改写用户回源请求URL的HTTP头部信息 **约束限制：** - 该功能将覆盖原有配置（清空之前的配置），在使用此接口时，请上传全量头部信息 - 如果域名在后台配置了特殊请求头，需要将对应的请求头一并传入
    /// </summary>

    std::vector<OriginRequestHeader>& getOriginRequestHeader();
    bool originRequestHeaderIsSet() const;
    void unsetoriginRequestHeader();
    void setOriginRequestHeader(const std::vector<OriginRequestHeader>& value);

    /// <summary>
    /// **参数解释：** 配置节点响应给客户端的头部信息，配置响应消息后，用户请求加速域名下的资源时，CDN返回给用户的消息中将包含该域名配置的响应头信息 **约束限制：** - 该功能将覆盖原有配置（清空之前的配置），在使用此接口时，请上传全量头部信息 - 如果域名在后台配置了特殊请求头，需要将对应的请求头一并传入
    /// </summary>

    std::vector<HttpResponseHeader>& getHttpResponseHeader();
    bool httpResponseHeaderIsSet() const;
    void unsethttpResponseHeader();
    void setHttpResponseHeader(const std::vector<HttpResponseHeader>& value);

    /// <summary>
    /// 
    /// </summary>

    AccessControl getAccessControl() const;
    bool accessControlIsSet() const;
    void unsetaccessControl();
    void setAccessControl(const AccessControl& value);

    /// <summary>
    /// 
    /// </summary>

    RequestLimitRulesEngine getRequestLimitRules() const;
    bool requestLimitRulesIsSet() const;
    void unsetrequestLimitRules();
    void setRequestLimitRules(const RequestLimitRulesEngine& value);

    /// <summary>
    /// 
    /// </summary>

    OriginRequestUrlRewriteEngine getOriginRequestUrlRewrite() const;
    bool originRequestUrlRewriteIsSet() const;
    void unsetoriginRequestUrlRewrite();
    void setOriginRequestUrlRewrite(const OriginRequestUrlRewriteEngine& value);

    /// <summary>
    /// 
    /// </summary>

    CacheRulesEngine getCacheRule() const;
    bool cacheRuleIsSet() const;
    void unsetcacheRule();
    void setCacheRule(const CacheRulesEngine& value);

    /// <summary>
    /// 
    /// </summary>

    RequestUrlRewriteEngine getRequestUrlRewrite() const;
    bool requestUrlRewriteIsSet() const;
    void unsetrequestUrlRewrite();
    void setRequestUrlRewrite(const RequestUrlRewriteEngine& value);

    /// <summary>
    /// 
    /// </summary>

    BrowserCacheRulesEngine getBrowserCacheRule() const;
    bool browserCacheRuleIsSet() const;
    void unsetbrowserCacheRule();
    void setBrowserCacheRule(const BrowserCacheRulesEngine& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorCodeCacheEngine getErrorCodeCache() const;
    bool errorCodeCacheIsSet() const;
    void unseterrorCodeCache();
    void setErrorCodeCache(const ErrorCodeCacheEngine& value);


protected:
    std::vector<FlexibleOriginsEngine> flexibleOrigin_;
    bool flexibleOriginIsSet_;
    std::vector<OriginRequestHeader> originRequestHeader_;
    bool originRequestHeaderIsSet_;
    std::vector<HttpResponseHeader> httpResponseHeader_;
    bool httpResponseHeaderIsSet_;
    AccessControl accessControl_;
    bool accessControlIsSet_;
    RequestLimitRulesEngine requestLimitRules_;
    bool requestLimitRulesIsSet_;
    OriginRequestUrlRewriteEngine originRequestUrlRewrite_;
    bool originRequestUrlRewriteIsSet_;
    CacheRulesEngine cacheRule_;
    bool cacheRuleIsSet_;
    RequestUrlRewriteEngine requestUrlRewrite_;
    bool requestUrlRewriteIsSet_;
    BrowserCacheRulesEngine browserCacheRule_;
    bool browserCacheRuleIsSet_;
    ErrorCodeCacheEngine errorCodeCache_;
    bool errorCodeCacheIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Actions_H_
