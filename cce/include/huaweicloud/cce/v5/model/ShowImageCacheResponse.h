
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ShowImageCacheResponse_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ShowImageCacheResponse_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v5/model/ImageCacheDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ShowImageCacheResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowImageCacheResponse();
    virtual ~ShowImageCacheResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImageCacheResponse members

    /// <summary>
    /// 
    /// </summary>

    ImageCacheDetail getImageCache() const;
    bool imageCacheIsSet() const;
    void unsetimageCache();
    void setImageCache(const ImageCacheDetail& value);


protected:
    ImageCacheDetail imageCache_;
    bool imageCacheIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ShowImageCacheResponse_H_
