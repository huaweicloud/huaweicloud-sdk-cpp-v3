
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
    FieldDef headerParamXTraceId;
    reqDefBuilder.withRequestField(headerParamXTraceId
                  .withName("XTraceId")
                  .withJsonTag("X-Trace-Id")
                  .withLocationType(Header_));
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
    reqDefBuilder.withRequestField(FieldDef().withName("Source")
                  .withJsonTag("source")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SetId")
                  .withJsonTag("set_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
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

HttpRequestDef CfwMeta::genRequestDefForChangeIpsSwitchStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
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


}
}
}
}

