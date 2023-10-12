#ifndef HUAWEICLOUD_SDK_FRS_V2_FrsMeta_H_
#define HUAWEICLOUD_SDK_FRS_V2_FrsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/frs/v2/FrsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_FRS_V2_EXPORT  FrsMeta {
public:
    static HttpRequestDef genRequestDefForAddFacesByBase64();
    static HttpRequestDef genRequestDefForAddFacesByFile();
    static HttpRequestDef genRequestDefForAddFacesByUrl();
    static HttpRequestDef genRequestDefForBatchDeleteFaces();
    static HttpRequestDef genRequestDefForCompareFaceByBase64();
    static HttpRequestDef genRequestDefForCompareFaceByFile();
    static HttpRequestDef genRequestDefForCompareFaceByUrl();
    static HttpRequestDef genRequestDefForCreateFaceSet();
    static HttpRequestDef genRequestDefForDeleteFaceByExternalImageId();
    static HttpRequestDef genRequestDefForDeleteFaceByFaceId();
    static HttpRequestDef genRequestDefForDeleteFaceSet();
    static HttpRequestDef genRequestDefForDetectFaceByBase64();
    static HttpRequestDef genRequestDefForDetectFaceByBase64Intl();
    static HttpRequestDef genRequestDefForDetectFaceByFile();
    static HttpRequestDef genRequestDefForDetectFaceByFileIntl();
    static HttpRequestDef genRequestDefForDetectFaceByUrl();
    static HttpRequestDef genRequestDefForDetectFaceByUrlIntl();
    static HttpRequestDef genRequestDefForDetectLiveByBase64();
    static HttpRequestDef genRequestDefForDetectLiveByBase64Intl();
    static HttpRequestDef genRequestDefForDetectLiveByFile();
    static HttpRequestDef genRequestDefForDetectLiveByFileIntl();
    static HttpRequestDef genRequestDefForDetectLiveByUrl();
    static HttpRequestDef genRequestDefForDetectLiveByUrlIntl();
    static HttpRequestDef genRequestDefForDetectLiveFaceByBase64();
    static HttpRequestDef genRequestDefForDetectLiveFaceByFile();
    static HttpRequestDef genRequestDefForDetectLiveFaceByUrl();
    static HttpRequestDef genRequestDefForSearchFaceByBase64();
    static HttpRequestDef genRequestDefForSearchFaceByFaceId();
    static HttpRequestDef genRequestDefForSearchFaceByFile();
    static HttpRequestDef genRequestDefForSearchFaceByUrl();
    static HttpRequestDef genRequestDefForShowAllFaceSets();
    static HttpRequestDef genRequestDefForShowFaceSet();
    static HttpRequestDef genRequestDefForShowFacesByFaceId();
    static HttpRequestDef genRequestDefForShowFacesByLimit();
    static HttpRequestDef genRequestDefForUpdateFace();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_FrsMeta_H_
