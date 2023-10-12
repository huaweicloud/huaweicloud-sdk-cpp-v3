
#include <huaweicloud/drs/v3/DrsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef DrsMeta::genRequestDefForBatchChangeData() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchCheckJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchCheckResults() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchCreateJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchDeleteJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchListJobDetails() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchListJobStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchListProgresses() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchListRposAndRtos() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchListStructDetail() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchListStructProcess() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchResetPassword() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchRestoreTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchSetDefiner() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchSetObjects() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchSetPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchSetSmn() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchSetSpeed() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchShowParams() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchStartJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchStopJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchSwitchover() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchUpdateJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchUpdateUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchValidateClustersConnections() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForBatchValidateConnections() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForCreateCompareTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListAvailableZone() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListCompareResult() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForListUsers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowJobList() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowMonitoringData() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForShowQuotas() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateParams() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DrsMeta::genRequestDefForUpdateTuningParams() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
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

