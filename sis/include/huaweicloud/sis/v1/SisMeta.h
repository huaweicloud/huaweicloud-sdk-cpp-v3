#ifndef HUAWEICLOUD_SDK_SIS_V1_SisMeta_H_
#define HUAWEICLOUD_SDK_SIS_V1_SisMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/sis/v1/SisExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_SIS_V1_EXPORT  SisMeta {
public:
    static HttpRequestDef genRequestDefForCollectTranscriberJob();
    static HttpRequestDef genRequestDefForCreateVocabulary();
    static HttpRequestDef genRequestDefForDeleteVocabulary();
    static HttpRequestDef genRequestDefForPushTranscriberJobs();
    static HttpRequestDef genRequestDefForRecognizeFlashAsr();
    static HttpRequestDef genRequestDefForRecognizeShortAudio();
    static HttpRequestDef genRequestDefForRunAudioAssessment();
    static HttpRequestDef genRequestDefForRunMultiModalAssessment();
    static HttpRequestDef genRequestDefForRunTts();
    static HttpRequestDef genRequestDefForShowVocabularies();
    static HttpRequestDef genRequestDefForShowVocabulary();
    static HttpRequestDef genRequestDefForUpdateVocabulary();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_SisMeta_H_
