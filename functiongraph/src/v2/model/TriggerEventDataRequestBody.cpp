

#include "huaweicloud/functiongraph/v2/model/TriggerEventDataRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




TriggerEventDataRequestBody::TriggerEventDataRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    schedule_ = "";
    scheduleIsSet_ = false;
    userEvent_ = "";
    userEventIsSet_ = false;
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
    auth_ = "";
    authIsSet_ = false;
    funcInfoIsSet_ = false;
    slDomain_ = "";
    slDomainIsSet_ = false;
    backendType_ = "";
    backendTypeIsSet_ = false;
    operationsIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    collectionName_ = "";
    collectionNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
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

TriggerEventDataRequestBody::~TriggerEventDataRequestBody() = default;

void TriggerEventDataRequestBody::validate()
{
}

web::json::value TriggerEventDataRequestBody::toJson() const
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
    if(authIsSet_) {
        val[utility::conversions::to_string_t("auth")] = ModelBase::toJson(auth_);
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
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
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
bool TriggerEventDataRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
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


std::string TriggerEventDataRequestBody::getName() const
{
    return name_;
}

void TriggerEventDataRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TriggerEventDataRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void TriggerEventDataRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getScheduleType() const
{
    return scheduleType_;
}

void TriggerEventDataRequestBody::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool TriggerEventDataRequestBody::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void TriggerEventDataRequestBody::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getSchedule() const
{
    return schedule_;
}

void TriggerEventDataRequestBody::setSchedule(const std::string& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool TriggerEventDataRequestBody::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void TriggerEventDataRequestBody::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getUserEvent() const
{
    return userEvent_;
}

void TriggerEventDataRequestBody::setUserEvent(const std::string& value)
{
    userEvent_ = value;
    userEventIsSet_ = true;
}

bool TriggerEventDataRequestBody::userEventIsSet() const
{
    return userEventIsSet_;
}

void TriggerEventDataRequestBody::unsetuserEvent()
{
    userEventIsSet_ = false;
}

int32_t TriggerEventDataRequestBody::getType() const
{
    return type_;
}

void TriggerEventDataRequestBody::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TriggerEventDataRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void TriggerEventDataRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getPath() const
{
    return path_;
}

void TriggerEventDataRequestBody::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool TriggerEventDataRequestBody::pathIsSet() const
{
    return pathIsSet_;
}

void TriggerEventDataRequestBody::unsetpath()
{
    pathIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getProtocol() const
{
    return protocol_;
}

void TriggerEventDataRequestBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool TriggerEventDataRequestBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void TriggerEventDataRequestBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getReqMethod() const
{
    return reqMethod_;
}

void TriggerEventDataRequestBody::setReqMethod(const std::string& value)
{
    reqMethod_ = value;
    reqMethodIsSet_ = true;
}

bool TriggerEventDataRequestBody::reqMethodIsSet() const
{
    return reqMethodIsSet_;
}

void TriggerEventDataRequestBody::unsetreqMethod()
{
    reqMethodIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getGroupId() const
{
    return groupId_;
}

void TriggerEventDataRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TriggerEventDataRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getGroupName() const
{
    return groupName_;
}

void TriggerEventDataRequestBody::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void TriggerEventDataRequestBody::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getMatchMode() const
{
    return matchMode_;
}

void TriggerEventDataRequestBody::setMatchMode(const std::string& value)
{
    matchMode_ = value;
    matchModeIsSet_ = true;
}

bool TriggerEventDataRequestBody::matchModeIsSet() const
{
    return matchModeIsSet_;
}

void TriggerEventDataRequestBody::unsetmatchMode()
{
    matchModeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getEnvName() const
{
    return envName_;
}

void TriggerEventDataRequestBody::setEnvName(const std::string& value)
{
    envName_ = value;
    envNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::envNameIsSet() const
{
    return envNameIsSet_;
}

void TriggerEventDataRequestBody::unsetenvName()
{
    envNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getEnvId() const
{
    return envId_;
}

void TriggerEventDataRequestBody::setEnvId(const std::string& value)
{
    envId_ = value;
    envIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::envIdIsSet() const
{
    return envIdIsSet_;
}

void TriggerEventDataRequestBody::unsetenvId()
{
    envIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getAuth() const
{
    return auth_;
}

void TriggerEventDataRequestBody::setAuth(const std::string& value)
{
    auth_ = value;
    authIsSet_ = true;
}

bool TriggerEventDataRequestBody::authIsSet() const
{
    return authIsSet_;
}

void TriggerEventDataRequestBody::unsetauth()
{
    authIsSet_ = false;
}

ApigTriggerFuncInfo TriggerEventDataRequestBody::getFuncInfo() const
{
    return funcInfo_;
}

void TriggerEventDataRequestBody::setFuncInfo(const ApigTriggerFuncInfo& value)
{
    funcInfo_ = value;
    funcInfoIsSet_ = true;
}

bool TriggerEventDataRequestBody::funcInfoIsSet() const
{
    return funcInfoIsSet_;
}

void TriggerEventDataRequestBody::unsetfuncInfo()
{
    funcInfoIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getSlDomain() const
{
    return slDomain_;
}

void TriggerEventDataRequestBody::setSlDomain(const std::string& value)
{
    slDomain_ = value;
    slDomainIsSet_ = true;
}

bool TriggerEventDataRequestBody::slDomainIsSet() const
{
    return slDomainIsSet_;
}

void TriggerEventDataRequestBody::unsetslDomain()
{
    slDomainIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getBackendType() const
{
    return backendType_;
}

void TriggerEventDataRequestBody::setBackendType(const std::string& value)
{
    backendType_ = value;
    backendTypeIsSet_ = true;
}

bool TriggerEventDataRequestBody::backendTypeIsSet() const
{
    return backendTypeIsSet_;
}

void TriggerEventDataRequestBody::unsetbackendType()
{
    backendTypeIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataRequestBody::getOperations()
{
    return operations_;
}

void TriggerEventDataRequestBody::setOperations(const std::vector<std::string>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool TriggerEventDataRequestBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void TriggerEventDataRequestBody::unsetoperations()
{
    operationsIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getInstanceId() const
{
    return instanceId_;
}

void TriggerEventDataRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TriggerEventDataRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getCollectionName() const
{
    return collectionName_;
}

void TriggerEventDataRequestBody::setCollectionName(const std::string& value)
{
    collectionName_ = value;
    collectionNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::collectionNameIsSet() const
{
    return collectionNameIsSet_;
}

void TriggerEventDataRequestBody::unsetcollectionName()
{
    collectionNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getDbName() const
{
    return dbName_;
}

void TriggerEventDataRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TriggerEventDataRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getDbPassword() const
{
    return dbPassword_;
}

void TriggerEventDataRequestBody::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool TriggerEventDataRequestBody::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void TriggerEventDataRequestBody::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

int32_t TriggerEventDataRequestBody::getBatchSize() const
{
    return batchSize_;
}

void TriggerEventDataRequestBody::setBatchSize(int32_t value)
{
    batchSize_ = value;
    batchSizeIsSet_ = true;
}

bool TriggerEventDataRequestBody::batchSizeIsSet() const
{
    return batchSizeIsSet_;
}

void TriggerEventDataRequestBody::unsetbatchSize()
{
    batchSizeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getQueueId() const
{
    return queueId_;
}

void TriggerEventDataRequestBody::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void TriggerEventDataRequestBody::unsetqueueId()
{
    queueIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getConsumerGroupId() const
{
    return consumerGroupId_;
}

void TriggerEventDataRequestBody::setConsumerGroupId(const std::string& value)
{
    consumerGroupId_ = value;
    consumerGroupIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::consumerGroupIdIsSet() const
{
    return consumerGroupIdIsSet_;
}

void TriggerEventDataRequestBody::unsetconsumerGroupId()
{
    consumerGroupIdIsSet_ = false;
}

int32_t TriggerEventDataRequestBody::getPollingInterval() const
{
    return pollingInterval_;
}

void TriggerEventDataRequestBody::setPollingInterval(int32_t value)
{
    pollingInterval_ = value;
    pollingIntervalIsSet_ = true;
}

bool TriggerEventDataRequestBody::pollingIntervalIsSet() const
{
    return pollingIntervalIsSet_;
}

void TriggerEventDataRequestBody::unsetpollingInterval()
{
    pollingIntervalIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getStreamName() const
{
    return streamName_;
}

void TriggerEventDataRequestBody::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void TriggerEventDataRequestBody::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getSharditeratorType() const
{
    return sharditeratorType_;
}

void TriggerEventDataRequestBody::setSharditeratorType(const std::string& value)
{
    sharditeratorType_ = value;
    sharditeratorTypeIsSet_ = true;
}

bool TriggerEventDataRequestBody::sharditeratorTypeIsSet() const
{
    return sharditeratorTypeIsSet_;
}

void TriggerEventDataRequestBody::unsetsharditeratorType()
{
    sharditeratorTypeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getPollingUnit() const
{
    return pollingUnit_;
}

void TriggerEventDataRequestBody::setPollingUnit(const std::string& value)
{
    pollingUnit_ = value;
    pollingUnitIsSet_ = true;
}

bool TriggerEventDataRequestBody::pollingUnitIsSet() const
{
    return pollingUnitIsSet_;
}

void TriggerEventDataRequestBody::unsetpollingUnit()
{
    pollingUnitIsSet_ = false;
}

int32_t TriggerEventDataRequestBody::getMaxFetchBytes() const
{
    return maxFetchBytes_;
}

void TriggerEventDataRequestBody::setMaxFetchBytes(int32_t value)
{
    maxFetchBytes_ = value;
    maxFetchBytesIsSet_ = true;
}

bool TriggerEventDataRequestBody::maxFetchBytesIsSet() const
{
    return maxFetchBytesIsSet_;
}

void TriggerEventDataRequestBody::unsetmaxFetchBytes()
{
    maxFetchBytesIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getIsSerial() const
{
    return isSerial_;
}

void TriggerEventDataRequestBody::setIsSerial(const std::string& value)
{
    isSerial_ = value;
    isSerialIsSet_ = true;
}

bool TriggerEventDataRequestBody::isSerialIsSet() const
{
    return isSerialIsSet_;
}

void TriggerEventDataRequestBody::unsetisSerial()
{
    isSerialIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void TriggerEventDataRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void TriggerEventDataRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getLogTopicId() const
{
    return logTopicId_;
}

void TriggerEventDataRequestBody::setLogTopicId(const std::string& value)
{
    logTopicId_ = value;
    logTopicIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::logTopicIdIsSet() const
{
    return logTopicIdIsSet_;
}

void TriggerEventDataRequestBody::unsetlogTopicId()
{
    logTopicIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getBucket() const
{
    return bucket_;
}

void TriggerEventDataRequestBody::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool TriggerEventDataRequestBody::bucketIsSet() const
{
    return bucketIsSet_;
}

void TriggerEventDataRequestBody::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getPrefix() const
{
    return prefix_;
}

void TriggerEventDataRequestBody::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool TriggerEventDataRequestBody::prefixIsSet() const
{
    return prefixIsSet_;
}

void TriggerEventDataRequestBody::unsetprefix()
{
    prefixIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getSuffix() const
{
    return suffix_;
}

void TriggerEventDataRequestBody::setSuffix(const std::string& value)
{
    suffix_ = value;
    suffixIsSet_ = true;
}

bool TriggerEventDataRequestBody::suffixIsSet() const
{
    return suffixIsSet_;
}

void TriggerEventDataRequestBody::unsetsuffix()
{
    suffixIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataRequestBody::getEvents()
{
    return events_;
}

void TriggerEventDataRequestBody::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool TriggerEventDataRequestBody::eventsIsSet() const
{
    return eventsIsSet_;
}

void TriggerEventDataRequestBody::unsetevents()
{
    eventsIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getTopicUrn() const
{
    return topicUrn_;
}

void TriggerEventDataRequestBody::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool TriggerEventDataRequestBody::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void TriggerEventDataRequestBody::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataRequestBody::getTopicIds()
{
    return topicIds_;
}

void TriggerEventDataRequestBody::setTopicIds(const std::vector<std::string>& value)
{
    topicIds_ = value;
    topicIdsIsSet_ = true;
}

bool TriggerEventDataRequestBody::topicIdsIsSet() const
{
    return topicIdsIsSet_;
}

void TriggerEventDataRequestBody::unsettopicIds()
{
    topicIdsIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getKafkaUser() const
{
    return kafkaUser_;
}

void TriggerEventDataRequestBody::setKafkaUser(const std::string& value)
{
    kafkaUser_ = value;
    kafkaUserIsSet_ = true;
}

bool TriggerEventDataRequestBody::kafkaUserIsSet() const
{
    return kafkaUserIsSet_;
}

void TriggerEventDataRequestBody::unsetkafkaUser()
{
    kafkaUserIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getKafkaPassword() const
{
    return kafkaPassword_;
}

void TriggerEventDataRequestBody::setKafkaPassword(const std::string& value)
{
    kafkaPassword_ = value;
    kafkaPasswordIsSet_ = true;
}

bool TriggerEventDataRequestBody::kafkaPasswordIsSet() const
{
    return kafkaPasswordIsSet_;
}

void TriggerEventDataRequestBody::unsetkafkaPassword()
{
    kafkaPasswordIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getKafkaConnectAddress() const
{
    return kafkaConnectAddress_;
}

void TriggerEventDataRequestBody::setKafkaConnectAddress(const std::string& value)
{
    kafkaConnectAddress_ = value;
    kafkaConnectAddressIsSet_ = true;
}

bool TriggerEventDataRequestBody::kafkaConnectAddressIsSet() const
{
    return kafkaConnectAddressIsSet_;
}

void TriggerEventDataRequestBody::unsetkafkaConnectAddress()
{
    kafkaConnectAddressIsSet_ = false;
}

bool TriggerEventDataRequestBody::isKafkaSslEnable() const
{
    return kafkaSslEnable_;
}

void TriggerEventDataRequestBody::setKafkaSslEnable(bool value)
{
    kafkaSslEnable_ = value;
    kafkaSslEnableIsSet_ = true;
}

bool TriggerEventDataRequestBody::kafkaSslEnableIsSet() const
{
    return kafkaSslEnableIsSet_;
}

void TriggerEventDataRequestBody::unsetkafkaSslEnable()
{
    kafkaSslEnableIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getAccessPassword() const
{
    return accessPassword_;
}

void TriggerEventDataRequestBody::setAccessPassword(const std::string& value)
{
    accessPassword_ = value;
    accessPasswordIsSet_ = true;
}

bool TriggerEventDataRequestBody::accessPasswordIsSet() const
{
    return accessPasswordIsSet_;
}

void TriggerEventDataRequestBody::unsetaccessPassword()
{
    accessPasswordIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getAccessUser() const
{
    return accessUser_;
}

void TriggerEventDataRequestBody::setAccessUser(const std::string& value)
{
    accessUser_ = value;
    accessUserIsSet_ = true;
}

bool TriggerEventDataRequestBody::accessUserIsSet() const
{
    return accessUserIsSet_;
}

void TriggerEventDataRequestBody::unsetaccessUser()
{
    accessUserIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getConnectAddress() const
{
    return connectAddress_;
}

void TriggerEventDataRequestBody::setConnectAddress(const std::string& value)
{
    connectAddress_ = value;
    connectAddressIsSet_ = true;
}

bool TriggerEventDataRequestBody::connectAddressIsSet() const
{
    return connectAddressIsSet_;
}

void TriggerEventDataRequestBody::unsetconnectAddress()
{
    connectAddressIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getExchangeName() const
{
    return exchangeName_;
}

void TriggerEventDataRequestBody::setExchangeName(const std::string& value)
{
    exchangeName_ = value;
    exchangeNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::exchangeNameIsSet() const
{
    return exchangeNameIsSet_;
}

void TriggerEventDataRequestBody::unsetexchangeName()
{
    exchangeNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getVhost() const
{
    return vhost_;
}

void TriggerEventDataRequestBody::setVhost(const std::string& value)
{
    vhost_ = value;
    vhostIsSet_ = true;
}

bool TriggerEventDataRequestBody::vhostIsSet() const
{
    return vhostIsSet_;
}

void TriggerEventDataRequestBody::unsetvhost()
{
    vhostIsSet_ = false;
}

bool TriggerEventDataRequestBody::isSslEnable() const
{
    return sslEnable_;
}

void TriggerEventDataRequestBody::setSslEnable(bool value)
{
    sslEnable_ = value;
    sslEnableIsSet_ = true;
}

bool TriggerEventDataRequestBody::sslEnableIsSet() const
{
    return sslEnableIsSet_;
}

void TriggerEventDataRequestBody::unsetsslEnable()
{
    sslEnableIsSet_ = false;
}

bool TriggerEventDataRequestBody::isKeyEncode() const
{
    return keyEncode_;
}

void TriggerEventDataRequestBody::setKeyEncode(bool value)
{
    keyEncode_ = value;
    keyEncodeIsSet_ = true;
}

bool TriggerEventDataRequestBody::keyEncodeIsSet() const
{
    return keyEncodeIsSet_;
}

void TriggerEventDataRequestBody::unsetkeyEncode()
{
    keyEncodeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getAgency() const
{
    return agency_;
}

void TriggerEventDataRequestBody::setAgency(const std::string& value)
{
    agency_ = value;
    agencyIsSet_ = true;
}

bool TriggerEventDataRequestBody::agencyIsSet() const
{
    return agencyIsSet_;
}

void TriggerEventDataRequestBody::unsetagency()
{
    agencyIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getChannelName() const
{
    return channelName_;
}

void TriggerEventDataRequestBody::setChannelName(const std::string& value)
{
    channelName_ = value;
    channelNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::channelNameIsSet() const
{
    return channelNameIsSet_;
}

void TriggerEventDataRequestBody::unsetchannelName()
{
    channelNameIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getChannelId() const
{
    return channelId_;
}

void TriggerEventDataRequestBody::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool TriggerEventDataRequestBody::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void TriggerEventDataRequestBody::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getSourceName() const
{
    return sourceName_;
}

void TriggerEventDataRequestBody::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void TriggerEventDataRequestBody::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

utility::datetime TriggerEventDataRequestBody::getCreatedTime() const
{
    return createdTime_;
}

void TriggerEventDataRequestBody::setCreatedTime(const utility::datetime& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool TriggerEventDataRequestBody::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void TriggerEventDataRequestBody::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getStatus() const
{
    return status_;
}

void TriggerEventDataRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TriggerEventDataRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void TriggerEventDataRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TriggerEventDataRequestBody::getTriggerName() const
{
    return triggerName_;
}

void TriggerEventDataRequestBody::setTriggerName(const std::string& value)
{
    triggerName_ = value;
    triggerNameIsSet_ = true;
}

bool TriggerEventDataRequestBody::triggerNameIsSet() const
{
    return triggerNameIsSet_;
}

void TriggerEventDataRequestBody::unsettriggerName()
{
    triggerNameIsSet_ = false;
}

std::vector<std::string>& TriggerEventDataRequestBody::getEventTypes()
{
    return eventTypes_;
}

void TriggerEventDataRequestBody::setEventTypes(const std::vector<std::string>& value)
{
    eventTypes_ = value;
    eventTypesIsSet_ = true;
}

bool TriggerEventDataRequestBody::eventTypesIsSet() const
{
    return eventTypesIsSet_;
}

void TriggerEventDataRequestBody::unseteventTypes()
{
    eventTypesIsSet_ = false;
}

}
}
}
}
}


