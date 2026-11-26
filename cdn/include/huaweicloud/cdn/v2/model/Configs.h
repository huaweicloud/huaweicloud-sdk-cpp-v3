
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
#include <huaweicloud/cdn/v2/model/BandwidthAlarmStrategy.h>
#include <huaweicloud/cdn/v2/model/WebSocketSeek.h>
#include <huaweicloud/cdn/v2/model/IpFrequencyLimit.h>
#include <huaweicloud/cdn/v2/model/FlowLimitStrategy.h>
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
#include <huaweicloud/cdn/v2/model/HttpsTlsVersion.h>
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
/// **参数解释：** 配置项 **约束限制：** 不涉及
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
    /// **参数解释：** 业务类型 **约束限制：** 暂不支持“全站加速”变更为其它业务类型 **取值范围：** - web: 网站加速 - download: 文件下载加速 - video: 点播加速  **默认取值：** 不涉及
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释：** 加速域名的服务范围，客户端访问将会调度到服务范围内的CDN节点，可根据用户聚集区域选择合适的范围 **约束限制：** - 暂不支持“中国大陆”与“中国大陆境外”互相直接切换 - 服务范围修改为中国大陆或全球时，加速域名需要到工信部备案  **取值范围：** - mainland_china：中国大陆 - global：全球 - outside_mainland_china：中国大陆境外  **默认取值：** 不涉及
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名备注信息 **约束限制：** 不涉及 **取值范围：** 0-10000个字符 **默认取值：** 不涉及
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// **参数解释：** 回源请求头，CDN节点回源时，根据回源请求头配置操作请求的HTTP头部信息 **约束限制：** - 修改时该功能将覆盖原有配置（清空之前的配置），在使用此接口时，请上传全量头部信息 - 如果域名在后台配置了特殊请求头，需要将对应的请求头一并传入
    /// </summary>

    std::vector<OriginRequestHeader>& getOriginRequestHeader();
    bool originRequestHeaderIsSet() const;
    void unsetoriginRequestHeader();
    void setOriginRequestHeader(const std::vector<OriginRequestHeader>& value);

    /// <summary>
    /// **参数解释：** HTTP响应头，CDN节点响应客户端时，根据HTTP响应头配置操作响应的HTTP头部信息 **约束限制：** - 修改时该功能将覆盖原有配置（清空之前的配置），在使用此接口时，请上传全量头部信息 - 如果域名在后台配置了特殊响应头，需要将对应的响应头一并传入
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
    /// **参数解释：** 配置加速域名的源站，CDN通过加速域名将源站上需要加速的内容缓存到CDN节点，达到加速访问资源的效果 **约束限制：** 不涉及
    /// </summary>

    std::vector<SourcesConfig>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourcesConfig>& value);

    /// <summary>
    /// **参数解释：** 指定CDN回源时的请求协议 **约束限制：** 不涉及 **取值范围：** - follow: 协议跟随 - http: http协议 - https: https协议  **默认取值：** http: http协议
    /// </summary>

    std::string getOriginProtocol() const;
    bool originProtocolIsSet() const;
    void unsetoriginProtocol();
    void setOriginProtocol(const std::string& value);

    /// <summary>
    /// **参数解释：** 开启回源跟随，当源站地址因业务需求做了301/302 重定向，CDN节点会先跳转到301/302对应地址获取资源，缓存后再返回给用户 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭  **默认取值：** 不涉及
    /// </summary>

    std::string getOriginFollow302Status() const;
    bool originFollow302StatusIsSet() const;
    void unsetoriginFollow302Status();
    void setOriginFollow302Status(const std::string& value);

    /// <summary>
    /// **参数解释：** 通过不同参数控制源站资源在CDN节点的缓存时长 **约束限制：** 必须存在一条所有文件类型的规则
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
    /// **参数解释：** 配置客户端用IPv6协议访问CDN节点 **约束限制：** 不涉及 **取值范围：** - 1: 开启 - 0: 关闭  **默认取值：** 不涉及
    /// </summary>

    int32_t getIpv6Accelerate() const;
    bool ipv6AccelerateIsSet() const;
    void unsetipv6Accelerate();
    void setIpv6Accelerate(int32_t value);

    /// <summary>
    /// **参数解释：** 将源站返回的错误状态码缓存到CDN节点，用户再次请求时由CDN直接响应给用户错误码 **约束限制：** 不涉及
    /// </summary>

    std::vector<ErrorCodeCache>& getErrorCodeCache();
    bool errorCodeCacheIsSet() const;
    void unseterrorCodeCache();
    void setErrorCodeCache(const std::vector<ErrorCodeCache>& value);

    /// <summary>
    /// **参数解释：** Range回源，开启后，源站在收到CDN节点回源请求时，根据HTTP请求头中的Range信息返回指定范围的数据给CDN节点 **约束限制：** 开启Range回源的前提是您的源站支持Range请求，即HTTP请求头中包含Range字段，否则可能导致回源失败 **取值范围：** - on: 开启 - off: 关闭  **默认取值：** 不涉及
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
    /// **参数解释：** 回源URL改写，解决回源请求URL与源站URL不匹配的问题 **约束限制：** 最多配置20条
    /// </summary>

    std::vector<OriginRequestUrlRewrite>& getOriginRequestUrlRewrite();
    bool originRequestUrlRewriteIsSet() const;
    void unsetoriginRequestUrlRewrite();
    void setOriginRequestUrlRewrite(const std::vector<OriginRequestUrlRewrite>& value);

    /// <summary>
    /// **参数解释：** 高级回源，实现根据不同的资源类型或路径回源到不同源站 **约束限制：** 最多配置20条
    /// </summary>

    std::vector<FlexibleOrigins>& getFlexibleOrigin();
    bool flexibleOriginIsSet() const;
    void unsetflexibleOrigin();
    void setFlexibleOrigin(const std::vector<FlexibleOrigins>& value);

    /// <summary>
    /// **参数解释：** 回源是否校验ETag，开启此项配置后，当用户再次请求节点已缓存资源时，会将ETag的值加入到判断资源是否过期的逻辑 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭  **默认取值：** 不涉及
    /// </summary>

    std::string getSliceEtagStatus() const;
    bool sliceEtagStatusIsSet() const;
    void unsetsliceEtagStatus();
    void setSliceEtagStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义设置CDN节点回源时的超时时间，请求超时即表示此次回源失败 **约束限制：** 不涉及 **取值范围：** 5-300，单位：秒 **默认取值：** 不涉及
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
    /// **参数解释：** 请求限速，将用户请求速度限制在指定范围内，一定程度上减少突发高带宽风险，节省成本 **约束限制：** 不涉及
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
    /// **参数解释：** 自定义错误页面，当访问页面出错时，会给客户端返回指定的页面，优化用户体验 **约束限制：** 不涉及
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
    /// **参数解释：** 访问URL重写，当用户请求URL与CDN节点缓存资源的URL不一致时，可以通过访问URL重写功能重定向到目标URL **约束限制：** 不涉及
    /// </summary>

    std::vector<RequestUrlRewrite>& getRequestUrlRewrite();
    bool requestUrlRewriteIsSet() const;
    void unsetrequestUrlRewrite();
    void setRequestUrlRewrite(const std::vector<RequestUrlRewrite>& value);

    /// <summary>
    /// **参数解释：** 浏览器缓存过期时间，当终端用户请求资源时，如果浏览器有缓存，直接返回给用户 **约束限制：** 不涉及
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

    /// <summary>
    /// 
    /// </summary>

    HttpsTlsVersion getHttpsTlsVersion() const;
    bool httpsTlsVersionIsSet() const;
    void unsethttpsTlsVersion();
    void setHttpsTlsVersion(const HttpsTlsVersion& value);

    /// <summary>
    /// **参数解释：** 设置用量封顶阈值，当实际用量大于阈值时停用域名，有效预防流量盗刷或恶意攻击带来的高额账单。  &gt; 由于监控数据存在时延，域名将在用量达到阈值后的10分钟左右被停用  **约束限制：** 不涉及
    /// </summary>

    std::vector<FlowLimitStrategy>& getFlowLimitStrategy();
    bool flowLimitStrategyIsSet() const;
    void unsetflowLimitStrategy();
    void setFlowLimitStrategy(const std::vector<FlowLimitStrategy>& value);

    /// <summary>
    /// 
    /// </summary>

    BandwidthAlarmStrategy getBandwidthAlarmStrategy() const;
    bool bandwidthAlarmStrategyIsSet() const;
    void unsetbandwidthAlarmStrategy();
    void setBandwidthAlarmStrategy(const BandwidthAlarmStrategy& value);


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
    HttpsTlsVersion httpsTlsVersion_;
    bool httpsTlsVersionIsSet_;
    std::vector<FlowLimitStrategy> flowLimitStrategy_;
    bool flowLimitStrategyIsSet_;
    BandwidthAlarmStrategy bandwidthAlarmStrategy_;
    bool bandwidthAlarmStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Configs_H_
