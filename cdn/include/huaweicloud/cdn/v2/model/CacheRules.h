
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRules_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRules_H_


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
/// 缓存规则
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CacheRules
    : public ModelBase
{
public:
    CacheRules();
    virtual ~CacheRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CacheRules members

    /// <summary>
    /// **参数解释：** 匹配类型 **约束限制：** 不涉及 **取值范围：** - all: 匹配所有文件 - file_extension: 按文件后缀匹配 - catalog: 按目录匹配 - full_path: 全路径匹配 - home_page: 按首页匹配  **默认取值：** 不涉及
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// **参数解释：** 缓存规则匹配内容 **约束限制：** - 当match_type为all时，置空 - 当match_type为file_extension时，为文件后缀，输入首字符为“.”，以“,”或“;”分隔，如.jpg,.zip,.exe，并且输入的文件名后缀总数不超过100个，总字符不超过1000 - 当match_type为catalog时，为目录路径，输入要求以“/”作为首字符， 以“,”或“;”分隔，如/test/folder01,/test/folder02，并且输入的目录路径总数不超过20个，总字符不超过255 - 当match_type为full_path时，为全路径，输入要求以“/”作为首字符，支持匹配指定目录下的具体文件，或者带通配符“\\*”的文件，单条全路径缓存规则里仅支持配置一个全路径，如/test/index.html或/test/\\*.jpg，不可配置/_* - 当match_type为home_page时，置空  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getMatchValue() const;
    bool matchValueIsSet() const;
    void unsetmatchValue();
    void setMatchValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源在CDN节点的缓存过期时间，单位由ttl_unit参数指定 **约束限制：** 最大支持365天 **取值范围：** 不涉及 **默认取值：** 0
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);

    /// <summary>
    /// **参数解释：** 缓存过期时间单位 **约束限制：** 不涉及 **取值范围：** - s: 秒 - m: 分 - h: 小时 - d: 天  **默认取值：** 不涉及
    /// </summary>

    std::string getTtlUnit() const;
    bool ttlUnitIsSet() const;
    void unsetttlUnit();
    void setTtlUnit(const std::string& value);

    /// <summary>
    /// **参数解释：** 缓存规则的优先级，数值越大，优先级越高 **约束限制：** 优先级不能相同 **取值范围：** 1-1000 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 缓存过期时间来源，设置CDN节点的缓存遵循源站还是CDN侧的配置 **约束限制：** 不涉及 **取值范围：** - on: CDN节点的缓存过期时间遵循源站的设置 - off: CDN节点的缓存过期时间遵循“缓存规则”中的“缓存过期时间” - min_ttl: CDN节点的缓存过期时间取缓存规则和源站二者的最小值  **默认取值：** off: CDN节点的缓存过期时间遵循“缓存规则”中的“缓存过期时间”
    /// </summary>

    std::string getFollowOrigin() const;
    bool followOriginIsSet() const;
    void unsetfollowOrigin();
    void setFollowOrigin(const std::string& value);

    /// <summary>
    /// **参数解释：** 强制缓存：CDN节点缓存过期时间是否忽略源站响应头Cache-Control中的no-cache、private、no-store字段 **约束限制：** 强制缓存与缓存过期时间来源功能配合使用，具体使用限制及配置效果请参考CDN用户指南的配置节点缓存规则章节 **取值范围：** - on: 打开强制缓存 - off: 关闭强制缓存  **默认取值：** off: 关闭强制缓存
    /// </summary>

    std::string getForceCache() const;
    bool forceCacheIsSet() const;
    void unsetforceCache();
    void setForceCache(const std::string& value);

    /// <summary>
    /// **参数解释：** URL参数 **约束限制：** 不涉及 **取值范围：** - del_params: 忽略指定URL参数 - reserve_params: 保留指定URL参数 - ignore_url_params: 忽略全部URL参数 - full_url: 使用完整URL参数  **默认取值：** full_url: 使用完整URL参数
    /// </summary>

    std::string getUrlParameterType() const;
    bool urlParameterTypeIsSet() const;
    void unseturlParameterType();
    void setUrlParameterType(const std::string& value);

    /// <summary>
    /// **参数解释：** URL参数值 **约束限制：** - 最多配置30条参数值 - 以“,”或“;”分隔 - 当url_parameter_type为del_params或reserve_params时必填  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getUrlParameterValue() const;
    bool urlParameterValueIsSet() const;
    void unseturlParameterValue();
    void setUrlParameterValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 如果您的源站的Cache-Control头部设置了stale-while-revalidate&#x3D;***（***为时间），可以在CDN侧开启SWR开关，当CDN节点缓存的资源过期后，如果客户端请求该资源时过期时间没有超过stale-while-revalidate设置的时间，浏览器仍然返回已缓存的资源，同时cdn节点会回源请求最新的资源并缓存，用户再次请求时就会得到最新的资源。 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭  **默认取值：** off: 关闭
    /// </summary>

    std::string getStaleWhileRevalidate() const;
    bool staleWhileRevalidateIsSet() const;
    void unsetstaleWhileRevalidate();
    void setStaleWhileRevalidate(const std::string& value);


protected:
    std::string matchType_;
    bool matchTypeIsSet_;
    std::string matchValue_;
    bool matchValueIsSet_;
    int32_t ttl_;
    bool ttlIsSet_;
    std::string ttlUnit_;
    bool ttlUnitIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::string followOrigin_;
    bool followOriginIsSet_;
    std::string forceCache_;
    bool forceCacheIsSet_;
    std::string urlParameterType_;
    bool urlParameterTypeIsSet_;
    std::string urlParameterValue_;
    bool urlParameterValueIsSet_;
    std::string staleWhileRevalidate_;
    bool staleWhileRevalidateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRules_H_
