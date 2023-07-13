
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ConfigsGetBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ConfigsGetBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/ErrorCodeRedirectRules.h>
#include <huaweicloud/cdn/v1/model/SourcesConfig.h>
#include <huaweicloud/cdn/v1/model/UrlAuthGetBody.h>
#include <huaweicloud/cdn/v1/model/HttpGetBody.h>
#include <string>
#include <huaweicloud/cdn/v1/model/Compress.h>
#include <vector>
#include <huaweicloud/cdn/v1/model/ErrorCodeCache.h>
#include <huaweicloud/cdn/v1/model/IpFilter.h>
#include <huaweicloud/cdn/v1/model/UserAgentFilter.h>
#include <huaweicloud/cdn/v1/model/RefererConfig.h>
#include <huaweicloud/cdn/v1/model/CacheRules.h>
#include <huaweicloud/cdn/v1/model/HttpResponseHeader.h>
#include <huaweicloud/cdn/v1/model/ForceRedirectConfig.h>
#include <huaweicloud/cdn/v1/model/OriginRequestHeader.h>
#include <huaweicloud/cdn/v1/model/CacheUrlParameterFilter.h>
#include <huaweicloud/cdn/v1/model/OriginRequestUrlRewrite.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置项。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ConfigsGetBody
    : public ModelBase
{
public:
    ConfigsGetBody();
    virtual ~ConfigsGetBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ConfigsGetBody members

    /// <summary>
    /// 回源请求头配置。
    /// </summary>

    std::vector<OriginRequestHeader>& getOriginRequestHeader();
    bool originRequestHeaderIsSet() const;
    void unsetoriginRequestHeader();
    void setOriginRequestHeader(const std::vector<OriginRequestHeader>& value);

    /// <summary>
    /// http header配置
    /// </summary>

    std::vector<HttpResponseHeader>& getHttpResponseHeader();
    bool httpResponseHeaderIsSet() const;
    void unsethttpResponseHeader();
    void setHttpResponseHeader(const std::vector<HttpResponseHeader>& value);

    /// <summary>
    /// 
    /// </summary>

    UrlAuthGetBody getUrlAuth() const;
    bool urlAuthIsSet() const;
    void unseturlAuth();
    void setUrlAuth(const UrlAuthGetBody& value);

    /// <summary>
    /// 
    /// </summary>

    HttpGetBody getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const HttpGetBody& value);

    /// <summary>
    /// 源站配置。
    /// </summary>

    std::vector<SourcesConfig>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourcesConfig>& value);

    /// <summary>
    /// 回源跟随，on：开启，off：关闭。
    /// </summary>

    std::string getOriginFollow302Status() const;
    bool originFollow302StatusIsSet() const;
    void unsetoriginFollow302Status();
    void setOriginFollow302Status(const std::string& value);

    /// <summary>
    /// 缓存规则。
    /// </summary>

    std::vector<CacheRules>& getCacheRules();
    bool cacheRulesIsSet() const;
    void unsetcacheRules();
    void setCacheRules(const std::vector<CacheRules>& value);

    /// <summary>
    /// 
    /// </summary>

    IpFilter getIpFilter() const;
    bool ipFilterIsSet() const;
    void unsetipFilter();
    void setIpFilter(const IpFilter& value);

    /// <summary>
    /// 
    /// </summary>

    RefererConfig getReferer() const;
    bool refererIsSet() const;
    void unsetreferer();
    void setReferer(const RefererConfig& value);

    /// <summary>
    /// 回源协议。
    /// </summary>

    std::string getOriginProtocol() const;
    bool originProtocolIsSet() const;
    void unsetoriginProtocol();
    void setOriginProtocol(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ForceRedirectConfig getForceRedirect() const;
    bool forceRedirectIsSet() const;
    void unsetforceRedirect();
    void setForceRedirect(const ForceRedirectConfig& value);

    /// <summary>
    /// 
    /// </summary>

    Compress getCompress() const;
    bool compressIsSet() const;
    void unsetcompress();
    void setCompress(const Compress& value);

    /// <summary>
    /// 
    /// </summary>

    CacheUrlParameterFilter getCacheUrlParameterFilter() const;
    bool cacheUrlParameterFilterIsSet() const;
    void unsetcacheUrlParameterFilter();
    void setCacheUrlParameterFilter(const CacheUrlParameterFilter& value);

    /// <summary>
    /// ipv6设置，1：打开；0：关闭。
    /// </summary>

    int32_t getIpv6Accelerate() const;
    bool ipv6AccelerateIsSet() const;
    void unsetipv6Accelerate();
    void setIpv6Accelerate(int32_t value);

    /// <summary>
    /// 状态码缓存时间。
    /// </summary>

    std::vector<ErrorCodeCache>& getErrorCodeCache();
    bool errorCodeCacheIsSet() const;
    void unseterrorCodeCache();
    void setErrorCodeCache(const std::vector<ErrorCodeCache>& value);

    /// <summary>
    /// Range回源。
    /// </summary>

    std::string getOriginRangeStatus() const;
    bool originRangeStatusIsSet() const;
    void unsetoriginRangeStatus();
    void setOriginRangeStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserAgentFilter getUserAgentFilter() const;
    bool userAgentFilterIsSet() const;
    void unsetuserAgentFilter();
    void setUserAgentFilter(const UserAgentFilter& value);

    /// <summary>
    /// 改写回源URL。
    /// </summary>

    std::vector<OriginRequestUrlRewrite>& getOriginRequestUrlRewrite();
    bool originRequestUrlRewriteIsSet() const;
    void unsetoriginRequestUrlRewrite();
    void setOriginRequestUrlRewrite(const std::vector<OriginRequestUrlRewrite>& value);

    /// <summary>
    /// 自定义错误页面。
    /// </summary>

    std::vector<ErrorCodeRedirectRules>& getErrorCodeRedirectRules();
    bool errorCodeRedirectRulesIsSet() const;
    void unseterrorCodeRedirectRules();
    void setErrorCodeRedirectRules(const std::vector<ErrorCodeRedirectRules>& value);


protected:
    std::vector<OriginRequestHeader> originRequestHeader_;
    bool originRequestHeaderIsSet_;
    std::vector<HttpResponseHeader> httpResponseHeader_;
    bool httpResponseHeaderIsSet_;
    UrlAuthGetBody urlAuth_;
    bool urlAuthIsSet_;
    HttpGetBody https_;
    bool httpsIsSet_;
    std::vector<SourcesConfig> sources_;
    bool sourcesIsSet_;
    std::string originFollow302Status_;
    bool originFollow302StatusIsSet_;
    std::vector<CacheRules> cacheRules_;
    bool cacheRulesIsSet_;
    IpFilter ipFilter_;
    bool ipFilterIsSet_;
    RefererConfig referer_;
    bool refererIsSet_;
    std::string originProtocol_;
    bool originProtocolIsSet_;
    ForceRedirectConfig forceRedirect_;
    bool forceRedirectIsSet_;
    Compress compress_;
    bool compressIsSet_;
    CacheUrlParameterFilter cacheUrlParameterFilter_;
    bool cacheUrlParameterFilterIsSet_;
    int32_t ipv6Accelerate_;
    bool ipv6AccelerateIsSet_;
    std::vector<ErrorCodeCache> errorCodeCache_;
    bool errorCodeCacheIsSet_;
    std::string originRangeStatus_;
    bool originRangeStatusIsSet_;
    UserAgentFilter userAgentFilter_;
    bool userAgentFilterIsSet_;
    std::vector<OriginRequestUrlRewrite> originRequestUrlRewrite_;
    bool originRequestUrlRewriteIsSet_;
    std::vector<ErrorCodeRedirectRules> errorCodeRedirectRules_;
    bool errorCodeRedirectRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ConfigsGetBody_H_
