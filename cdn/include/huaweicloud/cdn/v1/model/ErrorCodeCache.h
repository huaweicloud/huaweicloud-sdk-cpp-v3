
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ErrorCodeCache_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ErrorCodeCache_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// CDN状态码缓存时间
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ErrorCodeCache
    : public ModelBase
{
public:
    ErrorCodeCache();
    virtual ~ErrorCodeCache();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorCodeCache members

    /// <summary>
    /// 允许配置的错误码: 400, 403, 404, 405, 414, 500, 501, 502, 503, 504
    /// </summary>

    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);

    /// <summary>
    /// 错误码缓存时间，单位为秒，范围0-31,536,000(一年默认为365天)
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ErrorCodeCache_H_
