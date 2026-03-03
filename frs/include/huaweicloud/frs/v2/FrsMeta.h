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
    static HttpRequestDef genRequestDefForBatchDeleteFaces();
    static HttpRequestDef genRequestDefForCompareFaceByBase64();
    static HttpRequestDef genRequestDefForCompareFaceByFile();
    static HttpRequestDef genRequestDefForCompareFaceByUrl();
    static HttpRequestDef genRequestDefForCreateFaceSet();
    static HttpRequestDef genRequestDefForDeleteFaceSet();
    static HttpRequestDef genRequestDefForDetectLiveFaceByBase64();
    static HttpRequestDef genRequestDefForDetectLiveFaceByFile();
    static HttpRequestDef genRequestDefForDetectLiveFaceByUrl();
    static HttpRequestDef genRequestDefForShowAllFaceSets();
    static HttpRequestDef genRequestDefForShowFaceSet();
    static HttpRequestDef genRequestDefForShowFacesByFaceId();
    static HttpRequestDef genRequestDefForShowFacesByLimit();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_FrsMeta_H_
