#ifndef HUAWEICLOUD_SDK_SMN_V2_SmnMeta_H_
#define HUAWEICLOUD_SDK_SMN_V2_SmnMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/smn/v2/SmnExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_SMN_V2_EXPORT  SmnMeta {
public:
    static HttpRequestDef genRequestDefForAddSubscription();
    static HttpRequestDef genRequestDefForAddSubscriptionFromSubscriptionUser();
    static HttpRequestDef genRequestDefForBatchCreateOrDeleteResourceTags();
    static HttpRequestDef genRequestDefForBatchCreateSubscriptionsFilterPolices();
    static HttpRequestDef genRequestDefForBatchDeleteSubscriptions();
    static HttpRequestDef genRequestDefForBatchDeleteSubscriptionsByTopic();
    static HttpRequestDef genRequestDefForBatchDeleteSubscriptionsFilterPolices();
    static HttpRequestDef genRequestDefForBatchUpdateSubscriptionsFilterPolices();
    static HttpRequestDef genRequestDefForCancelSubscription();
    static HttpRequestDef genRequestDefForConfirmSubscription();
    static HttpRequestDef genRequestDefForCreateLogtank();
    static HttpRequestDef genRequestDefForCreateMessageTemplate();
    static HttpRequestDef genRequestDefForCreateNotifyPolicy();
    static HttpRequestDef genRequestDefForCreateResourceTag();
    static HttpRequestDef genRequestDefForCreateTopic();
    static HttpRequestDef genRequestDefForDeleteLogtank();
    static HttpRequestDef genRequestDefForDeleteMessageTemplate();
    static HttpRequestDef genRequestDefForDeleteNotifyPolicy();
    static HttpRequestDef genRequestDefForDeleteResourceTag();
    static HttpRequestDef genRequestDefForDeleteSubscriptionsByTopic();
    static HttpRequestDef genRequestDefForDeleteTopic();
    static HttpRequestDef genRequestDefForDeleteTopicAttributeByName();
    static HttpRequestDef genRequestDefForDeleteTopicAttributes();
    static HttpRequestDef genRequestDefForDownloadHttpCert();
    static HttpRequestDef genRequestDefForListCloudService();
    static HttpRequestDef genRequestDefForListLogtank();
    static HttpRequestDef genRequestDefForListMessageTemplateDetails();
    static HttpRequestDef genRequestDefForListMessageTemplates();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListProtocols();
    static HttpRequestDef genRequestDefForListResourceInstances();
    static HttpRequestDef genRequestDefForListResourceTags();
    static HttpRequestDef genRequestDefForListSubscriptions();
    static HttpRequestDef genRequestDefForListSubscriptionsByTopic();
    static HttpRequestDef genRequestDefForListTopicAttributes();
    static HttpRequestDef genRequestDefForListTopicDetails();
    static HttpRequestDef genRequestDefForListTopicMessageStatistics();
    static HttpRequestDef genRequestDefForListTopics();
    static HttpRequestDef genRequestDefForListVersion();
    static HttpRequestDef genRequestDefForListVersions();
    static HttpRequestDef genRequestDefForPublishHttpDetect();
    static HttpRequestDef genRequestDefForPublishMessage();
    static HttpRequestDef genRequestDefForShowHttpDetectResult();
    static HttpRequestDef genRequestDefForShowNotifyPolicy();
    static HttpRequestDef genRequestDefForUnsubscribeSubscription();
    static HttpRequestDef genRequestDefForUpdateLogtank();
    static HttpRequestDef genRequestDefForUpdateMessageTemplate();
    static HttpRequestDef genRequestDefForUpdateNotifyPolicy();
    static HttpRequestDef genRequestDefForUpdateSubscription();
    static HttpRequestDef genRequestDefForUpdateTopic();
    static HttpRequestDef genRequestDefForUpdateTopicAttribute();
    static HttpRequestDef genRequestDefForCreateApplication();
    static HttpRequestDef genRequestDefForDeleteApplication();
    static HttpRequestDef genRequestDefForListApplicationAttributes();
    static HttpRequestDef genRequestDefForListApplications();
    static HttpRequestDef genRequestDefForPublishAppMessage();
    static HttpRequestDef genRequestDefForUpdateApplication();
    static HttpRequestDef genRequestDefForCreateApplicationEndpoint();
    static HttpRequestDef genRequestDefForDeleteApplicationEndpoint();
    static HttpRequestDef genRequestDefForListApplicationEndpointAttributes();
    static HttpRequestDef genRequestDefForListApplicationEndpoints();
    static HttpRequestDef genRequestDefForUpdateApplicationEndpoint();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_SmnMeta_H_
