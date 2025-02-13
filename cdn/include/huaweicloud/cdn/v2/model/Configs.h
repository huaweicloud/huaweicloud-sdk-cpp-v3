
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Configs_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Configs_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ForceRedirectConfig.h>
#include <huaweicloud/cdn/v2/model/HttpResponseHeader.h>
#include <huaweicloud/cdn/v2/model/ClientCert.h>
#include <huaweicloud/cdn/v2/model/Compress.h>
#include <huaweicloud/cdn/v2/model/WebSocketSeek.h>
#include <huaweicloud/cdn/v2/model/IpFrequencyLimit.h>
#include <huaweicloud/cdn/v2/model/RequestLimitRules.h>
#include <huaweicloud/cdn/v2/model/VideoSeek.h>
#include <huaweicloud/cdn/v2/model/Quic.h>
#include <huaweicloud/cdn/v2/model/IpFilter.h>
#include <huaweicloud/cdn/v2/model/Sni.h>
#include <string>
#include <huaweicloud/cdn/v2/model/AccessAreaFilter.h>
#include <huaweicloud/cdn/v2/model/OriginRequestHeader.h>
#include <huaweicloud/cdn/v2/model/CommonRemoteAuth.h>
#include <huaweicloud/cdn/v2/model/Hsts.h>
#include <huaweicloud/cdn/v2/model/ErrorCodeRedirectRules.h>
#include <vector>
#include <huaweicloud/cdn/v2/model/BrowserCacheRules.h>
#include <huaweicloud/cdn/v2/model/UrlAuth.h>
#include <huaweicloud/cdn/v2/model/RequestUrlRewrite.h>
#include <huaweicloud/cdn/v2/model/UserAgentFilter.h>
#include <huaweicloud/cdn/v2/model/RefererConfig.h>
#include <huaweicloud/cdn/v2/model/FlexibleOrigins.h>
#include <huaweicloud/cdn/v2/model/SourcesConfig.h>
#include <huaweicloud/cdn/v2/model/OriginRequestUrlRewrite.h>
#include <huaweicloud/cdn/v2/model/ErrorCodeCache.h>
#include <huaweicloud/cdn/v2/model/CacheRules.h>
#include <huaweicloud/cdn/v2/model/HttpPutBody.h>
#include <huaweicloud/cdn/v2/model/CacheUrlParameterFilter.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置项。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Configs
    : public ModelBase
{
public:
    Configs();
    virtual ~Configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Configs members

    /// <summary>
    /// 业务类型： - web：网站加速； - download：文件下载加速； - video：点播加速。  &gt; 暂不支持“全站加速”变更为其它业务类型。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 服务区域： - mainland_china：中国大陆； - global：全球； - outside_mainland_china：中国大陆境外。  &gt; 暂不支持“中国大陆”与“中国大陆境外”互相直接切换。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 给域名添加备注，字符长度范围0-200。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 回源请求头改写 该功能将覆盖原有配置（清空之前的配置），在使用此接口时，请上传全量头部信息。
    /// </summary>

    std::vector<OriginRequestHeader>& getOriginRequestHeader();
    bool originRequestHeaderIsSet() const;
    void unsetoriginRequestHeader();
    void setOriginRequestHeader(const std::vector<OriginRequestHeader>& value);

    /// <summary>
    /// http header配置 该功能将覆盖原有配置（清空之前的配置），在使用此接口时，请上传全量头部信息。
    /// </summary>

    std::vector<HttpResponseHeader>& getHttpResponseHeader();
    bool httpResponseHeaderIsSet() const;
    void unsethttpResponseHeader();
    void setHttpResponseHeader(const std::vector<HttpResponseHeader>& value);

    /// <summary>
    /// 
    /// </summary>

    UrlAuth getUrlAuth() const;
    bool urlAuthIsSet() const;
    void unseturlAuth();
    void setUrlAuth(const UrlAuth& value);

    /// <summary>
    /// 
    /// </summary>

    HttpPutBody getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const HttpPutBody& value);

    /// <summary>
    /// 源站配置。
    /// </summary>

    std::vector<SourcesConfig>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourcesConfig>& value);

    /// <summary>
    /// 回源协议，follow：协议跟随回源，http：HTTP回源(默认)，https：https回源。
    /// </summary>

    std::string getOriginProtocol() const;
    bool originProtocolIsSet() const;
    void unsetoriginProtocol();
    void setOriginProtocol(const std::string& value);

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
    /// Range回源，即分片回源，开启: on，关闭: off。  &gt; 开启Range回源的前提是您的源站支持Range请求，即HTTP请求头中包含Range字段，否则可能导致回源失败。
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
    /// 改写回源URL，最多配置20条。
    /// </summary>

    std::vector<OriginRequestUrlRewrite>& getOriginRequestUrlRewrite();
    bool originRequestUrlRewriteIsSet() const;
    void unsetoriginRequestUrlRewrite();
    void setOriginRequestUrlRewrite(const std::vector<OriginRequestUrlRewrite>& value);

    /// <summary>
    /// 高级回源，最多配置20条。
    /// </summary>

    std::vector<FlexibleOrigins>& getFlexibleOrigin();
    bool flexibleOriginIsSet() const;
    void unsetflexibleOrigin();
    void setFlexibleOrigin(const std::vector<FlexibleOrigins>& value);

    /// <summary>
    /// 回源是否校验ETag，on：开启，off：关闭。
    /// </summary>

    std::string getSliceEtagStatus() const;
    bool sliceEtagStatusIsSet() const;
    void unsetsliceEtagStatus();
    void setSliceEtagStatus(const std::string& value);

    /// <summary>
    /// 回源超时时间，范围:5-60，单位：秒。
    /// </summary>

    int32_t getOriginReceiveTimeout() const;
    bool originReceiveTimeoutIsSet() const;
    void unsetoriginReceiveTimeout();
    void setOriginReceiveTimeout(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CommonRemoteAuth getRemoteAuth() const;
    bool remoteAuthIsSet() const;
    void unsetremoteAuth();
    void setRemoteAuth(const CommonRemoteAuth& value);

    /// <summary>
    /// 
    /// </summary>

    WebSocketSeek getWebsocket() const;
    bool websocketIsSet() const;
    void unsetwebsocket();
    void setWebsocket(const WebSocketSeek& value);

    /// <summary>
    /// 
    /// </summary>

    VideoSeek getVideoSeek() const;
    bool videoSeekIsSet() const;
    void unsetvideoSeek();
    void setVideoSeek(const VideoSeek& value);

    /// <summary>
    /// 请求限速配置。
    /// </summary>

    std::vector<RequestLimitRules>& getRequestLimitRules();
    bool requestLimitRulesIsSet() const;
    void unsetrequestLimitRules();
    void setRequestLimitRules(const std::vector<RequestLimitRules>& value);

    /// <summary>
    /// 
    /// </summary>

    IpFrequencyLimit getIpFrequencyLimit() const;
    bool ipFrequencyLimitIsSet() const;
    void unsetipFrequencyLimit();
    void setIpFrequencyLimit(const IpFrequencyLimit& value);

    /// <summary>
    /// 
    /// </summary>

    Hsts getHsts() const;
    bool hstsIsSet() const;
    void unsethsts();
    void setHsts(const Hsts& value);

    /// <summary>
    /// 
    /// </summary>

    Quic getQuic() const;
    bool quicIsSet() const;
    void unsetquic();
    void setQuic(const Quic& value);

    /// <summary>
    /// 自定义错误页面。
    /// </summary>

    std::vector<ErrorCodeRedirectRules>& getErrorCodeRedirectRules();
    bool errorCodeRedirectRulesIsSet() const;
    void unseterrorCodeRedirectRules();
    void setErrorCodeRedirectRules(const std::vector<ErrorCodeRedirectRules>& value);

    /// <summary>
    /// 
    /// </summary>

    Sni getSni() const;
    bool sniIsSet() const;
    void unsetsni();
    void setSni(const Sni& value);

    /// <summary>
    /// 访问URL重写。
    /// </summary>

    std::vector<RequestUrlRewrite>& getRequestUrlRewrite();
    bool requestUrlRewriteIsSet() const;
    void unsetrequestUrlRewrite();
    void setRequestUrlRewrite(const std::vector<RequestUrlRewrite>& value);

    /// <summary>
    /// 浏览器缓存过期时间。
    /// </summary>

    std::vector<BrowserCacheRules>& getBrowserCacheRules();
    bool browserCacheRulesIsSet() const;
    void unsetbrowserCacheRules();
    void setBrowserCacheRules(const std::vector<BrowserCacheRules>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<AccessAreaFilter>& getAccessAreaFilter();
    bool accessAreaFilterIsSet() const;
    void unsetaccessAreaFilter();
    void setAccessAreaFilter(const std::vector<AccessAreaFilter>& value);

    /// <summary>
    /// 
    /// </summary>

    ClientCert getClientCert() const;
    bool clientCertIsSet() const;
    void unsetclientCert();
    void setClientCert(const ClientCert& value);


protected:
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::vector<OriginRequestHeader> originRequestHeader_;
    bool originRequestHeaderIsSet_;
    std::vector<HttpResponseHeader> httpResponseHeader_;
    bool httpResponseHeaderIsSet_;
    UrlAuth urlAuth_;
    bool urlAuthIsSet_;
    HttpPutBody https_;
    bool httpsIsSet_;
    std::vector<SourcesConfig> sources_;
    bool sourcesIsSet_;
    std::string originProtocol_;
    bool originProtocolIsSet_;
    std::string originFollow302Status_;
    bool originFollow302StatusIsSet_;
    std::vector<CacheRules> cacheRules_;
    bool cacheRulesIsSet_;
    IpFilter ipFilter_;
    bool ipFilterIsSet_;
    RefererConfig referer_;
    bool refererIsSet_;
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
    std::vector<FlexibleOrigins> flexibleOrigin_;
    bool flexibleOriginIsSet_;
    std::string sliceEtagStatus_;
    bool sliceEtagStatusIsSet_;
    int32_t originReceiveTimeout_;
    bool originReceiveTimeoutIsSet_;
    CommonRemoteAuth remoteAuth_;
    bool remoteAuthIsSet_;
    WebSocketSeek websocket_;
    bool websocketIsSet_;
    VideoSeek videoSeek_;
    bool videoSeekIsSet_;
    std::vector<RequestLimitRules> requestLimitRules_;
    bool requestLimitRulesIsSet_;
    IpFrequencyLimit ipFrequencyLimit_;
    bool ipFrequencyLimitIsSet_;
    Hsts hsts_;
    bool hstsIsSet_;
    Quic quic_;
    bool quicIsSet_;
    std::vector<ErrorCodeRedirectRules> errorCodeRedirectRules_;
    bool errorCodeRedirectRulesIsSet_;
    Sni sni_;
    bool sniIsSet_;
    std::vector<RequestUrlRewrite> requestUrlRewrite_;
    bool requestUrlRewriteIsSet_;
    std::vector<BrowserCacheRules> browserCacheRules_;
    bool browserCacheRulesIsSet_;
    std::vector<AccessAreaFilter> accessAreaFilter_;
    bool accessAreaFilterIsSet_;
    ClientCert clientCert_;
    bool clientCertIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Configs_H_
