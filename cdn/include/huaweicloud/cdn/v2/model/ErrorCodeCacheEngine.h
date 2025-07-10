
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrorCodeCacheEngine_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrorCodeCacheEngine_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 将源站返回的错误状态码缓存到CDN节点，用户再次请求时由CDN直接响应给用户错误状态码 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ErrorCodeCacheEngine
    : public ModelBase
{
public:
    ErrorCodeCacheEngine();
    virtual ~ErrorCodeCacheEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorCodeCacheEngine members

    /// <summary>
    /// **参数解释：** 需要缓存的错误码 **约束限制：** 不涉及 **取值范围：** - 3xx: 301, 302 - 4xx: 400, 403, 404, 405, 414 - 5xx: 501, 502, 503, 504 **默认取值：** 不涉及
    /// </summary>

    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);

    /// <summary>
    /// **参数解释：** 错误码缓存时间 **约束限制：** 不涉及 **取值范围：** 0-31536000，单位：秒 &gt; 3XX状态码缓存时间范围为0-20s  **默认取值：** 不涉及
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);


protected:
    int32_t code_;
    bool codeIsSet_;
    int32_t ttl_;
    bool ttlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrorCodeCacheEngine_H_
