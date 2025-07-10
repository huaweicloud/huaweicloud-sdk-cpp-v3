
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRulesEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRulesEngine_H_


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
/// **参数解释：** 通过不同参数控制源站资源在CDN节点的缓存时长 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CacheRulesEngine
    : public ModelBase
{
public:
    CacheRulesEngine();
    virtual ~CacheRulesEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CacheRulesEngine members

    /// <summary>
    /// **参数解释：** 资源在CDN节点的缓存过期时间 **约束限制：** 最大支持365天 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);

    /// <summary>
    /// **参数解释：** 缓存过期时间单位 **约束限制：** 不涉及 **取值范围：** - s: 秒 - m: 分 - h: 小时 - d: 天 **默认取值：** 不涉及
    /// </summary>

    std::string getTtlUnit() const;
    bool ttlUnitIsSet() const;
    void unsetttlUnit();
    void setTtlUnit(const std::string& value);

    /// <summary>
    /// **参数解释：** 缓存过期时间来源，设置CDN节点的缓存遵循源站还是CDN侧的配置 **约束限制：** 不涉及 **取值范围：** - on: CDN节点的缓存过期时间遵循源站的设置 - off: CDN节点的缓存过期时间遵循“缓存规则”中的“缓存过期时间” - min_ttl: CDN节点的缓存过期时间取缓存规则和源站二者的最小值 **默认取值：** off: CDN节点的缓存过期时间遵循“缓存规则”中的“缓存过期时间”
    /// </summary>

    std::string getFollowOrigin() const;
    bool followOriginIsSet() const;
    void unsetfollowOrigin();
    void setFollowOrigin(const std::string& value);

    /// <summary>
    /// **参数解释：** 强制缓存：CDN节点缓存过期时间是否忽略源站响应头Cache-Control中的no-cache、private、no-store字段 **约束限制：** 强制缓存与缓存过期时间来源功能配合使用，具体使用限制及配置效果请参考CDN用户指南的配置节点缓存规则章节 **取值范围：** - on: 打开强制缓存 - off: 关闭强制缓存 **默认取值：** off: 关闭强制缓存
    /// </summary>

    std::string getForceCache() const;
    bool forceCacheIsSet() const;
    void unsetforceCache();
    void setForceCache(const std::string& value);


protected:
    int32_t ttl_;
    bool ttlIsSet_;
    std::string ttlUnit_;
    bool ttlUnitIsSet_;
    std::string followOrigin_;
    bool followOriginIsSet_;
    std::string forceCache_;
    bool forceCacheIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRulesEngine_H_
