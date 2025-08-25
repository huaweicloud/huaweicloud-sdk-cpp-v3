
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ListImageCachesResponse_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ListImageCachesResponse_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v5/model/ImageCacheDetail.h>
#include <vector>

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
class HUAWEICLOUD_CCE_V5_EXPORT  ListImageCachesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImageCachesResponse();
    virtual ~ListImageCachesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListImageCachesResponse members

    /// <summary>
    /// 镜像缓存列表。
    /// </summary>

    std::vector<ImageCacheDetail>& getImageCaches();
    bool imageCachesIsSet() const;
    void unsetimageCaches();
    void setImageCaches(const std::vector<ImageCacheDetail>& value);


protected:
    std::vector<ImageCacheDetail> imageCaches_;
    bool imageCachesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ListImageCachesResponse_H_
