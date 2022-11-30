
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/ImageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListImagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImagesResponse();
    virtual ~ListImagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImagesResponse members

    /// <summary>
    /// 镜像列表
    /// </summary>

    std::vector<ImageInfo>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<ImageInfo>& value);


protected:
    std::vector<ImageInfo> images_;
    bool imagesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesResponse_H_
