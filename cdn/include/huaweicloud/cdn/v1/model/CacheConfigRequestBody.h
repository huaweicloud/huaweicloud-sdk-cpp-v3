
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CacheConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CacheConfigRequestBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/CacheConfigRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CacheConfigRequestBody
    : public ModelBase
{
public:
    CacheConfigRequestBody();
    virtual ~CacheConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CacheConfigRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CacheConfigRequest getCacheConfig() const;
    bool cacheConfigIsSet() const;
    void unsetcacheConfig();
    void setCacheConfig(const CacheConfigRequest& value);


protected:
    CacheConfigRequest cacheConfig_;
    bool cacheConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CacheConfigRequestBody_H_
