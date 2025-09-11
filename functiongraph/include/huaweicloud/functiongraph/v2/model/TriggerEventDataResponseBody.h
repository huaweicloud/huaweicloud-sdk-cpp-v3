
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TriggerEventDataResponseBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TriggerEventDataResponseBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/ApigTriggerFuncInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 触发器源事件。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  TriggerEventDataResponseBody
    : public ModelBase
{
public:
    TriggerEventDataResponseBody();
    virtual ~TriggerEventDataResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TriggerEventDataResponseBody members

    /// <summary>
    /// 触发器名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 定时触发类型（TIMER触发器参数）。 - Rate：指定固定频率（分钟、小时、天数）定期调用函数，单位为分钟时，输入值不能超过60；单位为小时时，输入值不能超过24；单位为天时，输入值不能超过30。 - Cron：指定Cron表达式定期调用函数
    /// </summary>

    std::string getScheduleType() const;
    bool scheduleTypeIsSet() const;
    void unsetscheduleType();
    void setScheduleType(const std::string& value);

    /// <summary>
    /// 定时触发规则（TIMER触发器参数）。 - 触发类型为Rate时对应定时规则 - 触发类型为Cron时对应Cron表达式
    /// </summary>

    std::string getSchedule() const;
    bool scheduleIsSet() const;
    void unsetschedule();
    void setSchedule(const std::string& value);

    /// <summary>
    /// 附加信息（TIMER触发器参数）。 当Timer触发器触发函数执行时，执行事件（函数的event参数）为： {\&quot;version\&quot;: \&quot;v1.0\&quot;,   \&quot;time\&quot;: \&quot;2018-06-01T08:30:00+08:00\&quot;,   \&quot;trigger_type\&quot;: \&quot;TIMER\&quot;,   \&quot;trigger_name\&quot;: \&quot;Timer_001\&quot;,   \&quot;user_event\&quot;: \&quot;您输入的附加信息\&quot;}
    /// </summary>

    std::string getUserEvent() const;
    bool userEventIsSet() const;
    void unsetuserEvent();
    void setUserEvent(const std::string& value);

    /// <summary>
    /// APIG触发器id。（APIG触发器参数）
    /// </summary>

    std::string getTriggerid() const;
    bool triggeridIsSet() const;
    void unsettriggerid();
    void setTriggerid(const std::string& value);

    /// <summary>
    /// API接口类型（APIG触发器参数）。 - 1：公有API - 2：私有API
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// APIG接口PATH路径（APIG触发器参数）。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// API的请求协议（APIG触发器参数）。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// API的请求方式（APIG触发器参数）。
    /// </summary>

    std::string getReqMethod() const;
    bool reqMethodIsSet() const;
    void unsetreqMethod();
    void setReqMethod(const std::string& value);

    /// <summary>
    /// API所属的分组编号（APIG触发器参数）。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// API所属的分组名称（APIG触发器参数）。
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// API的匹配方式（APIG触发器参数）。 - SWA：前缀匹配 - NORMAL：正常匹配（绝对匹配）
    /// </summary>

    std::string getMatchMode() const;
    bool matchModeIsSet() const;
    void unsetmatchMode();
    void setMatchMode(const std::string& value);

    /// <summary>
    /// API的发布环境（APIG触发器参数）。
    /// </summary>

    std::string getEnvName() const;
    bool envNameIsSet() const;
    void unsetenvName();
    void setEnvName(const std::string& value);

    /// <summary>
    /// API的发布环境id（APIG触发器参数）。
    /// </summary>

    std::string getEnvId() const;
    bool envIdIsSet() const;
    void unsetenvId();
    void setEnvId(const std::string& value);

    /// <summary>
    /// API编号（APIG触发器参数）。
    /// </summary>

    std::string getApiId() const;
    bool apiIdIsSet() const;
    void unsetapiId();
    void setApiId(const std::string& value);

    /// <summary>
    /// API名称（APIG触发器参数）。
    /// </summary>

    std::string getApiName() const;
    bool apiNameIsSet() const;
    void unsetapiName();
    void setApiName(const std::string& value);

    /// <summary>
    /// API的认证方式（APIG触发器参数）。 - IAM：IAM认证，只允许IAM用户能访问，安全级别中等 - APP：采用Appkey&amp;Appsecret认证，安全级别高，推荐使用 - NONE：无认证模式，所有用户均可访问，不推荐使用
    /// </summary>

    std::string getAuth() const;
    bool authIsSet() const;
    void unsetauth();
    void setAuth(const std::string& value);

    /// <summary>
    /// API调用地址（APIG触发器参数）。
    /// </summary>

    std::string getInvokeUrl() const;
    bool invokeUrlIsSet() const;
    void unsetinvokeUrl();
    void setInvokeUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ApigTriggerFuncInfo getFuncInfo() const;
    bool funcInfoIsSet() const;
    void unsetfuncInfo();
    void setFuncInfo(const ApigTriggerFuncInfo& value);

    /// <summary>
    /// APIG系统默认分配的子域名（APIG触发器参数）。
    /// </summary>

    std::string getSlDomain() const;
    bool slDomainIsSet() const;
    void unsetslDomain();
    void setSlDomain(const std::string& value);

    /// <summary>
    /// API的后端类型（APIG触发器参数）。
    /// </summary>

    std::string getBackendType() const;
    bool backendTypeIsSet() const;
    void unsetbackendType();
    void setBackendType(const std::string& value);

    /// <summary>
    /// 实例id。DDS、KAFKA、RABBITMQ触发器此参数必填。 - APIG触发器：apig实例id - DDS触发器：文档数据库实例id - KAFKA触发器：KAFKA实例id - RABBITMQ触发器：RABBITMQ实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// API归属的集成应用编号。（APIG触发器参数）
    /// </summary>

    std::string getRomaAppId() const;
    bool romaAppIdIsSet() const;
    void unsetromaAppId();
    void setRomaAppId(const std::string& value);

    /// <summary>
    /// 自定义操作（CTS触发器参数）。 CTS云审计服务类型和操作订阅所需要的事件通知，当CTS云审计服务获取已订阅的操作记录后，通过CTS触发器将采集到的操作记录作为参数传递来调用FunctionGraph函数。
    /// </summary>

    std::vector<std::string>& getOperations();
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::vector<std::string>& value);

    /// <summary>
    /// 集合名称（DDS触发器参数）。
    /// </summary>

    std::string getCollectionName() const;
    bool collectionNameIsSet() const;
    void unsetcollectionName();
    void setCollectionName(const std::string& value);

    /// <summary>
    /// 文档数据库名称（DDS触发器参数）。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 文档数据库密码（DDS触发器参数）。
    /// </summary>

    std::string getDbPassword() const;
    bool dbPasswordIsSet() const;
    void unsetdbPassword();
    void setDbPassword(const std::string& value);

    /// <summary>
    /// 文档数据库用户名（DDS触发器参数）。
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 文档数据库实例地址（DDS触发器参数）。
    /// </summary>

    std::vector<std::string>& getInstanceAddrs();
    bool instanceAddrsIsSet() const;
    void unsetinstanceAddrs();
    void setInstanceAddrs(const std::vector<std::string>& value);

    /// <summary>
    /// 文档数据库实例类型（DDS触发器参数）。 - Sharding：集群实例 - ReplicaSet：副本集实例 - Single：单节点实例
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 批处理大小，单次函数执行处理的最大数据量。DIS、DDS、KAFKA、RABBITMQ触发器此参数必填。 - DDS触发器：批处理大小设置1-10,000的范围内 - DIS触发器：批处理大小设置1-10,000的范围内 - KAFKA触发器：批处理大小设置1-1,000的范围内 - RABBITMQ触发器：批处理大小设置1-1,000的范围内
    /// </summary>

    int32_t getBatchSize() const;
    bool batchSizeIsSet() const;
    void unsetbatchSize();
    void setBatchSize(int32_t value);

    /// <summary>
    /// 队列id（DMS触发器参数）。
    /// </summary>

    std::string getQueueId() const;
    bool queueIdIsSet() const;
    void unsetqueueId();
    void setQueueId(const std::string& value);

    /// <summary>
    /// 消费组id（DMS触发器参数）。
    /// </summary>

    std::string getConsumerGroupId() const;
    bool consumerGroupIdIsSet() const;
    void unsetconsumerGroupId();
    void setConsumerGroupId(const std::string& value);

    /// <summary>
    /// 拉取周期。
    /// </summary>

    int32_t getPollingInterval() const;
    bool pollingIntervalIsSet() const;
    void unsetpollingInterval();
    void setPollingInterval(int32_t value);

    /// <summary>
    /// 通道名称（DIS触发器参数）。
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);

    /// <summary>
    /// 起始位置（DIS触发器参数）。 - TRIM_HORIZON：从最早被存储至分区的有效记录开始读取。 - LATEST：从分区中的最新记录开始读取，此设置可以保证总是读到分区中最新记录。
    /// </summary>

    std::string getSharditeratorType() const;
    bool sharditeratorTypeIsSet() const;
    void unsetsharditeratorType();
    void setSharditeratorType(const std::string& value);

    /// <summary>
    /// 拉取周期单位（DIS触发器参数）。 - s：秒 - ms：毫秒
    /// </summary>

    std::string getPollingUnit() const;
    bool pollingUnitIsSet() const;
    void unsetpollingUnit();
    void setPollingUnit(const std::string& value);

    /// <summary>
    /// 最大提取字节数（DIS触发器参数）。
    /// </summary>

    int32_t getMaxFetchBytes() const;
    bool maxFetchBytesIsSet() const;
    void unsetmaxFetchBytes();
    void setMaxFetchBytes(int32_t value);

    /// <summary>
    /// 串行处理数据（DIS触发器参数），如果开启该选项，取一次数据处理完之后才会取下一次数据；否则只要拉取周期到了就会取数据进行处理。
    /// </summary>

    std::string getIsSerial() const;
    bool isSerialIsSet() const;
    void unsetisSerial();
    void setIsSerial(const std::string& value);

    /// <summary>
    /// 日志组id（LTS触发器参数）。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流id（LTS触发器参数）。
    /// </summary>

    std::string getLogTopicId() const;
    bool logTopicIdIsSet() const;
    void unsetlogTopicId();
    void setLogTopicId(const std::string& value);

    /// <summary>
    /// 桶名称（OBS触发器参数），用作事件源的OBS存储桶，不能和本用户已有桶重名；不能和其他用户已有的桶重名；创建成功后不支持修改。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 前缀（OBS触发器参数），输入一个可选性前缀来限制对以此关键字开头的对象的通知。
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// 后缀（OBS触发器参数），输入一个可选性后缀来限制对以此关键字结尾的对象的通知
    /// </summary>

    std::string getSuffix() const;
    bool suffixIsSet() const;
    void unsetsuffix();
    void setSuffix(const std::string& value);

    /// <summary>
    /// 触发事件（OBS触发器参数）。 - ObjectCreated：表示所有创建对象的操作，包含Put、Post、Copy对象以及合并段 - Put：使用Put方法上传对象 - Post：使用Post方法上传对象 - Copy：使用copy方法复制对象 - CompleteMultipartUpload：表示合并分段任务 - ObjectRemoved：表示删除对象 - Delete：指定对象版本号删除对象 - DeleteMarkerCreated：不指定对象版本号删除对象
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);

    /// <summary>
    /// 主题URN（SMN触发器参数）。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// KAFKA主题id列表（KAFKA触发器参数）。
    /// </summary>

    std::vector<std::string>& getTopicIds();
    bool topicIdsIsSet() const;
    void unsettopicIds();
    void setTopicIds(const std::vector<std::string>& value);

    /// <summary>
    /// KAFKA账户名（KAFKA触发器参数）。
    /// </summary>

    std::string getKafkaUser() const;
    bool kafkaUserIsSet() const;
    void unsetkafkaUser();
    void setKafkaUser(const std::string& value);

    /// <summary>
    /// KAFKA账户密码（KAFKA触发器参数）。
    /// </summary>

    std::string getKafkaPassword() const;
    bool kafkaPasswordIsSet() const;
    void unsetkafkaPassword();
    void setKafkaPassword(const std::string& value);

    /// <summary>
    /// KAFKA实例连接IP地址（KAFKA触发器参数）。
    /// </summary>

    std::string getKafkaConnectAddress() const;
    bool kafkaConnectAddressIsSet() const;
    void unsetkafkaConnectAddress();
    void setKafkaConnectAddress(const std::string& value);

    /// <summary>
    /// KAFKA连接是否开启安全认证（KAFKA触发器参数）。
    /// </summary>

    bool isKafkaSslEnable() const;
    bool kafkaSslEnableIsSet() const;
    void unsetkafkaSslEnable();
    void setKafkaSslEnable(bool value);

    /// <summary>
    /// RABBITMQ账户密码（RABBITMQ触发器参数）。
    /// </summary>

    std::string getAccessPassword() const;
    bool accessPasswordIsSet() const;
    void unsetaccessPassword();
    void setAccessPassword(const std::string& value);

    /// <summary>
    /// RABBITMQ账户名（RABBITMQ触发器参数）。
    /// </summary>

    std::string getAccessUser() const;
    bool accessUserIsSet() const;
    void unsetaccessUser();
    void setAccessUser(const std::string& value);

    /// <summary>
    /// 实例连接IP地址（RABBITMQ触发器参数）。
    /// </summary>

    std::string getConnectAddress() const;
    bool connectAddressIsSet() const;
    void unsetconnectAddress();
    void setConnectAddress(const std::string& value);

    /// <summary>
    /// 交换机名称（RABBITMQ触发器参数）。
    /// </summary>

    std::string getExchangeName() const;
    bool exchangeNameIsSet() const;
    void unsetexchangeName();
    void setExchangeName(const std::string& value);

    /// <summary>
    /// 虚拟机名称（RABBITMQ触发器参数）。
    /// </summary>

    std::string getVhost() const;
    bool vhostIsSet() const;
    void unsetvhost();
    void setVhost(const std::string& value);

    /// <summary>
    /// RABBITMQ连接是否开启安全认证（RABBITMQ触发器参数）。
    /// </summary>

    bool isSslEnable() const;
    bool sslEnableIsSet() const;
    void unsetsslEnable();
    void setSslEnable(bool value);

    /// <summary>
    /// EG obs触发器是否对对象加密（EVENTGRID触发器参数）。
    /// </summary>

    bool isKeyEncode() const;
    bool keyEncodeIsSet() const;
    void unsetkeyEncode();
    void setKeyEncode(bool value);

    /// <summary>
    /// 使用的代理（EVENTGRID触发器参数）。
    /// </summary>

    std::string getAgency() const;
    bool agencyIsSet() const;
    void unsetagency();
    void setAgency(const std::string& value);

    /// <summary>
    /// 通道名称（EVENTGRID触发器参数）。
    /// </summary>

    std::string getChannelName() const;
    bool channelNameIsSet() const;
    void unsetchannelName();
    void setChannelName(const std::string& value);

    /// <summary>
    /// 通道id（EVENTGRID触发器参数）。
    /// </summary>

    std::string getChannelId() const;
    bool channelIdIsSet() const;
    void unsetchannelId();
    void setChannelId(const std::string& value);

    /// <summary>
    /// 事件源名称（EVENTGRID触发器参数）。
    /// </summary>

    std::string getSourceName() const;
    bool sourceNameIsSet() const;
    void unsetsourceName();
    void setSourceName(const std::string& value);

    /// <summary>
    /// 创建时间（EVENTGRID触发器参数）。
    /// </summary>

    utility::datetime getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const utility::datetime& value);

    /// <summary>
    /// 触发器状态（EVENTGRID触发器参数）。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 触发器名称（EVENTGRID触发器参数）。
    /// </summary>

    std::string getTriggerName() const;
    bool triggerNameIsSet() const;
    void unsettriggerName();
    void setTriggerName(const std::string& value);

    /// <summary>
    /// 事件类型（EVENTGRID触发器参数）。
    /// </summary>

    std::vector<std::string>& getEventTypes();
    bool eventTypesIsSet() const;
    void unseteventTypes();
    void setEventTypes(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string scheduleType_;
    bool scheduleTypeIsSet_;
    std::string schedule_;
    bool scheduleIsSet_;
    std::string userEvent_;
    bool userEventIsSet_;
    std::string triggerid_;
    bool triggeridIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string reqMethod_;
    bool reqMethodIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string matchMode_;
    bool matchModeIsSet_;
    std::string envName_;
    bool envNameIsSet_;
    std::string envId_;
    bool envIdIsSet_;
    std::string apiId_;
    bool apiIdIsSet_;
    std::string apiName_;
    bool apiNameIsSet_;
    std::string auth_;
    bool authIsSet_;
    std::string invokeUrl_;
    bool invokeUrlIsSet_;
    ApigTriggerFuncInfo funcInfo_;
    bool funcInfoIsSet_;
    std::string slDomain_;
    bool slDomainIsSet_;
    std::string backendType_;
    bool backendTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string romaAppId_;
    bool romaAppIdIsSet_;
    std::vector<std::string> operations_;
    bool operationsIsSet_;
    std::string collectionName_;
    bool collectionNameIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string dbPassword_;
    bool dbPasswordIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    std::vector<std::string> instanceAddrs_;
    bool instanceAddrsIsSet_;
    std::string mode_;
    bool modeIsSet_;
    int32_t batchSize_;
    bool batchSizeIsSet_;
    std::string queueId_;
    bool queueIdIsSet_;
    std::string consumerGroupId_;
    bool consumerGroupIdIsSet_;
    int32_t pollingInterval_;
    bool pollingIntervalIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;
    std::string sharditeratorType_;
    bool sharditeratorTypeIsSet_;
    std::string pollingUnit_;
    bool pollingUnitIsSet_;
    int32_t maxFetchBytes_;
    bool maxFetchBytesIsSet_;
    std::string isSerial_;
    bool isSerialIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logTopicId_;
    bool logTopicIdIsSet_;
    std::string bucket_;
    bool bucketIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    std::string suffix_;
    bool suffixIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::vector<std::string> topicIds_;
    bool topicIdsIsSet_;
    std::string kafkaUser_;
    bool kafkaUserIsSet_;
    std::string kafkaPassword_;
    bool kafkaPasswordIsSet_;
    std::string kafkaConnectAddress_;
    bool kafkaConnectAddressIsSet_;
    bool kafkaSslEnable_;
    bool kafkaSslEnableIsSet_;
    std::string accessPassword_;
    bool accessPasswordIsSet_;
    std::string accessUser_;
    bool accessUserIsSet_;
    std::string connectAddress_;
    bool connectAddressIsSet_;
    std::string exchangeName_;
    bool exchangeNameIsSet_;
    std::string vhost_;
    bool vhostIsSet_;
    bool sslEnable_;
    bool sslEnableIsSet_;
    bool keyEncode_;
    bool keyEncodeIsSet_;
    std::string agency_;
    bool agencyIsSet_;
    std::string channelName_;
    bool channelNameIsSet_;
    std::string channelId_;
    bool channelIdIsSet_;
    std::string sourceName_;
    bool sourceNameIsSet_;
    utility::datetime createdTime_;
    bool createdTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string triggerName_;
    bool triggerNameIsSet_;
    std::vector<std::string> eventTypes_;
    bool eventTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TriggerEventDataResponseBody_H_
