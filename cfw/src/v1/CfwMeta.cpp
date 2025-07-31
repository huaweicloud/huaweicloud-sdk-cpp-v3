
#include <huaweicloud/cfw/v1/CfwMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CfwMeta::genRequestDefForAddAddressItem() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddAddressSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddBlackWhiteList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddDomainSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddDomains() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddLogConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddServiceItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddServiceSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForBatchDeleteAddressItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForBatchDeleteDomainSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForBatchDeleteServiceItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForCancelCaptureTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForChangeEastWestFirewallStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForCreateCaptureTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForCreateEastWestFirewall() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForCreateFirewall() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXClientToken;
    reqDefBuilder.withRequestField(headerParamXClientToken
                  .withName("XClientToken")
                  .withJsonTag("X-Client-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForCreateTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteAddressItem() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteAddressSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteBlackWhiteList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteCaptureTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteDomainSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteDomains() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteFirewall() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteIpBlacklist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteServiceItem() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteServiceSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForEnableIpBlacklist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForExportIpBlacklist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("contentDisposition").
        withJsonTag("Content-Disposition").
        withKindName("std::string").
        withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("contentType").
        withJsonTag("Content-Type").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForImportIpBlacklist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAccessControlLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleId")
                  .withJsonTag("rule_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcIp")
                  .withJsonTag("src_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcPort")
                  .withJsonTag("src_port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstIp")
                  .withJsonTag("dst_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstPort")
                  .withJsonTag("dst_port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogId")
                  .withJsonTag("log_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NextDate")
                  .withJsonTag("next_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstHost")
                  .withJsonTag("dst_host")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleName")
                  .withJsonTag("rule_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcRegionName")
                  .withJsonTag("src_region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstRegionName")
                  .withJsonTag("dst_region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcProvinceName")
                  .withJsonTag("src_province_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstProvinceName")
                  .withJsonTag("dst_province_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcCityName")
                  .withJsonTag("src_city_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstCityName")
                  .withJsonTag("dst_city_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAddressItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SetId")
                  .withJsonTag("set_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Address")
                  .withJsonTag("address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAddressSetType")
                  .withJsonTag("query_address_set_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAddressSetDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAddressSetType")
                  .withJsonTag("query_address_set_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAddressSets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Address")
                  .withJsonTag("address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddressType")
                  .withJsonTag("address_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAddressSetType")
                  .withJsonTag("query_address_set_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddressSetType")
                  .withJsonTag("address_set_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAttackLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcIp")
                  .withJsonTag("src_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcPort")
                  .withJsonTag("src_port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstIp")
                  .withJsonTag("dst_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstPort")
                  .withJsonTag("dst_port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogId")
                  .withJsonTag("log_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NextDate")
                  .withJsonTag("next_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Direction")
                  .withJsonTag("direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AttackType")
                  .withJsonTag("attack_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AttackRule")
                  .withJsonTag("attack_rule")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Level")
                  .withJsonTag("level")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstHost")
                  .withJsonTag("dst_host")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AttackRuleId")
                  .withJsonTag("attack_rule_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcRegionName")
                  .withJsonTag("src_region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstRegionName")
                  .withJsonTag("dst_region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcProvinceName")
                  .withJsonTag("src_province_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstProvinceName")
                  .withJsonTag("dst_province_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcCityName")
                  .withJsonTag("src_city_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstCityName")
                  .withJsonTag("dst_city_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAttackStatistic() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Range")
                  .withJsonTag("range")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Direction")
                  .withJsonTag("direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VgwId")
                  .withJsonTag("vgw_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Item")
                  .withJsonTag("item")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListBlackWhiteLists() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ListType")
                  .withJsonTag("list_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddressType")
                  .withJsonTag("address_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Address")
                  .withJsonTag("address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Port")
                  .withJsonTag("port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListCaptureResult() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListCaptureTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListDnsServers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListDomainParseDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddressType")
                  .withJsonTag("address_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListDomainParseIp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AddressType")
                  .withJsonTag("address_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainSetId")
                  .withJsonTag("domain_set_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListDomainSets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainSetType")
                  .withJsonTag("domain_set_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConfigStatus")
                  .withJsonTag("config_status")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListDomains() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_Id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListEastWestFirewall() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListFirewallDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListFirewallList() {
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

HttpRequestDef CfwMeta::genRequestDefForListFlowLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Direction")
                  .withJsonTag("direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcIp")
                  .withJsonTag("src_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcPort")
                  .withJsonTag("src_port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstIp")
                  .withJsonTag("dst_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstPort")
                  .withJsonTag("dst_port")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("App")
                  .withJsonTag("app")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogId")
                  .withJsonTag("log_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NextDate")
                  .withJsonTag("next_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstHost")
                  .withJsonTag("dst_host")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcRegionName")
                  .withJsonTag("src_region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstRegionName")
                  .withJsonTag("dst_region_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcProvinceName")
                  .withJsonTag("src_province_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstProvinceName")
                  .withJsonTag("dst_province_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcCityName")
                  .withJsonTag("src_city_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DstCityName")
                  .withJsonTag("dst_city_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpBlacklist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpBlacklistSwitch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListLogConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListProjectTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListProtectedVpcs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListResourceTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListServiceItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SetId")
                  .withJsonTag("set_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryServiceSetType")
                  .withJsonTag("query_service_set_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListServiceSetDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryServiceSetType")
                  .withJsonTag("query_service_set_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListServiceSets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryServiceSetType")
                  .withJsonTag("query_service_set_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForRetryIpBlacklist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForSaveTags() {
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

HttpRequestDef CfwMeta::genRequestDefForShowAccessTop() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Direction")
                  .withJsonTag("direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Range")
                  .withJsonTag("range")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VgwId")
                  .withJsonTag("vgw_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Item")
                  .withJsonTag("item")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RuleId")
                  .withJsonTag("rule_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowAlarmConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowAntiVirusRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EngineType")
                  .withJsonTag("engine_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowAntiVirusSwitch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowAttackTotal() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Range")
                  .withJsonTag("range")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VgwId")
                  .withJsonTag("vgw_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowAttackTrend() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Range")
                  .withJsonTag("range")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VgwId")
                  .withJsonTag("vgw_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowDomainSetDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowTrafficTrend() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Range")
                  .withJsonTag("range")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogType")
                  .withJsonTag("log_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VgwId")
                  .withJsonTag("vgw_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AggType")
                  .withJsonTag("agg_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAddressSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAlarmConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAntiVirusRule() {
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

HttpRequestDef CfwMeta::genRequestDefForUpdateAntiVirusSwitch() {
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

HttpRequestDef CfwMeta::genRequestDefForUpdateBlackWhiteList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateDnsServers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateDomainSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateLogConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateObjectConfigDesc() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateServiceSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForAddAclRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForBatchDeleteAclRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForBatchUpdateAclRuleActions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteAclRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteAclRuleHitCount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAclRuleHitCount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAclRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Direction")
                  .withJsonTag("direction")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ActionType")
                  .withJsonTag("action_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddressType")
                  .withJsonTag("address_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TagsId")
                  .withJsonTag("tags_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Source")
                  .withJsonTag("source")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Destination")
                  .withJsonTag("destination")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Service")
                  .withJsonTag("service")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Application")
                  .withJsonTag("application")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListRegions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListRuleAclTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowImportStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAclRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAclRuleOrder() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForChangeEipStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAlarmWhitelist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IpAddress")
                  .withJsonTag("ip_address")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListEipCount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListEips() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyWord")
                  .withJsonTag("key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sync")
                  .withJsonTag("sync")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeviceKey")
                  .withJsonTag("device_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddressType")
                  .withJsonTag("address_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwKeyWord")
                  .withJsonTag("fw_key_word")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EpsId")
                  .withJsonTag("eps_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowAutoProtectStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForSwitchAutoProtectStatus() {
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

HttpRequestDef CfwMeta::genRequestDefForChangeIpsProtectMode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForChangeIpsRuleMode() {
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

HttpRequestDef CfwMeta::genRequestDefForChangeIpsSwitchStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListCustomerIps() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ActionType")
                  .withJsonTag("action_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AffectedOs")
                  .withJsonTag("affected_os")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AttackType")
                  .withJsonTag("attack_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsName")
                  .withJsonTag("ips_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Severity")
                  .withJsonTag("severity")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Software")
                  .withJsonTag("software")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpsProtectMode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpsRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpsRules1() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AffectedApplicationLike")
                  .withJsonTag("affected_application_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateTime")
                  .withJsonTag("create_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsCveLike")
                  .withJsonTag("ips_cve_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsGroup")
                  .withJsonTag("ips_group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsId")
                  .withJsonTag("ips_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsLevel")
                  .withJsonTag("ips_level")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsNameLike")
                  .withJsonTag("ips_name_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsRulesTypeLike")
                  .withJsonTag("ips_rules_type_like")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpsStatus")
                  .withJsonTag("ips_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsUpdatedIpsRuleQueried")
                  .withJsonTag("is_updated_ips_rule_queried")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpsSwitchStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowCustomerIpsInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectId")
                  .withJsonTag("object_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForShowIpsUpdateTime() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAdvancedIpsRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateCustomerIps() {
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

