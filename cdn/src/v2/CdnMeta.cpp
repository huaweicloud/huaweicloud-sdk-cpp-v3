
#include <huaweicloud/cdn/v2/CdnMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CdnMeta::genRequestDefForBatchCopyDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForDownloadRegionCarrierExcel() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Country")
                  .withJsonTag("country")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExcelLanguage")
                  .withJsonTag("excel_language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExcelType")
                  .withJsonTag("excel_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Region")
                  .withJsonTag("region")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Carrier")
                  .withJsonTag("carrier")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForDownloadStatisticsExcel() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExcelLanguage")
                  .withJsonTag("excel_language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExcelType")
                  .withJsonTag("excel_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForListDomains() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BusinessType")
                  .withJsonTag("business_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainStatus")
                  .withJsonTag("domain_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShowTags")
                  .withJsonTag("show_tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExactMatch")
                  .withJsonTag("exact_match")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForSetChargeModes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowBandwidthCalc() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CalcType")
                  .withJsonTag("calc_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowChargeModes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProductType")
                  .withJsonTag("product_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainDetailByName() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainFullConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShowSpecialConfigs")
                  .withJsonTag("show_special_configs")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainLocationStats() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Country")
                  .withJsonTag("country")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Province")
                  .withJsonTag("province")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Isp")
                  .withJsonTag("isp")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupBy")
                  .withJsonTag("group_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainStats() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupBy")
                  .withJsonTag("group_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowTopDomainNames() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowTopUrl() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForUpdateDomainFullConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
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

