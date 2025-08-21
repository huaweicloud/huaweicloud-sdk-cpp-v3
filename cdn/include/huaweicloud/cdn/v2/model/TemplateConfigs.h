
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateConfigs_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateConfigs_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/HttpResponseHeader.h>
#include <huaweicloud/cdn/v2/model/UserAgentFilter.h>
#include <huaweicloud/cdn/v2/model/Compress.h>
#include <huaweicloud/cdn/v2/model/RefererConfig.h>
#include <string>
#include <huaweicloud/cdn/v2/model/IpFilter.h>
#include <vector>
#include <huaweicloud/cdn/v2/model/CacheRules.h>
#include <huaweicloud/cdn/v2/model/FlowLimitStrategy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 域名模板配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TemplateConfigs
    : public ModelBase
{
public:
    TemplateConfigs();
    virtual ~TemplateConfigs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateConfigs members

    /// <summary>
    /// 
    /// </summary>

    std::vector<HttpResponseHeader>& getHttpResponseHeader();
    bool httpResponseHeaderIsSet() const;
    void unsethttpResponseHeader();
    void setHttpResponseHeader(const std::vector<HttpResponseHeader>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<CacheRules>& getCacheRules();
    bool cacheRulesIsSet() const;
    void unsetcacheRules();
    void setCacheRules(const std::vector<CacheRules>& value);

    /// <summary>
    /// **参数解释：** 开启回源跟随，当源站地址因业务需求做了301/302 重定向，CDN节点会先跳转到301/302对应地址获取资源，缓存后再返回给用户 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭 **默认取值：** 不涉及
    /// </summary>

    std::string getOriginFollow302Status() const;
    bool originFollow302StatusIsSet() const;
    void unsetoriginFollow302Status();
    void setOriginFollow302Status(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Compress getCompress() const;
    bool compressIsSet() const;
    void unsetcompress();
    void setCompress(const Compress& value);

    /// <summary>
    /// **参数解释：** Range回源，开启后，源站在收到CDN节点回源请求时，根据HTTP请求头中的Range信息返回指定范围的数据给CDN节点 **约束限制：** 开启Range回源的前提是您的源站支持Range请求，即HTTP请求头中包含Range字段，否则可能导致回源失败 **取值范围：** - on: 开启 - off: 关闭 **默认取值：** 不涉及
    /// </summary>

    std::string getOriginRangeStatus() const;
    bool originRangeStatusIsSet() const;
    void unsetoriginRangeStatus();
    void setOriginRangeStatus(const std::string& value);

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

    UserAgentFilter getUserAgentFilter() const;
    bool userAgentFilterIsSet() const;
    void unsetuserAgentFilter();
    void setUserAgentFilter(const UserAgentFilter& value);

    /// <summary>
    /// **参数解释：** 设置用量封顶阈值，当实际用量大于阈值时停用域名，有效预防流量盗刷或恶意攻击带来的高额账单。  &gt; 由于监控数据存在时延，域名将在用量达到阈值后的10分钟左右被停用  **约束限制：** 不涉及
    /// </summary>

    std::vector<FlowLimitStrategy>& getFlowLimitStrategy();
    bool flowLimitStrategyIsSet() const;
    void unsetflowLimitStrategy();
    void setFlowLimitStrategy(const std::vector<FlowLimitStrategy>& value);


protected:
    std::vector<HttpResponseHeader> httpResponseHeader_;
    bool httpResponseHeaderIsSet_;
    std::vector<CacheRules> cacheRules_;
    bool cacheRulesIsSet_;
    std::string originFollow302Status_;
    bool originFollow302StatusIsSet_;
    Compress compress_;
    bool compressIsSet_;
    std::string originRangeStatus_;
    bool originRangeStatusIsSet_;
    IpFilter ipFilter_;
    bool ipFilterIsSet_;
    RefererConfig referer_;
    bool refererIsSet_;
    UserAgentFilter userAgentFilter_;
    bool userAgentFilterIsSet_;
    std::vector<FlowLimitStrategy> flowLimitStrategy_;
    bool flowLimitStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TemplateConfigs_H_
