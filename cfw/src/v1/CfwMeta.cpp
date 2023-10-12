
#include <huaweicloud/cfw/v1/CfwMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CfwMeta::genRequestDefForAddAddressItemsUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForAddAddressSetInfoUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForAddBlackWhiteListUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForAddServiceItemsUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForAddServiceSetUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForChangeEwProtectStatus() {
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

HttpRequestDef CfwMeta::genRequestDefForChangeIpsProtectModeUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForDeleteAclRuleCount() {
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

HttpRequestDef CfwMeta::genRequestDefForDeleteAddressItemUsingDelete() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteAddressSetInfoUsingDelete() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteBlackWhiteListUsingDelete() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteServiceItemUsingDelete() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForDeleteServiceSetUsingDelete() {
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
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAddressItemsUsingGet() {
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

HttpRequestDef CfwMeta::genRequestDefForListAddressSetDetailUsingGet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListAddressSetListUsingGet() {
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
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListBlackWhiteListsUsingGet() {
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

HttpRequestDef CfwMeta::genRequestDefForListFirewallUsingGet() {
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
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListIpsProtectModeUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForListParseDomainDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListRuleHitCount() {
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

HttpRequestDef CfwMeta::genRequestDefForListServiceItemsDetails() {
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

HttpRequestDef CfwMeta::genRequestDefForListServiceSet() {
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

HttpRequestDef CfwMeta::genRequestDefForListServiceSetDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateAddressSetInfoUsingPut() {
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

HttpRequestDef CfwMeta::genRequestDefForUpdateBlackWhiteListUsingPut() {
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

HttpRequestDef CfwMeta::genRequestDefForUpdateServiceSetUsingPut() {
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

HttpRequestDef CfwMeta::genRequestDefForAddRuleAclUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForDeleteRuleAclUsingDelete() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListRuleAclUsingPut() {
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

HttpRequestDef CfwMeta::genRequestDefForListRuleAclsUsingGet() {
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
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForUpdateRuleAclUsingPut() {
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

HttpRequestDef CfwMeta::genRequestDefForChangeProtectEip() {
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

HttpRequestDef CfwMeta::genRequestDefForCountEips() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FwInstanceId")
                  .withJsonTag("fw_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForListEipResources() {
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
    return reqDefBuilder;
}

HttpRequestDef CfwMeta::genRequestDefForChangeIpsSwitchUsingPost() {
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

HttpRequestDef CfwMeta::genRequestDefForListIpsSwitchStatusUsingGet() {
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

HttpRequestDef CfwMeta::genRequestDefForListVpcProtects() {
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

