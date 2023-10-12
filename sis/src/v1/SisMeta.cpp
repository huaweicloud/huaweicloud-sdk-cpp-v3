
#include <huaweicloud/sis/v1/SisMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef SisMeta::genRequestDefForCollectTranscriberJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForCreateVocabulary() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForDeleteVocabulary() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForPushTranscriberJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForRecognizeFlashAsr() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Property")
                  .withJsonTag("property")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AudioFormat")
                  .withJsonTag("audio_format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddPunc")
                  .withJsonTag("add_punc")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DigitNorm")
                  .withJsonTag("digit_norm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NeedWordInfo")
                  .withJsonTag("need_word_info")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VocabularyId")
                  .withJsonTag("vocabulary_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObsBucketName")
                  .withJsonTag("obs_bucket_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObsObjectKey")
                  .withJsonTag("obs_object_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FirstChannelOnly")
                  .withJsonTag("first_channel_only")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForRecognizeShortAudio() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForRunAudioAssessment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForRunMultiModalAssessment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForRunTts() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForShowVocabularies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForShowVocabulary() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SisMeta::genRequestDefForUpdateVocabulary() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

