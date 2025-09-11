

#include "huaweicloud/functiongraph/v2/model/TriggerEventDataResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




TriggerEventDataResponseBody::TriggerEventDataResponseBody()
{
    name_ = "";
    nameIsSet_ = false;
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    schedule_ = "";
    scheduleIsSet_ = false;
    userEvent_ = "";
    userEventIsSet_ = false;
    triggerid_ = "";
    triggeridIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    reqMethod_ = "";
    reqMethodIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    matchMode_ = "";
    matchModeIsSet_ = false;
    envName_ = "";
    envNameIsSet_ = false;
    envId_ = "";
    envIdIsSet_ = false;
    apiId_ = "";
    apiIdIsSet_ = false;
    apiName_ = "";
    apiNameIsSet_ = false;
    auth_ = "";
    authIsSet_ = false;
    invokeUrl_ = "";
    invokeUrlIsSet_ = false;
    funcInfoIsSet_ = false;
    slDomain_ = "";
    slDomainIsSet_ = false;
    backendType_ = "";
    backendTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    romaAppId_ = "";
    romaAppIdIsSet_ = false;
    operationsIsSet_ = false;
    collectionName_ = "";
    collectionNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    instanceAddrsIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    batchSize_ = 0;
    batchSizeIsSet_ = false;
    queueId_ = "";
    queueIdIsSet_ = false;
    consumerGroupId_ = "";
    consumerGroupIdIsSet_ = false;
    pollingInterval_ = 0;
    pollingIntervalIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    sharditeratorType_ = "";
    sharditeratorTypeIsSet_ = false;
    pollingUnit_ = "";
    pollingUnitIsSet_ = false;
    maxFetchBytes_ = 0;
    maxFetchBytesIsSet_ = false;
    isSerial_ = "";
    isSerialIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logTopicId_ = "";
    logTopicIdIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
    suffix_ = "";
    suffixIsSet_ = false;
    eventsIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    topicIdsIsSet_ = false;
    kafkaUser_ = "";
    kafkaUserIsSet_ = false;
    kafkaPassword_ = "";
    kafkaPasswordIsSet_ = false;
    kafkaConnectAddress_ = "";
    kafkaConnectAddressIsSet_ = false;
    kafkaSslEnable_ = false;
    kafkaSslEnableIsSet_ = false;
    accessPassword_ = "";
    accessPasswordIsSet_ = false;
    accessUser_ = "";
    accessUserIsSet_ = false;
    connectAddress_ = "";
    connectAddressIsSet_ = false;
    exchangeName_ = "";
    exchangeNameIsSet_ = false;
    vhost_ = "";
    vhostIsSet_ = false;
    sslEnable_ = false;
    sslEnableIsSet_ = false;
    keyEncode_ = false;
    keyEncodeIsSet_ = false;
    agency_ = "";
    agencyIsSet_ = false;
    channelName_ = "";
    channelNameIsSet_ = false;
    channelId_ = "";
    channelIdIsSet_ = false;
    sourceName_ = "";
    sourceNameIsSet_ = false;
    createdTime_ = utility::datetime();
    createdTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    triggerName_ = "";
    triggerNameIsSet_ = false;
    eventTypesIsSet_ = false;
}

TriggerEventDataResponseBody::~TriggerEventDataResponseBody() = default;

void TriggerEventDataResponseBody::validate()
{
}

web::json::value TriggerEventDataResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(scheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("schedule_type")] = ModelBase::toJson(scheduleType_);
    }
    if(scheduleIsSet_) {
        val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(schedule_);
    }
    if(userEventIsSet_) {
        val[utility::conversions::to_string_t("user_event")] = ModelBase::toJson(userEvent_);
    }
    if(triggeridIsSet_) {
        val[utility::conversions::to_string_t("triggerid")] = ModelBase::toJson(triggerid_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(reqMethodIsSet_) {
        val[utility::conversions::to_string_t("req_method")] = ModelBase::toJson(reqMethod_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(matchModeIsSet_) {
        val[utility::conversions::to_string_t("match_mode")] = ModelBase::toJson(matchMode_);
    }
    if(envNameIsSet_) {
        val[utility::conversions::to_string_t("env_name")] = ModelBase::toJson(envName_);
    }
    if(envIdIsSet_) {
        val[utility::conversions::to_string_t("env_id")] = ModelBase::toJson(envId_);
    }
    if(apiIdIsSet_) {
        val[utility::conversions::to_string_t("api_id")] = ModelBase::toJson(apiId_);
    }
    if(apiNameIsSet_) {
        val[utility::conversions::to_string_t("api_name")] = ModelBase::toJson(apiName_);
    }
    if(authIsSet_) {
        val[utility::conversions::to_string_t("auth")] = ModelBase::toJson(auth_);
    }
    if(invokeUrlIsSet_) {
        val[utility::conversions::to_string_t("invoke_url")] = ModelBase::toJson(invokeUrl_);
    }
    if(funcInfoIsSet_) {
        val[utility::conversions::to_string_t("func_info")] = ModelBase::toJson(funcInfo_);
    }
    if(slDomainIsSet_) {
        val[utility::conversions::to_string_t("sl_domain")] = ModelBase::toJson(slDomain_);
    }
    if(backendTypeIsSet_) {
        val[utility::conversions::to_string_t("backend_type")] = ModelBase::toJson(backendType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(romaAppIdIsSet_) {
        val[utility::conversions::to_string_t("roma_app_id")] = ModelBase::toJson(romaAppId_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(collectionNameIsSet_) {
        val[utility::conversions::to_string_t("collection_name")] = ModelBase::toJson(collectionName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(dbPasswordIsSet_) {
        val[utility::conversions::to_string_t("db_password")] = ModelBase::toJson(dbPassword_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(instanceAddrsIsSet_) {
        val[utility::conversions::to_string_t("instance_addrs")] = ModelBase::toJson(instanceAddrs_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(batchSizeIsSet_) {
        val[utility::conversions::to_string_t("batch_size")] = ModelBase::toJson(batchSize_);
    }
    if(queueIdIsSet_) {
        val[utility::conversions::to_string_t("queue_id")] = ModelBase::toJson(queueId_);
    }
    if(consumerGroupIdIsSet_) {
        val[utility::conversions::to_string_t("consumer_group_id")] = ModelBase::toJson(consumerGroupId_);
    }
    if(pollingIntervalIsSet_) {
        val[utility::conversions::to_string_t("polling_interval")] = ModelBase::toJson(pollingInterval_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(sharditeratorTypeIsSet_) {
        val[utility::conversions::to_string_t("sharditerator_type")] = ModelBase::toJson(sharditeratorType_);
    }
    if(pollingUnitIsSet_) {
        val[utility::conversions::to_string_t("polling_unit")] = ModelBase::toJson(pollingUnit_);
    }
    if(maxFetchBytesIsSet_) {
        val[utility::conversions::to_string_t("max_fetch_bytes")] = ModelBase::toJson(maxFetchBytes_);
    }
    if(isSerialIsSet_) {
        val[utility::conversions::to_string_t("is_serial")] = ModelBase::toJson(isSerial_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logTopicIdIsSet_) {
        val[utility::conversions::to_string_t("log_topic_id")] = ModelBase::toJson(logTopicId_);
    }
    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(suffixIsSet_) {
        val[utility::conversions::to_string_t("suffix")] = ModelBase::toJson(suffix_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(topicIdsIsSet_) {
        val[utility::conversions::to_string_t("topic_ids")] = ModelBase::toJson(topicIds_);
    }
    if(kafkaUserIsSet_) {
        val[utility::conversions::to_string_t("kafka_user")] = ModelBase::toJson(kafkaUser_);
    }
    if(kafkaPasswordIsSet_) {
        val[utility::conversions::to_string_t("kafka_password")] = ModelBase::toJson(kafkaPassword_);
    }
    if(kafkaConnectAddressIsSet_) {
        val[utility::conversions::to_string_t("kafka_connect_address")] = ModelBase::toJson(kafkaConnectAddress_);
    }
    if(kafkaSslEnableIsSet_) {
        val[utility::conversions::to_string_t("kafka_ssl_enable")] = ModelBase::toJson(kafkaSslEnable_);
    }
    if(accessPasswordIsSet_) {
        val[utility::conversions::to_string_t("access_password")] = ModelBase::toJson(accessPassword_);
    }
    if(accessUserIsSet_) {
        val[utility::conversions::to_string_t("access_user")] = ModelBase::toJson(accessUser_);
    }
    if(connectAddressIsSet_) {
        val[utility::conversions::to_string_t("connect_address")] = ModelBase::toJson(connectAddress_);
    }
    if(exchangeNameIsSet_) {
        val[utility::conversions::to_string_t("exchange_name")] = ModelBase::toJson(exchangeName_);
    }
    if(vhostIsSet_) {
        val[utility::conversions::to_string_t("vhost")] = ModelBase::toJson(vhost_);
    }
    if(sslEnableIsSet_) {
        val[utility::conversions::to_string_t("ssl_enable")] = ModelBase::toJson(sslEnable_);
    }
    if(keyEncodeIsSet_) {
        val[utility::conversions::to_string_t("Key_encode")] = ModelBase::toJson(keyEncode_);
    }
    if(agencyIsSet_) {
        val[utility::conversions::to_string_t("agency")] = ModelBase::toJson(agency_);
    }
    if(channelNameIsSet_) {
        val[utility::conversions::to_string_t("channel_name")] = ModelBase::toJson(channelName_);
    }
    if(channelIdIsSet_) {
        val[utility::conversions::to_string_t("channel_id")] = ModelBase::toJson(channelId_);
    }
    if(sourceNameIsSet_) {
        val[utility::conversions::to_string_t("source_name")] = ModelBase::toJson(sourceName_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(triggerNameIsSet_) {
        val[utility::conversions::to_string_t("trigger_name")] = ModelBase::toJson(triggerName_);
    }
    if(eventTypesIsSet_) {
        val[utility::conversions::to_string_t("event_types")] = ModelBase::toJson(eventTypes_);
    }

    return val;
}
bool TriggerEventDataResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggerid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggerid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("req_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invoke_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invoke_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvokeUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_info"));
        if(!fieldValue.is_null())
        {
            ApigTriggerFuncInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sl_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sl_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackendType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roma_app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roma_app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRomaAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collection_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_addrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_addrs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceAddrs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consumer_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumer_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polling_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polling_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPollingInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sharditerator_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sharditerator_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharditeratorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polling_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polling_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPollingUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_fetch_bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_fetch_bytes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxFetchBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_serial"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_serial"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSerial(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suffix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuffix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_connect_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_connect_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaConnectAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaSslEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exchange_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exchange_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExchangeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vhost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vhost"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVhost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Key_encode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Key_encode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyEncode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channel_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTypes(refVal);
        }
    }
    return ok;
}


std::string TriggerEventDataResponseBody::getName() const
{
    return name_;
}

void TriggerEventDataResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TriggerEventDataResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void TriggerEventDataResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getScheduleType() const
{
    return scheduleType_;
}

void TriggerEventDataResponseBody::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool TriggerEventDataResponseBody::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void TriggerEventDataResponseBody::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getSchedule() const
{
    return schedule_;
}

void TriggerEventDataResponseBody::setSchedule(const std::string& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool TriggerEventDataResponseBody::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void TriggerEventDataResponseBody::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getUserEvent() const
{
    return userEvent_;
}

void TriggerEventDataResponseBody::setUserEvent(const std::string& value)
{
    userEvent_ = value;
    userEventIsSet_ = true;
}

bool TriggerEventDataResponseBody::userEventIsSet() const
{
    return userEventIsSet_;
}

void TriggerEventDataResponseBody::unsetuserEvent()
{
    userEventIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getTriggerid() const
{
    return triggerid_;
}

void TriggerEventDataResponseBody::setTriggerid(const std::string& value)
{
    triggerid_ = value;
    triggeridIsSet_ = true;
}

bool TriggerEventDataResponseBody::triggeridIsSet() const
{
    return triggeridIsSet_;
}

void TriggerEventDataResponseBody::unsettriggerid()
{
    triggeridIsSet_ = false;
}

int32_t TriggerEventDataResponseBody::getType() const
{
    return type_;
}

void TriggerEventDataResponseBody::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TriggerEventDataResponseBody::typeIsSet() const
{
    return typeIsSet_;
}

void TriggerEventDataResponseBody::unsettype()
{
    typeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getPath() const
{
    return path_;
}

void TriggerEventDataResponseBody::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool TriggerEventDataResponseBody::pathIsSet() const
{
    return pathIsSet_;
}

void TriggerEventDataResponseBody::unsetpath()
{
    pathIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getProtocol() const
{
    return protocol_;
}

void TriggerEventDataResponseBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool TriggerEventDataResponseBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void TriggerEventDataResponseBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getReqMethod() const
{
    return reqMethod_;
}

void TriggerEventDataResponseBody::setReqMethod(const std::string& value)
{
    reqMethod_ = value;
    reqMethodIsSet_ = true;
}

bool TriggerEventDataResponseBody::reqMethodIsSet() const
{
    return reqMethodIsSet_;
}

void TriggerEventDataResponseBody::unsetreqMethod()
{
    reqMethodIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getGroupId() const
{
    return groupId_;
}

void TriggerEventDataResponseBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TriggerEventDataResponseBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getGroupName() const
{
    return groupName_;
}

void TriggerEventDataResponseBody::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void TriggerEventDataResponseBody::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getMatchMode() const
{
    return matchMode_;
}

void TriggerEventDataResponseBody::setMatchMode(const std::string& value)
{
    matchMode_ = value;
    matchModeIsSet_ = true;
}

bool TriggerEventDataResponseBody::matchModeIsSet() const
{
    return matchModeIsSet_;
}

void TriggerEventDataResponseBody::unsetmatchMode()
{
    matchModeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getEnvName() const
{
    return envName_;
}

void TriggerEventDataResponseBody::setEnvName(const std::string& value)
{
    envName_ = value;
    envNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::envNameIsSet() const
{
    return envNameIsSet_;
}

void TriggerEventDataResponseBody::unsetenvName()
{
    envNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getEnvId() const
{
    return envId_;
}

void TriggerEventDataResponseBody::setEnvId(const std::string& value)
{
    envId_ = value;
    envIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::envIdIsSet() const
{
    return envIdIsSet_;
}

void TriggerEventDataResponseBody::unsetenvId()
{
    envIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getApiId() const
{
    return apiId_;
}

void TriggerEventDataResponseBody::setApiId(const std::string& value)
{
    apiId_ = value;
    apiIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::apiIdIsSet() const
{
    return apiIdIsSet_;
}

void TriggerEventDataResponseBody::unsetapiId()
{
    apiIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getApiName() const
{
    return apiName_;
}

void TriggerEventDataResponseBody::setApiName(const std::string& value)
{
    apiName_ = value;
    apiNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::apiNameIsSet() const
{
    return apiNameIsSet_;
}

void TriggerEventDataResponseBody::unsetapiName()
{
    apiNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getAuth() const
{
    return auth_;
}

void TriggerEventDataResponseBody::setAuth(const std::string& value)
{
    auth_ = value;
    authIsSet_ = true;
}

bool TriggerEventDataResponseBody::authIsSet() const
{
    return authIsSet_;
}

void TriggerEventDataResponseBody::unsetauth()
{
    authIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getInvokeUrl() const
{
    return invokeUrl_;
}

void TriggerEventDataResponseBody::setInvokeUrl(const std::string& value)
{
    invokeUrl_ = value;
    invokeUrlIsSet_ = true;
}

bool TriggerEventDataResponseBody::invokeUrlIsSet() const
{
    return invokeUrlIsSet_;
}

void TriggerEventDataResponseBody::unsetinvokeUrl()
{
    invokeUrlIsSet_ = false;
}

ApigTriggerFuncInfo TriggerEventDataResponseBody::getFuncInfo() const
{
    return funcInfo_;
}

void TriggerEventDataResponseBody::setFuncInfo(const ApigTriggerFuncInfo& value)
{
    funcInfo_ = value;
    funcInfoIsSet_ = true;
}

bool TriggerEventDataResponseBody::funcInfoIsSet() const
{
    return funcInfoIsSet_;
}

void TriggerEventDataResponseBody::unsetfuncInfo()
{
    funcInfoIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getSlDomain() const
{
    return slDomain_;
}

void TriggerEventDataResponseBody::setSlDomain(const std::string& value)
{
    slDomain_ = value;
    slDomainIsSet_ = true;
}

bool TriggerEventDataResponseBody::slDomainIsSet() const
{
    return slDomainIsSet_;
}

void TriggerEventDataResponseBody::unsetslDomain()
{
    slDomainIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getBackendType() const
{
    return backendType_;
}

void TriggerEventDataResponseBody::setBackendType(const std::string& value)
{
    backendType_ = value;
    backendTypeIsSet_ = true;
}

bool TriggerEventDataResponseBody::backendTypeIsSet() const
{
    return backendTypeIsSet_;
}

void TriggerEventDataResponseBody::unsetbackendType()
{
    backendTypeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getInstanceId() const
{
    return instanceId_;
}

void TriggerEventDataResponseBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TriggerEventDataResponseBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getRomaAppId() const
{
    return romaAppId_;
}

void TriggerEventDataResponseBody::setRomaAppId(const std::string& value)
{
    romaAppId_ = value;
    romaAppIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::romaAppIdIsSet() const
{
    return romaAppIdIsSet_;
}

void TriggerEventDataResponseBody::unsetromaAppId()
{
    romaAppIdIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataResponseBody::getOperations()
{
    return operations_;
}

void TriggerEventDataResponseBody::setOperations(const std::vector<std::string>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool TriggerEventDataResponseBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void TriggerEventDataResponseBody::unsetoperations()
{
    operationsIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getCollectionName() const
{
    return collectionName_;
}

void TriggerEventDataResponseBody::setCollectionName(const std::string& value)
{
    collectionName_ = value;
    collectionNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::collectionNameIsSet() const
{
    return collectionNameIsSet_;
}

void TriggerEventDataResponseBody::unsetcollectionName()
{
    collectionNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getDbName() const
{
    return dbName_;
}

void TriggerEventDataResponseBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TriggerEventDataResponseBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getDbPassword() const
{
    return dbPassword_;
}

void TriggerEventDataResponseBody::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool TriggerEventDataResponseBody::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void TriggerEventDataResponseBody::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getDbUser() const
{
    return dbUser_;
}

void TriggerEventDataResponseBody::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool TriggerEventDataResponseBody::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void TriggerEventDataResponseBody::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataResponseBody::getInstanceAddrs()
{
    return instanceAddrs_;
}

void TriggerEventDataResponseBody::setInstanceAddrs(const std::vector<std::string>& value)
{
    instanceAddrs_ = value;
    instanceAddrsIsSet_ = true;
}

bool TriggerEventDataResponseBody::instanceAddrsIsSet() const
{
    return instanceAddrsIsSet_;
}

void TriggerEventDataResponseBody::unsetinstanceAddrs()
{
    instanceAddrsIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getMode() const
{
    return mode_;
}

void TriggerEventDataResponseBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool TriggerEventDataResponseBody::modeIsSet() const
{
    return modeIsSet_;
}

void TriggerEventDataResponseBody::unsetmode()
{
    modeIsSet_ = false;
}

int32_t TriggerEventDataResponseBody::getBatchSize() const
{
    return batchSize_;
}

void TriggerEventDataResponseBody::setBatchSize(int32_t value)
{
    batchSize_ = value;
    batchSizeIsSet_ = true;
}

bool TriggerEventDataResponseBody::batchSizeIsSet() const
{
    return batchSizeIsSet_;
}

void TriggerEventDataResponseBody::unsetbatchSize()
{
    batchSizeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getQueueId() const
{
    return queueId_;
}

void TriggerEventDataResponseBody::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void TriggerEventDataResponseBody::unsetqueueId()
{
    queueIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getConsumerGroupId() const
{
    return consumerGroupId_;
}

void TriggerEventDataResponseBody::setConsumerGroupId(const std::string& value)
{
    consumerGroupId_ = value;
    consumerGroupIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::consumerGroupIdIsSet() const
{
    return consumerGroupIdIsSet_;
}

void TriggerEventDataResponseBody::unsetconsumerGroupId()
{
    consumerGroupIdIsSet_ = false;
}

int32_t TriggerEventDataResponseBody::getPollingInterval() const
{
    return pollingInterval_;
}

void TriggerEventDataResponseBody::setPollingInterval(int32_t value)
{
    pollingInterval_ = value;
    pollingIntervalIsSet_ = true;
}

bool TriggerEventDataResponseBody::pollingIntervalIsSet() const
{
    return pollingIntervalIsSet_;
}

void TriggerEventDataResponseBody::unsetpollingInterval()
{
    pollingIntervalIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getStreamName() const
{
    return streamName_;
}

void TriggerEventDataResponseBody::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void TriggerEventDataResponseBody::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getSharditeratorType() const
{
    return sharditeratorType_;
}

void TriggerEventDataResponseBody::setSharditeratorType(const std::string& value)
{
    sharditeratorType_ = value;
    sharditeratorTypeIsSet_ = true;
}

bool TriggerEventDataResponseBody::sharditeratorTypeIsSet() const
{
    return sharditeratorTypeIsSet_;
}

void TriggerEventDataResponseBody::unsetsharditeratorType()
{
    sharditeratorTypeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getPollingUnit() const
{
    return pollingUnit_;
}

void TriggerEventDataResponseBody::setPollingUnit(const std::string& value)
{
    pollingUnit_ = value;
    pollingUnitIsSet_ = true;
}

bool TriggerEventDataResponseBody::pollingUnitIsSet() const
{
    return pollingUnitIsSet_;
}

void TriggerEventDataResponseBody::unsetpollingUnit()
{
    pollingUnitIsSet_ = false;
}

int32_t TriggerEventDataResponseBody::getMaxFetchBytes() const
{
    return maxFetchBytes_;
}

void TriggerEventDataResponseBody::setMaxFetchBytes(int32_t value)
{
    maxFetchBytes_ = value;
    maxFetchBytesIsSet_ = true;
}

bool TriggerEventDataResponseBody::maxFetchBytesIsSet() const
{
    return maxFetchBytesIsSet_;
}

void TriggerEventDataResponseBody::unsetmaxFetchBytes()
{
    maxFetchBytesIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getIsSerial() const
{
    return isSerial_;
}

void TriggerEventDataResponseBody::setIsSerial(const std::string& value)
{
    isSerial_ = value;
    isSerialIsSet_ = true;
}

bool TriggerEventDataResponseBody::isSerialIsSet() const
{
    return isSerialIsSet_;
}

void TriggerEventDataResponseBody::unsetisSerial()
{
    isSerialIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getLogGroupId() const
{
    return logGroupId_;
}

void TriggerEventDataResponseBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void TriggerEventDataResponseBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getLogTopicId() const
{
    return logTopicId_;
}

void TriggerEventDataResponseBody::setLogTopicId(const std::string& value)
{
    logTopicId_ = value;
    logTopicIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::logTopicIdIsSet() const
{
    return logTopicIdIsSet_;
}

void TriggerEventDataResponseBody::unsetlogTopicId()
{
    logTopicIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getBucket() const
{
    return bucket_;
}

void TriggerEventDataResponseBody::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool TriggerEventDataResponseBody::bucketIsSet() const
{
    return bucketIsSet_;
}

void TriggerEventDataResponseBody::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getPrefix() const
{
    return prefix_;
}

void TriggerEventDataResponseBody::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool TriggerEventDataResponseBody::prefixIsSet() const
{
    return prefixIsSet_;
}

void TriggerEventDataResponseBody::unsetprefix()
{
    prefixIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getSuffix() const
{
    return suffix_;
}

void TriggerEventDataResponseBody::setSuffix(const std::string& value)
{
    suffix_ = value;
    suffixIsSet_ = true;
}

bool TriggerEventDataResponseBody::suffixIsSet() const
{
    return suffixIsSet_;
}

void TriggerEventDataResponseBody::unsetsuffix()
{
    suffixIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataResponseBody::getEvents()
{
    return events_;
}

void TriggerEventDataResponseBody::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool TriggerEventDataResponseBody::eventsIsSet() const
{
    return eventsIsSet_;
}

void TriggerEventDataResponseBody::unsetevents()
{
    eventsIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getTopicUrn() const
{
    return topicUrn_;
}

void TriggerEventDataResponseBody::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool TriggerEventDataResponseBody::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void TriggerEventDataResponseBody::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataResponseBody::getTopicIds()
{
    return topicIds_;
}

void TriggerEventDataResponseBody::setTopicIds(const std::vector<std::string>& value)
{
    topicIds_ = value;
    topicIdsIsSet_ = true;
}

bool TriggerEventDataResponseBody::topicIdsIsSet() const
{
    return topicIdsIsSet_;
}

void TriggerEventDataResponseBody::unsettopicIds()
{
    topicIdsIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getKafkaUser() const
{
    return kafkaUser_;
}

void TriggerEventDataResponseBody::setKafkaUser(const std::string& value)
{
    kafkaUser_ = value;
    kafkaUserIsSet_ = true;
}

bool TriggerEventDataResponseBody::kafkaUserIsSet() const
{
    return kafkaUserIsSet_;
}

void TriggerEventDataResponseBody::unsetkafkaUser()
{
    kafkaUserIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getKafkaPassword() const
{
    return kafkaPassword_;
}

void TriggerEventDataResponseBody::setKafkaPassword(const std::string& value)
{
    kafkaPassword_ = value;
    kafkaPasswordIsSet_ = true;
}

bool TriggerEventDataResponseBody::kafkaPasswordIsSet() const
{
    return kafkaPasswordIsSet_;
}

void TriggerEventDataResponseBody::unsetkafkaPassword()
{
    kafkaPasswordIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getKafkaConnectAddress() const
{
    return kafkaConnectAddress_;
}

void TriggerEventDataResponseBody::setKafkaConnectAddress(const std::string& value)
{
    kafkaConnectAddress_ = value;
    kafkaConnectAddressIsSet_ = true;
}

bool TriggerEventDataResponseBody::kafkaConnectAddressIsSet() const
{
    return kafkaConnectAddressIsSet_;
}

void TriggerEventDataResponseBody::unsetkafkaConnectAddress()
{
    kafkaConnectAddressIsSet_ = false;
}

bool TriggerEventDataResponseBody::isKafkaSslEnable() const
{
    return kafkaSslEnable_;
}

void TriggerEventDataResponseBody::setKafkaSslEnable(bool value)
{
    kafkaSslEnable_ = value;
    kafkaSslEnableIsSet_ = true;
}

bool TriggerEventDataResponseBody::kafkaSslEnableIsSet() const
{
    return kafkaSslEnableIsSet_;
}

void TriggerEventDataResponseBody::unsetkafkaSslEnable()
{
    kafkaSslEnableIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getAccessPassword() const
{
    return accessPassword_;
}

void TriggerEventDataResponseBody::setAccessPassword(const std::string& value)
{
    accessPassword_ = value;
    accessPasswordIsSet_ = true;
}

bool TriggerEventDataResponseBody::accessPasswordIsSet() const
{
    return accessPasswordIsSet_;
}

void TriggerEventDataResponseBody::unsetaccessPassword()
{
    accessPasswordIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getAccessUser() const
{
    return accessUser_;
}

void TriggerEventDataResponseBody::setAccessUser(const std::string& value)
{
    accessUser_ = value;
    accessUserIsSet_ = true;
}

bool TriggerEventDataResponseBody::accessUserIsSet() const
{
    return accessUserIsSet_;
}

void TriggerEventDataResponseBody::unsetaccessUser()
{
    accessUserIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getConnectAddress() const
{
    return connectAddress_;
}

void TriggerEventDataResponseBody::setConnectAddress(const std::string& value)
{
    connectAddress_ = value;
    connectAddressIsSet_ = true;
}

bool TriggerEventDataResponseBody::connectAddressIsSet() const
{
    return connectAddressIsSet_;
}

void TriggerEventDataResponseBody::unsetconnectAddress()
{
    connectAddressIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getExchangeName() const
{
    return exchangeName_;
}

void TriggerEventDataResponseBody::setExchangeName(const std::string& value)
{
    exchangeName_ = value;
    exchangeNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::exchangeNameIsSet() const
{
    return exchangeNameIsSet_;
}

void TriggerEventDataResponseBody::unsetexchangeName()
{
    exchangeNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getVhost() const
{
    return vhost_;
}

void TriggerEventDataResponseBody::setVhost(const std::string& value)
{
    vhost_ = value;
    vhostIsSet_ = true;
}

bool TriggerEventDataResponseBody::vhostIsSet() const
{
    return vhostIsSet_;
}

void TriggerEventDataResponseBody::unsetvhost()
{
    vhostIsSet_ = false;
}

bool TriggerEventDataResponseBody::isSslEnable() const
{
    return sslEnable_;
}

void TriggerEventDataResponseBody::setSslEnable(bool value)
{
    sslEnable_ = value;
    sslEnableIsSet_ = true;
}

bool TriggerEventDataResponseBody::sslEnableIsSet() const
{
    return sslEnableIsSet_;
}

void TriggerEventDataResponseBody::unsetsslEnable()
{
    sslEnableIsSet_ = false;
}

bool TriggerEventDataResponseBody::isKeyEncode() const
{
    return keyEncode_;
}

void TriggerEventDataResponseBody::setKeyEncode(bool value)
{
    keyEncode_ = value;
    keyEncodeIsSet_ = true;
}

bool TriggerEventDataResponseBody::keyEncodeIsSet() const
{
    return keyEncodeIsSet_;
}

void TriggerEventDataResponseBody::unsetkeyEncode()
{
    keyEncodeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getAgency() const
{
    return agency_;
}

void TriggerEventDataResponseBody::setAgency(const std::string& value)
{
    agency_ = value;
    agencyIsSet_ = true;
}

bool TriggerEventDataResponseBody::agencyIsSet() const
{
    return agencyIsSet_;
}

void TriggerEventDataResponseBody::unsetagency()
{
    agencyIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getChannelName() const
{
    return channelName_;
}

void TriggerEventDataResponseBody::setChannelName(const std::string& value)
{
    channelName_ = value;
    channelNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::channelNameIsSet() const
{
    return channelNameIsSet_;
}

void TriggerEventDataResponseBody::unsetchannelName()
{
    channelNameIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getChannelId() const
{
    return channelId_;
}

void TriggerEventDataResponseBody::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool TriggerEventDataResponseBody::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void TriggerEventDataResponseBody::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getSourceName() const
{
    return sourceName_;
}

void TriggerEventDataResponseBody::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void TriggerEventDataResponseBody::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

utility::datetime TriggerEventDataResponseBody::getCreatedTime() const
{
    return createdTime_;
}

void TriggerEventDataResponseBody::setCreatedTime(const utility::datetime& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool TriggerEventDataResponseBody::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void TriggerEventDataResponseBody::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getStatus() const
{
    return status_;
}

void TriggerEventDataResponseBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TriggerEventDataResponseBody::statusIsSet() const
{
    return statusIsSet_;
}

void TriggerEventDataResponseBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TriggerEventDataResponseBody::getTriggerName() const
{
    return triggerName_;
}

void TriggerEventDataResponseBody::setTriggerName(const std::string& value)
{
    triggerName_ = value;
    triggerNameIsSet_ = true;
}

bool TriggerEventDataResponseBody::triggerNameIsSet() const
{
    return triggerNameIsSet_;
}

void TriggerEventDataResponseBody::unsettriggerName()
{
    triggerNameIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataResponseBody::getEventTypes()
{
    return eventTypes_;
}

void TriggerEventDataResponseBody::setEventTypes(const std::vector<std::string>& value)
{
    eventTypes_ = value;
    eventTypesIsSet_ = true;
}

bool TriggerEventDataResponseBody::eventTypesIsSet() const
{
    return eventTypesIsSet_;
}

void TriggerEventDataResponseBody::unseteventTypes()
{
    eventTypesIsSet_ = false;
}

}
}
}
}
}


