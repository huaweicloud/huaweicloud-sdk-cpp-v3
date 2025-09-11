
#include <huaweicloud/smn/v2/SmnMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef SmnMeta::genRequestDefForAddSubscription() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForAddSubscriptionFromSubscriptionUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForBatchCreateOrDeleteResourceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForBatchCreateSubscriptionsFilterPolices() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForBatchDeleteSubscriptions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForBatchDeleteSubscriptionsByTopic() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForBatchDeleteSubscriptionsFilterPolices() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForBatchUpdateSubscriptionsFilterPolices() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCancelSubscription() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForConfirmSubscription() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TopicUrn")
                  .withJsonTag("topic_urn")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Endpoint")
                  .withJsonTag("endpoint")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Token")
                  .withJsonTag("token")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateLogtank() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateMessageTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateNotifyPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateResourceTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateTopic() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteLogtank() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteMessageTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteNotifyPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteResourceTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteSubscriptionsByTopic() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteTopic() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteTopicAttributeByName() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteTopicAttributes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDownloadHttpCert() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("contentType").
        withJsonTag("content-type").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListCloudService() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListLogtank() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListMessageTemplateDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListMessageTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MessageTemplateName")
                  .withJsonTag("message_template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListProjectTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListProtocols() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListResourceInstances() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListResourceTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListSubscriptions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Endpoint")
                  .withJsonTag("endpoint")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FuzzyRemark")
                  .withJsonTag("fuzzy_remark")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListSubscriptionsByTopic() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FuzzyRemark")
                  .withJsonTag("fuzzy_remark")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListTopicAttributes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListTopicDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListTopicMessageStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListTopics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FuzzyName")
                  .withJsonTag("fuzzy_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TopicId")
                  .withJsonTag("topic_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FuzzyDisplayName")
                  .withJsonTag("fuzzy_display_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForPublishHttpDetect() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForPublishMessage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForShowHttpDetectResult() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForShowNotifyPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUnsubscribeSubscription() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SubscriptionUrn")
                  .withJsonTag("subscription_urn")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateLogtank() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateMessageTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateNotifyPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateSubscription() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateTopic() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateTopicAttribute() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteApplication() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListApplicationAttributes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListApplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("platform")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForPublishAppMessage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForCreateApplicationEndpoint() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForDeleteApplicationEndpoint() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListApplicationEndpointAttributes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForListApplicationEndpoints() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Enabled")
                  .withJsonTag("enabled")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Token")
                  .withJsonTag("token")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserData")
                  .withJsonTag("user_data")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnMeta::genRequestDefForUpdateApplicationEndpoint() {
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

