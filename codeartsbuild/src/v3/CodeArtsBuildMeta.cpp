
#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDeleteBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDisableBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadKeystore() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainId")
                  .withJsonTag("domain_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForDownloadLogByRecordId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForResumeBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForRunJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowHistoryDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobListByProjectId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowJobSuccessRatio() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowLastHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowListHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowListPeriodHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForShowRecordInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsBuildMeta::genRequestDefForStopBuildJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

