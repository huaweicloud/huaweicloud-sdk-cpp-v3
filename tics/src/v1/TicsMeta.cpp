
#include <huaweicloud/tics/v1/TicsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef TicsMeta::genRequestDefForListAgents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AgentName")
                  .withJsonTag("agent_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LeagueName")
                  .withJsonTag("league_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListAuditInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListFlJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListInstanceHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListLeagueDatasets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DatasetName")
                  .withJsonTag("dataset_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PartnerName")
                  .withJsonTag("partner_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListLeagues() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListNodes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListNotices() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListPartners() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForListSqlJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowAgentDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowDatasetStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowInstanceReport() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowJobInstanceDag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RoundId")
                  .withJsonTag("round_id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowJobStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowLeague() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowOverview() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForShowPartnerStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TicsMeta::genRequestDefForUpdateLeague() {
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

