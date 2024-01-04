#ifndef HUAWEICLOUD_SDK_SMN_V2_SmnClient_H_
#define HUAWEICLOUD_SDK_SMN_V2_SmnClient_H_

#include <huaweicloud/smn/v2/SmnExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserRequest.h>
#include <huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserRequestBody.h>
#include <huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserResponse.h>
#include <huaweicloud/smn/v2/model/AddSubscriptionRequest.h>
#include <huaweicloud/smn/v2/model/AddSubscriptionRequestBody.h>
#include <huaweicloud/smn/v2/model/AddSubscriptionResponse.h>
#include <huaweicloud/smn/v2/model/BatchCreateOrDeleteResourceTagsRequest.h>
#include <huaweicloud/smn/v2/model/BatchCreateOrDeleteResourceTagsRequestBody.h>
#include <huaweicloud/smn/v2/model/BatchCreateOrDeleteResourceTagsResponse.h>
#include <huaweicloud/smn/v2/model/BatchCreateSubscriptionsFilterPolicesRequest.h>
#include <huaweicloud/smn/v2/model/BatchCreateSubscriptionsFilterPolicesResponse.h>
#include <huaweicloud/smn/v2/model/BatchDeleteSubscriptionsFilterPolicesRequest.h>
#include <huaweicloud/smn/v2/model/BatchDeleteSubscriptionsFilterPolicesRequestBody.h>
#include <huaweicloud/smn/v2/model/BatchDeleteSubscriptionsFilterPolicesResponse.h>
#include <huaweicloud/smn/v2/model/BatchSubscriptionsFilterPolicesRequestBody.h>
#include <huaweicloud/smn/v2/model/BatchUpdateSubscriptionsFilterPolicesRequest.h>
#include <huaweicloud/smn/v2/model/BatchUpdateSubscriptionsFilterPolicesResponse.h>
#include <huaweicloud/smn/v2/model/CancelSubscriptionRequest.h>
#include <huaweicloud/smn/v2/model/CancelSubscriptionResponse.h>
#include <huaweicloud/smn/v2/model/CreateLogtankRequest.h>
#include <huaweicloud/smn/v2/model/CreateLogtankRequestBody.h>
#include <huaweicloud/smn/v2/model/CreateLogtankResponse.h>
#include <huaweicloud/smn/v2/model/CreateMessageTemplateRequest.h>
#include <huaweicloud/smn/v2/model/CreateMessageTemplateRequestBody.h>
#include <huaweicloud/smn/v2/model/CreateMessageTemplateResponse.h>
#include <huaweicloud/smn/v2/model/CreateResourceTagRequest.h>
#include <huaweicloud/smn/v2/model/CreateResourceTagRequestBody.h>
#include <huaweicloud/smn/v2/model/CreateResourceTagResponse.h>
#include <huaweicloud/smn/v2/model/CreateTopicRequest.h>
#include <huaweicloud/smn/v2/model/CreateTopicRequestBody.h>
#include <huaweicloud/smn/v2/model/CreateTopicResponse.h>
#include <huaweicloud/smn/v2/model/DeleteLogtankRequest.h>
#include <huaweicloud/smn/v2/model/DeleteLogtankResponse.h>
#include <huaweicloud/smn/v2/model/DeleteMessageTemplateRequest.h>
#include <huaweicloud/smn/v2/model/DeleteMessageTemplateResponse.h>
#include <huaweicloud/smn/v2/model/DeleteResourceTagRequest.h>
#include <huaweicloud/smn/v2/model/DeleteResourceTagResponse.h>
#include <huaweicloud/smn/v2/model/DeleteTopicAttributeByNameRequest.h>
#include <huaweicloud/smn/v2/model/DeleteTopicAttributeByNameResponse.h>
#include <huaweicloud/smn/v2/model/DeleteTopicAttributesRequest.h>
#include <huaweicloud/smn/v2/model/DeleteTopicAttributesResponse.h>
#include <huaweicloud/smn/v2/model/DeleteTopicRequest.h>
#include <huaweicloud/smn/v2/model/DeleteTopicResponse.h>
#include <huaweicloud/smn/v2/model/HttpDetectRequestBody.h>
#include <huaweicloud/smn/v2/model/ListInstanceRequestBody.h>
#include <huaweicloud/smn/v2/model/ListLogtankRequest.h>
#include <huaweicloud/smn/v2/model/ListLogtankResponse.h>
#include <huaweicloud/smn/v2/model/ListMessageTemplateDetailsRequest.h>
#include <huaweicloud/smn/v2/model/ListMessageTemplateDetailsResponse.h>
#include <huaweicloud/smn/v2/model/ListMessageTemplatesRequest.h>
#include <huaweicloud/smn/v2/model/ListMessageTemplatesResponse.h>
#include <huaweicloud/smn/v2/model/ListProjectTagsRequest.h>
#include <huaweicloud/smn/v2/model/ListProjectTagsResponse.h>
#include <huaweicloud/smn/v2/model/ListResourceInstancesRequest.h>
#include <huaweicloud/smn/v2/model/ListResourceInstancesResponse.h>
#include <huaweicloud/smn/v2/model/ListResourceTagsRequest.h>
#include <huaweicloud/smn/v2/model/ListResourceTagsResponse.h>
#include <huaweicloud/smn/v2/model/ListSubscriptionsByTopicRequest.h>
#include <huaweicloud/smn/v2/model/ListSubscriptionsByTopicResponse.h>
#include <huaweicloud/smn/v2/model/ListSubscriptionsRequest.h>
#include <huaweicloud/smn/v2/model/ListSubscriptionsResponse.h>
#include <huaweicloud/smn/v2/model/ListTopicAttributesRequest.h>
#include <huaweicloud/smn/v2/model/ListTopicAttributesResponse.h>
#include <huaweicloud/smn/v2/model/ListTopicDetailsRequest.h>
#include <huaweicloud/smn/v2/model/ListTopicDetailsResponse.h>
#include <huaweicloud/smn/v2/model/ListTopicsRequest.h>
#include <huaweicloud/smn/v2/model/ListTopicsResponse.h>
#include <huaweicloud/smn/v2/model/ListVersionRequest.h>
#include <huaweicloud/smn/v2/model/ListVersionResponse.h>
#include <huaweicloud/smn/v2/model/ListVersionsRequest.h>
#include <huaweicloud/smn/v2/model/ListVersionsResponse.h>
#include <huaweicloud/smn/v2/model/PublishHttpDetectRequest.h>
#include <huaweicloud/smn/v2/model/PublishHttpDetectResponse.h>
#include <huaweicloud/smn/v2/model/PublishMessageRequest.h>
#include <huaweicloud/smn/v2/model/PublishMessageRequestBody.h>
#include <huaweicloud/smn/v2/model/PublishMessageResponse.h>
#include <huaweicloud/smn/v2/model/ShowHttpDetectResultRequest.h>
#include <huaweicloud/smn/v2/model/ShowHttpDetectResultResponse.h>
#include <huaweicloud/smn/v2/model/UpdateLogtankRequest.h>
#include <huaweicloud/smn/v2/model/UpdateLogtankRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateLogtankResponse.h>
#include <huaweicloud/smn/v2/model/UpdateMessageTemplateRequest.h>
#include <huaweicloud/smn/v2/model/UpdateMessageTemplateRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateMessageTemplateResponse.h>
#include <huaweicloud/smn/v2/model/UpdateSubscriptionRequest.h>
#include <huaweicloud/smn/v2/model/UpdateSubscriptionRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateSubscriptionResponse.h>
#include <huaweicloud/smn/v2/model/UpdateTopicAttributeRequest.h>
#include <huaweicloud/smn/v2/model/UpdateTopicAttributeRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateTopicAttributeResponse.h>
#include <huaweicloud/smn/v2/model/UpdateTopicRequest.h>
#include <huaweicloud/smn/v2/model/UpdateTopicRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateTopicResponse.h>
#include <string>

#include <huaweicloud/smn/v2/model/CreateApplicationRequest.h>
#include <huaweicloud/smn/v2/model/CreateApplicationRequestBody.h>
#include <huaweicloud/smn/v2/model/CreateApplicationResponse.h>
#include <huaweicloud/smn/v2/model/DeleteApplicationRequest.h>
#include <huaweicloud/smn/v2/model/DeleteApplicationResponse.h>
#include <huaweicloud/smn/v2/model/ListApplicationAttributesRequest.h>
#include <huaweicloud/smn/v2/model/ListApplicationAttributesResponse.h>
#include <huaweicloud/smn/v2/model/ListApplicationsRequest.h>
#include <huaweicloud/smn/v2/model/ListApplicationsResponse.h>
#include <huaweicloud/smn/v2/model/PublishAppMessageRequest.h>
#include <huaweicloud/smn/v2/model/PublishAppMessageRequestBody.h>
#include <huaweicloud/smn/v2/model/PublishAppMessageResponse.h>
#include <huaweicloud/smn/v2/model/UpdateApplicationRequest.h>
#include <huaweicloud/smn/v2/model/UpdateApplicationRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateApplicationResponse.h>
#include <string>

#include <huaweicloud/smn/v2/model/CreateApplicationEndpointRequest.h>
#include <huaweicloud/smn/v2/model/CreateApplicationEndpointRequestBody.h>
#include <huaweicloud/smn/v2/model/CreateApplicationEndpointResponse.h>
#include <huaweicloud/smn/v2/model/DeleteApplicationEndpointRequest.h>
#include <huaweicloud/smn/v2/model/DeleteApplicationEndpointResponse.h>
#include <huaweicloud/smn/v2/model/ListApplicationEndpointAttributesRequest.h>
#include <huaweicloud/smn/v2/model/ListApplicationEndpointAttributesResponse.h>
#include <huaweicloud/smn/v2/model/ListApplicationEndpointsRequest.h>
#include <huaweicloud/smn/v2/model/ListApplicationEndpointsResponse.h>
#include <huaweicloud/smn/v2/model/UpdateApplicationEndpointRequest.h>
#include <huaweicloud/smn/v2/model/UpdateApplicationEndpointRequestBody.h>
#include <huaweicloud/smn/v2/model/UpdateApplicationEndpointResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Smn::V2::Model;

class HUAWEICLOUD_SMN_V2_EXPORT  SmnClient : public Client
{
public:

    SmnClient();

    virtual ~SmnClient();

    static ClientBuilder<SmnClient> newBuilder();

    // 订阅
    //
    // 为指定Topic添加一个订阅者，如果订阅者的状态为未确认，则向订阅者发送一个确认的消息。待订阅者进行ConfirmSubscription确认后，该订阅者才能收到Topic发布的消息。单Topic默认可添加10000个订阅者，高并发场景下，可能会出现订阅者数量超过10000仍添加成功的情况，此为正常现象。接口是幂等的，如果添加已存在的订阅者，则返回成功，且status code为200，否则status code为201。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddSubscriptionResponse> addSubscription(
        AddSubscriptionRequest &request
    );
    // 导入订阅
    //
    // 为指定的Topic添加订阅者，订阅者信息来源为订阅用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddSubscriptionFromSubscriptionUserResponse> addSubscriptionFromSubscriptionUser(
        AddSubscriptionFromSubscriptionUserRequest &request
    );
    // 批量添加删除资源标签
    //
    // 为指定实例批量添加或删除标签。一个资源上最多有10个标签。
    // 此接口为幂等接口：创建时如果请求体中存在重复key则报错。
    // 创建时，不允许重复key，如果数据库存在就覆盖。
    // 删除时，如果删除的标签不存在，默认处理成功，删除时不对标签字符集范围做校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateOrDeleteResourceTagsResponse> batchCreateOrDeleteResourceTags(
        BatchCreateOrDeleteResourceTagsRequest &request
    );
    // 批量创建订阅过滤策略
    //
    // 创建订阅者的消息过滤策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateSubscriptionsFilterPolicesResponse> batchCreateSubscriptionsFilterPolices(
        BatchCreateSubscriptionsFilterPolicesRequest &request
    );
    // 批量删除订阅过滤策略
    //
    // 删除订阅者的消息过滤策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteSubscriptionsFilterPolicesResponse> batchDeleteSubscriptionsFilterPolices(
        BatchDeleteSubscriptionsFilterPolicesRequest &request
    );
    // 批量更新订阅过滤策略
    //
    // 更新订阅者的消息过滤策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateSubscriptionsFilterPolicesResponse> batchUpdateSubscriptionsFilterPolices(
        BatchUpdateSubscriptionsFilterPolicesRequest &request
    );
    // 取消订阅
    //
    // 删除指定的订阅者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelSubscriptionResponse> cancelSubscription(
        CancelSubscriptionRequest &request
    );
    // 绑定云日志
    //
    // 为指定Topic绑定一个云日志，用于记录主题消息发送状态等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLogtankResponse> createLogtank(
        CreateLogtankRequest &request
    );
    // 创建消息模板
    //
    // 创建一个模板，用户可以按照模板去发送消息，这样可以减少请求的数据量。
    // 单用户默认可创建100个消息模板，高并发场景下，可能会出现消息模板数量超过100仍创建成功的情况，此为正常现象。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMessageTemplateResponse> createMessageTemplate(
        CreateMessageTemplateRequest &request
    );
    // 添加资源标签
    //
    // 一个资源上最多有10个标签。此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateResourceTagResponse> createResourceTag(
        CreateResourceTagRequest &request
    );
    // 创建主题
    //
    // 创建Topic，单用户默认配额为3000。高并发场景下，可能会出现Topic数量超过3000仍创建成功的情况，此为正常现象。
    // 接口是幂等的，接口调用返回成功时，若已存在同名的Topic，返回的status code为200，否则返回的status code为201
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTopicResponse> createTopic(
        CreateTopicRequest &request
    );
    // 解绑云日志
    //
    // 解绑指定Topic绑定的云日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLogtankResponse> deleteLogtank(
        DeleteLogtankRequest &request
    );
    // 删除消息模板
    //
    // 删除消息模板。删除模板之前的消息请求都可以使用该模板发送，删除之后无法再使用该模板发送消息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMessageTemplateResponse> deleteMessageTemplate(
        DeleteMessageTemplateRequest &request
    );
    // 删除资源标签
    //
    // 幂等接口：删除时，不对标签做校验。删除的key不存在报404，key不能为空或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteResourceTagResponse> deleteResourceTag(
        DeleteResourceTagRequest &request
    );
    // 删除主题
    //
    // 删除主题。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTopicResponse> deleteTopic(
        DeleteTopicRequest &request
    );
    // 删除指定名称的主题策略
    //
    // 删除指定名称的主题策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTopicAttributeByNameResponse> deleteTopicAttributeByName(
        DeleteTopicAttributeByNameRequest &request
    );
    // 删除所有主题策略
    //
    // 删除所有主题策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTopicAttributesResponse> deleteTopicAttributes(
        DeleteTopicAttributesRequest &request
    );
    // 查询云日志
    //
    // 查询指定Topic绑定的云日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogtankResponse> listLogtank(
        ListLogtankRequest &request
    );
    // 查询消息模板详情
    //
    // 查询模板详情，包括模板内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMessageTemplateDetailsResponse> listMessageTemplateDetails(
        ListMessageTemplateDetailsRequest &request
    );
    // 查询消息模板列表
    //
    // 分页查询模板列表，模板列表按照创建时间进行升序排列。分页查询可以指定offset以及limit。如果不存在模板，则返回空列表。额外的查询参数分别有message_template_name和protocol。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMessageTemplatesResponse> listMessageTemplates(
        ListMessageTemplatesRequest &request
    );
    // 查询项目标签
    //
    // 查询租户在指定Region和实例类型的所有标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询资源实例
    //
    // 使用标签过滤实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceInstancesResponse> listResourceInstances(
        ListResourceInstancesRequest &request
    );
    // 查询资源标签
    //
    // 查询指定实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceTagsResponse> listResourceTags(
        ListResourceTagsRequest &request
    );
    // 查询订阅者列表
    //
    // 分页返回请求者的所有的订阅列表，订阅列表按照订阅创建时间进行升序排列。分页查询可以指定offset以及limit。如果订阅者不存在，返回空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubscriptionsResponse> listSubscriptions(
        ListSubscriptionsRequest &request
    );
    // 查询指定Topic的订阅者列表
    //
    // 分页获取特定Topic的订阅列表，订阅列表按照订阅创建时间进行升序排列。分页查询可以指定offset以及limit。如果指定Topic不存在订阅者，返回空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubscriptionsByTopicResponse> listSubscriptionsByTopic(
        ListSubscriptionsByTopicRequest &request
    );
    // 查询主题策略
    //
    // 查询主题的策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopicAttributesResponse> listTopicAttributes(
        ListTopicAttributesRequest &request
    );
    // 查询主题详情
    //
    // 查询Topic的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopicDetailsResponse> listTopicDetails(
        ListTopicDetailsRequest &request
    );
    // 查询主题列表
    //
    // 分页查询Topic列表，Topic列表按照Topic创建时间进行降序排列。分页查询可以指定offset以及limit。如果不存在Topic，则返回空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopicsResponse> listTopics(
        ListTopicsRequest &request
    );
    // 查询SMN API V2版本信息
    //
    // 查询SMN API V2版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVersionResponse> listVersion(
        ListVersionRequest &request
    );
    // 查询SMN支持的API版本号信息
    //
    // 查询SMN开放API支持的版本号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVersionsResponse> listVersions(
        ListVersionsRequest &request
    );
    // 发布探测消息
    //
    // 基于主题发送http/https探测消息，探测当前http/https 终端是否可用，SMN出口是否能够正常访问该终端。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishHttpDetectResponse> publishHttpDetect(
        PublishHttpDetectRequest &request
    );
    // 消息发布
    //
    // 将消息发送给Topic的所有订阅端点。当返回消息ID时，该消息已被保存并开始尝试将其推送给Topic的订阅者。三种消息发送方式
    // 
    // message
    // 
    // message_structure
    // 
    // message_template_name
    // 
    // 只需要设置其中一个，如果同时设置，生效的优先级为
    // message_structure &gt; message_template_name &gt; message。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishMessageResponse> publishMessage(
        PublishMessageRequest &request
    );
    // 获取http探测结果
    //
    // 根据http探测发送返回的task_id查询探测结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHttpDetectResultResponse> showHttpDetectResult(
        ShowHttpDetectResultRequest &request
    );
    // 更新云日志
    //
    // 更新指定Topic绑定的云日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogtankResponse> updateLogtank(
        UpdateLogtankRequest &request
    );
    // 更新消息模板
    //
    // 修改消息模板的内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMessageTemplateResponse> updateMessageTemplate(
        UpdateMessageTemplateRequest &request
    );
    // 更新订阅者
    //
    // 更新订阅者备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSubscriptionResponse> updateSubscription(
        UpdateSubscriptionRequest &request
    );
    // 更新主题
    //
    // 更新显示名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTopicResponse> updateTopic(
        UpdateTopicRequest &request
    );
    // 更新主题策略
    //
    // 更新主题的策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTopicAttributeResponse> updateTopicAttribute(
        UpdateTopicAttributeRequest &request
    );

    // 创建Application
    //
    // 创建平台应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateApplicationResponse> createApplication(
        CreateApplicationRequest &request
    );
    // 删除Application
    //
    // 删除平台应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationResponse> deleteApplication(
        DeleteApplicationRequest &request
    );
    // 查询Application属性
    //
    // 获取应用平台属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationAttributesResponse> listApplicationAttributes(
        ListApplicationAttributesRequest &request
    );
    // 查询Application
    //
    // 查询应用平台列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationsResponse> listApplications(
        ListApplicationsRequest &request
    );
    // App消息发布
    //
    // 将消息直发给endpoint设备。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishAppMessageResponse> publishAppMessage(
        PublishAppMessageRequest &request
    );
    // 更新Application
    //
    // 更新应用平台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationResponse> updateApplication(
        UpdateApplicationRequest &request
    );

    // 创建Application endpoint
    //
    // 创建应用平台的endpoint终端。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateApplicationEndpointResponse> createApplicationEndpoint(
        CreateApplicationEndpointRequest &request
    );
    // 删除Application endpoint
    //
    // 删除设备。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationEndpointResponse> deleteApplicationEndpoint(
        DeleteApplicationEndpointRequest &request
    );
    // 查询Application的Endpoint属性
    //
    // 获取endpoint的属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationEndpointAttributesResponse> listApplicationEndpointAttributes(
        ListApplicationEndpointAttributesRequest &request
    );
    // 查询Application的Endpoint列表
    //
    // 查询平台的endpoint列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationEndpointsResponse> listApplicationEndpoints(
        ListApplicationEndpointsRequest &request
    );
    // 更新Application endpoint
    //
    // 更新设备属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationEndpointResponse> updateApplicationEndpoint(
        UpdateApplicationEndpointRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_SMN_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Smn::V2::SmnClient>;

#endif // HUAWEICLOUD_SDK_SMN_V2_SmnClient_H_

