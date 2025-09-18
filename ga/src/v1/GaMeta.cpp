
#include <huaweicloud/ga/v1/GaMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef GaMeta::genRequestDefForCreateAccelerator() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteAccelerator() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListAccelerators() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowAccelerator() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateAccelerator() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForCreateEndpoint() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteEndpoint() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListEndpoints() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowEndpoint() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateEndpoint() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForCreateEndpointGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteEndpointGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListEndpointGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ListenerId")
                  .withJsonTag("listener_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowEndpointGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateEndpointGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForCreateHealthCheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteHealthCheck() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListHealthChecks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndpointGroupId")
                  .withJsonTag("endpoint_group_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowHealthCheck() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateHealthCheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForAddIpGroupIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForAssociateListener() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForCreateIpGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteIpGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDisassociateListener() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListIpGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ListenerId")
                  .withJsonTag("listener_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForRemoveIpGroupIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowIpGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateIpGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForCreateListener() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteListener() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListListeners() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageReverse")
                  .withJsonTag("page_reverse")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AcceleratorId")
                  .withJsonTag("accelerator_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowListener() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateListener() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForCreateLogtank() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForDeleteLogtank() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListLogtanks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceIds")
                  .withJsonTag("resource_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForShowLogtank() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForUpdateLogtank() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListAllPops() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListTenantQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef GaMeta::genRequestDefForListRegions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

