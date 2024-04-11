
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BrowserCacheRules_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BrowserCacheRules_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/BrowserCacheRulesCondition.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 浏览器缓存过期时间。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BrowserCacheRules
    : public ModelBase
{
public:
    BrowserCacheRules();
    virtual ~BrowserCacheRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BrowserCacheRules members

    /// <summary>
    /// 
    /// </summary>

    BrowserCacheRulesCondition getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const BrowserCacheRulesCondition& value);

    /// <summary>
    /// 缓存生效类型：   - follow_origin：遵循源站的缓存策略，即Cache-Control头部的设置，   - ttl：浏览器缓存遵循当前规则设置的过期时间，   - never：浏览器不缓存资源。
    /// </summary>

    std::string getCacheType() const;
    bool cacheTypeIsSet() const;
    void unsetcacheType();
    void setCacheType(const std::string& value);

    /// <summary>
    /// 缓存过期时间，最大支持365天。   &gt; 当缓存生效类型为ttl时必填。
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);

    /// <summary>
    /// 缓存过期时间单位，s：秒；m：分种；h：小时；d：天。   &gt; 当缓存生效类型为ttl时必填。
    /// </summary>

    std::string getTtlUnit() const;
    bool ttlUnitIsSet() const;
    void unsetttlUnit();
    void setTtlUnit(const std::string& value);


protected:
    BrowserCacheRulesCondition condition_;
    bool conditionIsSet_;
    std::string cacheType_;
    bool cacheTypeIsSet_;
    int32_t ttl_;
    bool ttlIsSet_;
    std::string ttlUnit_;
    bool ttlUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BrowserCacheRules_H_
