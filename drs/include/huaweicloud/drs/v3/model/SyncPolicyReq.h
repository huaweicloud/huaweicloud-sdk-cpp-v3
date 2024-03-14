
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_SyncPolicyReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_SyncPolicyReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置同步策略请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  SyncPolicyReq
    : public ModelBase
{
public:
    SyncPolicyReq();
    virtual ~SyncPolicyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncPolicyReq members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 冲突策略。 - ignore：忽略 - overwrite：覆盖 - stop：报错
    /// </summary>

    std::string getConflictPolicy() const;
    bool conflictPolicyIsSet() const;
    void unsetconflictPolicy();
    void setConflictPolicy(const std::string& value);

    /// <summary>
    /// 过滤DDL策略。
    /// </summary>

    std::string getFilterDdlPolicy() const;
    bool filterDdlPolicyIsSet() const;
    void unsetfilterDdlPolicy();
    void setFilterDdlPolicy(const std::string& value);

    /// <summary>
    /// 同步增量是否同步DDL。
    /// </summary>

    bool isDdlTrans() const;
    bool ddlTransIsSet() const;
    void unsetddlTrans();
    void setDdlTrans(bool value);

    /// <summary>
    /// 同步增量是否同步索引。
    /// </summary>

    bool isIndexTrans() const;
    bool indexTransIsSet() const;
    void unsetindexTrans();
    void setIndexTrans(bool value);

    /// <summary>
    /// 同步Topic策略，目标库为kafka时必填，取值： - 0：集中投递到一个Topic - 1：按库名-schema-表名自动生成Topic名字 - 2：按库名自动生成Topic名字 - 3：按库名-schema自动生成Topic名字
    /// </summary>

    std::string getTopicPolicy() const;
    bool topicPolicyIsSet() const;
    void unsettopicPolicy();
    void setTopicPolicy(const std::string& value);

    /// <summary>
    /// Topic名称，topic_policy为0时必填，确保topic已存在。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// 同步到kafka partition策略，取值： - 0：按库名.schema.表名的hash值投递到不同Partition - 1：全部投递到Partition 0 - 2：按主键的hash值投递到不同Partition - 3：按库名.schema的hash值投递到不同Partition **当topic_policy取0时，可以取0,1,2,3；当topic_policy取1时，可以取1,2；当topic_policy取2时，可以取0,1,3；当topic_policy取3时，可以取0,1；**
    /// </summary>

    std::string getPartitionPolicy() const;
    bool partitionPolicyIsSet() const;
    void unsetpartitionPolicy();
    void setPartitionPolicy(const std::string& value);

    /// <summary>
    /// 投送到kafka的数据格式，不填默认为json：
    /// </summary>

    std::string getKafkaDataFormat() const;
    bool kafkaDataFormatIsSet() const;
    void unsetkafkaDataFormat();
    void setKafkaDataFormat(const std::string& value);

    /// <summary>
    /// Topic名字格式，topic_policy为1,2,3,时需要 - 当topic_policy取1时，Topic名字格式支持database、schema两个变量，其他字符当做常量。分别用$database$代替数据库名，$schema$代替模式名，不填默认为$database$-$schema$ - 当topic_policy取2时，Topic名字格式支持database一个变量，其他字符都当做常量，不填默认为$database$ - 当topic_policy取3时，Topic名字格式支持database、schema和tablename三个变量，其他字符当做常量。分别用$database$代替数据库名，$schema$代替模式名，$tablename$代替表名，不填默认为$database$-$schema$-$tablename$
    /// </summary>

    std::string getTopicNameFormat() const;
    bool topicNameFormatIsSet() const;
    void unsettopicNameFormat();
    void setTopicNameFormat(const std::string& value);

    /// <summary>
    /// Partition个数，取值1-2147483647之间，topic_policy为1,2,3,时需要，不填默认为1
    /// </summary>

    std::string getPartitionsNum() const;
    bool partitionsNumIsSet() const;
    void unsetpartitionsNum();
    void setPartitionsNum(const std::string& value);

    /// <summary>
    /// 副本个数，取值1-32767之间，topic_policy为1,2,3,时需要，不填默认为1
    /// </summary>

    std::string getReplicationFactor() const;
    bool replicationFactorIsSet() const;
    void unsetreplicationFactor();
    void setReplicationFactor(const std::string& value);

    /// <summary>
    /// PostgreSQL同步全量阶段是否填充物化视图，不填默认为false
    /// </summary>

    bool isIsFillMaterializedView() const;
    bool isFillMaterializedViewIsSet() const;
    void unsetisFillMaterializedView();
    void setIsFillMaterializedView(bool value);

    /// <summary>
    /// PostgreSQL同步全量阶段是否使用快照模式导出，不填默认为false
    /// </summary>

    bool isExportSnapshot() const;
    bool exportSnapshotIsSet() const;
    void unsetexportSnapshot();
    void setExportSnapshot(bool value);

    /// <summary>
    /// 复制槽名称，gaussdbv5ha-to-kafka主备任务必填
    /// </summary>

    std::string getSlotName() const;
    bool slotNameIsSet() const;
    void unsetslotName();
    void setSlotName(const std::string& value);

    /// <summary>
    /// - MySQL为源通过show master status命令获取源库位点，根据提示分别填写File:Position。例如：mysql-bin.000277:805 文件名只能为1-60个字符且不能包含&lt; &gt; &amp; : \&quot; \\&#39; / \\\\\\\\ 特殊字符，文件编号只能为3-20个数字，binlog事件位置只能为1-20个数字，且总长度不能超过100个字符。格式为：文件名.文件编号:事件位点 - MongoDB为源的任务，任务的源库日志从位点开始获取（含当前启动位点），位点需设置在oplog范围以内。非集群通过db.getReplicationInfo()直接获得oplog范围，集群通过db.watch([], {startAtOperationTime: Timestamp(xx, xx)})命令，将启动位点填在xx处，校验位点是否在oplog范围以内。格式为：timestamp:incre。timestamp和incre均为范围在1~2,147,483,647之间的整数。
    /// </summary>

    std::string getFileAndPosition() const;
    bool fileAndPositionIsSet() const;
    void unsetfileAndPosition();
    void setFileAndPosition(const std::string& value);

    /// <summary>
    /// - MySQL为源的任务需要，通过show master status命令获取源库位点，根据提示填写Executed_Gtid_Set（如果源库为MySQL 5.5版本，则不支持使用同步任务）。  - 不能包含&lt; &gt; &amp; \&quot; \\&#39; / \\\\\\\\ 特殊字符和中文。且不能超过2048个字符
    /// </summary>

    std::string getGtidSet() const;
    bool gtidSetIsSet() const;
    void unsetgtidSet();
    void setGtidSet(const std::string& value);

    /// <summary>
    /// 存储DDL的topic。Kafka为目标且ddl_trans为true时必填，取值：目标库已存在的topic名称，确保topic已存在。
    /// </summary>

    std::string getDdlTopic() const;
    bool ddlTopicIsSet() const;
    void unsetddlTopic();
    void setDdlTopic(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string conflictPolicy_;
    bool conflictPolicyIsSet_;
    std::string filterDdlPolicy_;
    bool filterDdlPolicyIsSet_;
    bool ddlTrans_;
    bool ddlTransIsSet_;
    bool indexTrans_;
    bool indexTransIsSet_;
    std::string topicPolicy_;
    bool topicPolicyIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string partitionPolicy_;
    bool partitionPolicyIsSet_;
    std::string kafkaDataFormat_;
    bool kafkaDataFormatIsSet_;
    std::string topicNameFormat_;
    bool topicNameFormatIsSet_;
    std::string partitionsNum_;
    bool partitionsNumIsSet_;
    std::string replicationFactor_;
    bool replicationFactorIsSet_;
    bool isFillMaterializedView_;
    bool isFillMaterializedViewIsSet_;
    bool exportSnapshot_;
    bool exportSnapshotIsSet_;
    std::string slotName_;
    bool slotNameIsSet_;
    std::string fileAndPosition_;
    bool fileAndPositionIsSet_;
    std::string gtidSet_;
    bool gtidSetIsSet_;
    std::string ddlTopic_;
    bool ddlTopicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_SyncPolicyReq_H_
