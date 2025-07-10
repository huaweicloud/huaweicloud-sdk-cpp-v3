
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BrowserCacheRulesEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BrowserCacheRulesEngine_H_


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
/// **参数解释：** 浏览器缓存过期时间，当终端用户请求资源时，如果浏览器有缓存，直接返回给用户 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BrowserCacheRulesEngine
    : public ModelBase
{
public:
    BrowserCacheRulesEngine();
    virtual ~BrowserCacheRulesEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BrowserCacheRulesEngine members

    /// <summary>
    /// **参数解释：** 缓存生效类型 **约束限制：** 不涉及 **取值范围：** - follow_origin: 遵循源站的缓存策略，即Cache-Control头部的设置 - ttl: 浏览器缓存遵循当前规则设置的过期时间 - never: 浏览器不缓存资源 **默认取值：** 不涉及
    /// </summary>

    std::string getCacheType() const;
    bool cacheTypeIsSet() const;
    void unsetcacheType();
    void setCacheType(const std::string& value);

    /// <summary>
    /// **参数解释：** 缓存过期时间 **约束限制：** - 最大支持365天 - 当缓存生效类型为ttl时必填 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);

    /// <summary>
    /// **参数解释：** 缓存过期时间单位 **约束限制：** 当缓存生效类型为ttl时必填 **取值范围：** - s：秒 - m：分种 - h：小时 - d：天 **默认取值：** 不涉及
    /// </summary>

    std::string getTtlUnit() const;
    bool ttlUnitIsSet() const;
    void unsetttlUnit();
    void setTtlUnit(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BrowserCacheRulesEngine_H_
