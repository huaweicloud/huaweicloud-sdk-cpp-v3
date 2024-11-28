#ifndef HUAWEICLOUD_SDK_IMAGE_V2_ImageMeta_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_ImageMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/image/v2/ImageExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageMeta {
public:
    static HttpRequestDef genRequestDefForRunCelebrityRecognition();
    static HttpRequestDef genRequestDefForRunImageMainObjectDetection();
    static HttpRequestDef genRequestDefForRunImageMediaTagging();
    static HttpRequestDef genRequestDefForRunImageMediaTaggingDet();
    static HttpRequestDef genRequestDefForRunImageTagging();
    static HttpRequestDef genRequestDefForRunRecaptureDetect();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_ImageMeta_H_
