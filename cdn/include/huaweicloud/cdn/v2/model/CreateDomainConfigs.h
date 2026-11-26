
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainConfigs_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainConfigs_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BandwidthAlarmStrategy.h>
#include <huaweicloud/cdn/v2/model/IpFilter.h>
#include <huaweicloud/cdn/v2/model/ErrorCodeCache.h>
#include <vector>
#include <huaweicloud/cdn/v2/model/FlowLimitStrategy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 创建域名时同步配置的配置项，创建域名后可通过\&quot;修改域名全量配置\&quot;接口再次调整 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateDomainConfigs
    : public ModelBase
{
public:
    CreateDomainConfigs();
    virtual ~CreateDomainConfigs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDomainConfigs members

    /// <summary>
    /// **参数解释：** 将源站返回的错误状态码缓存到CDN节点，用户再次请求时由CDN直接响应给用户错误码 **约束限制：** 不涉及
    /// </summary>

    std::vector<ErrorCodeCache>& getErrorCodeCache();
    bool errorCodeCacheIsSet() const;
    void unseterrorCodeCache();
    void setErrorCodeCache(const std::vector<ErrorCodeCache>& value);

    /// <summary>
    /// 
    /// </summary>

    IpFilter getIpFilter() const;
    bool ipFilterIsSet() const;
    void unsetipFilter();
    void setIpFilter(const IpFilter& value);

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
    std::vector<ErrorCodeCache> errorCodeCache_;
    bool errorCodeCacheIsSet_;
    IpFilter ipFilter_;
    bool ipFilterIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateDomainConfigs_H_
