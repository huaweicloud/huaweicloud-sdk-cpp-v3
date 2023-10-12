
#include <huaweicloud/cdn/v1/CdnMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CdnMeta::genRequestDefForBatchDeleteTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForCreateDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForCreatePreheatingTasks() {
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

HttpRequestDef CdnMeta::genRequestDefForCreateRefreshTasks() {
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

HttpRequestDef CdnMeta::genRequestDefForCreateTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForDeleteDomain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForDisableDomain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForEnableDomain() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
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

HttpRequestDef CdnMeta::genRequestDefForShowBlackWhiteList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowCacheRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowCertificatesHttpsInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserDomainId")
                  .withJsonTag("user_domain_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainDetail() {
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
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainItemDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowDomainItemLocationDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Region")
                  .withJsonTag("region")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Isp")
                  .withJsonTag("isp")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupBy")
                  .withJsonTag("group_by")
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

HttpRequestDef CdnMeta::genRequestDefForShowHistoryTaskDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Url")
                  .withJsonTag("url")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateTime")
                  .withJsonTag("create_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowHistoryTasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderField")
                  .withJsonTag("order_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderType")
                  .withJsonTag("order_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FileType")
                  .withJsonTag("file_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskType")
                  .withJsonTag("task_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowHttpInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowIpInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ips")
                  .withJsonTag("ips")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowOriginHost() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowRefer() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowResponseHeader() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowTopUrl() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceArea")
                  .withJsonTag("service_area")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForShowUrlTaskInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Url")
                  .withJsonTag("url")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskType")
                  .withJsonTag("task_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FileType")
                  .withJsonTag("file_type")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-request-id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CdnMeta::genRequestDefForUpdateBlackWhiteList() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateCacheRules() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateDomainMultiCertificates() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateDomainOrigin() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateFollow302Switch() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateHttpsInfo() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateOriginHost() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdatePrivateBucketAccess() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateRangeSwitch() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateRefer() {
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

HttpRequestDef CdnMeta::genRequestDefForUpdateResponseHeader() {
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

