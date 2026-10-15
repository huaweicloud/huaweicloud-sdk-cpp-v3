
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
    /// **参数解释**：  同步任务ID，用于唯一标识一个数据复制任务，在批量设置同步策略时指定需要设置策略的任务。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据迁移过程中的冲突忽略策略，指定当目标库已存在相同数据时的处理方式。  **约束限制**：  不涉及。  **取值范围**：  - stop：冲突失败，遇到冲突时停止任务 - overwrite：冲突覆盖，用源库数据覆盖目标库已有数据 - ignore：冲突忽略，跳过冲突数据继续迁移  **默认取值**：  不涉及
    /// </summary>

    std::string getConflictPolicy() const;
    bool conflictPolicyIsSet() const;
    void unsetconflictPolicy();
    void setConflictPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  过滤DDL策略，指定增量同步过程中需要过滤的DDL操作类型。  **约束限制**：  不涉及。  **取值范围**：  - drop_database：过滤DROP DATABASE操作  **默认取值**：  不涉及
    /// </summary>

    std::string getFilterDdlPolicy() const;
    bool filterDdlPolicyIsSet() const;
    void unsetfilterDdlPolicy();
    void setFilterDdlPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  同步增量时是否同步DDL，指定增量同步阶段是否将源库的DDL操作同步到目标库。  **约束限制**：  不涉及。  **取值范围**：  - true：同步增量时同步DDL - false：同步增量时不同步DDL  **默认取值**：  不涉及
    /// </summary>

    bool isDdlTrans() const;
    bool ddlTransIsSet() const;
    void unsetddlTrans();
    void setDdlTrans(bool value);

    /// <summary>
    /// **参数解释**：  同步增量时是否同步索引，指定增量同步阶段是否将源库的索引变更同步到目标库。  **约束限制**：  不涉及。  **取值范围**：  - true：同步增量时同步索引 - false：同步增量时不同步索引  **默认取值**：  不涉及
    /// </summary>

    bool isIndexTrans() const;
    bool indexTransIsSet() const;
    void unsetindexTrans();
    void setIndexTrans(bool value);

    /// <summary>
    /// **参数解释**：  同步Topic策略，指定Kafka目标库的Topic生成方式。  **约束限制**：  - 目标库为Kafka时必填。 - 不同引擎类型支持的取值范围不同，详见取值范围说明。  **取值范围**：  - 0：集中投递到一个Topic - 1：按库名-schema-表名自动生成Topic名字（GaussDB集中式版到Kafka、PostgreSQL到Kafka按库名-schema-表名；MySQL到Kafka、TaurusDB到Kafka自动生成Topic；Oracle到Kafka按schema-表名） - 2：按库名自动生成Topic名字 - 3：按库名-schema自动生成Topic名字（Oracle到Kafka按schema自动生成Topic）  **默认取值**：  不涉及
    /// </summary>

    std::string getTopicPolicy() const;
    bool topicPolicyIsSet() const;
    void unsettopicPolicy();
    void setTopicPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  Kafka Topic名称，指定同步数据投递的目标Topic。  **约束限制**：  - topic_policy为0时必填。 - 确保Topic已存在。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// **参数解释**：  同步到Kafka Partition的策略，指定数据投递到Kafka分区的方式。  **约束限制**：  - 目标库为Kafka时必填。 - partition_policy的可选取值受topic_policy约束：当topic_policy取0时可取0、1、2、3、4、5；当topic_policy取1时可取0、1、2、5；当topic_policy取2时可取0、1、2、3；当topic_policy取3时可取0、1；当topic_policy取4时可取0、1、3。  **取值范围**：  - 0：按库名.schema.表名的hash值投递到不同Partition - 1：全部投递到Partition 0 - 2：按主键的hash值投递到不同Partition - 3：按库名.schema的hash值投递到不同Partition  **默认取值**：  不涉及
    /// </summary>

    std::string getPartitionPolicy() const;
    bool partitionPolicyIsSet() const;
    void unsetpartitionPolicy();
    void setPartitionPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  投送到Kafka的数据格式，指定同步到Kafka的数据序列化方式。  **约束限制**：  - MySQL到Kafka、TaurusDB到Kafka同步支持json和json_c。 - 其他引擎支持json和avro。  **取值范围**：  - json：JSON格式 - avro：Avro格式  **默认取值**：  json
    /// </summary>

    std::string getKafkaDataFormat() const;
    bool kafkaDataFormatIsSet() const;
    void unsetkafkaDataFormat();
    void setKafkaDataFormat(const std::string& value);

    /// <summary>
    /// **参数解释**：  Topic名字格式，指定自动生成Topic名称时使用的命名模板。  **约束限制**：  - topic_policy为1、2、3时需要填写。 - PostgreSQL到Kafka、GaussDB集中式版到Kafka：topic_policy取1时支持database和schema变量，不填默认为$-$；取2时支持database变量，不填默认为$；取3时支持database、schema和tablename变量，不填默认为$-$-$。 - Oracle到Kafka：topic_policy取1时支持schema和tablename变量，不填默认为$-$；取3时支持schema变量，不填默认为$。 - MySQL到Kafka、TaurusDB到Kafka：topic_policy取1时支持database和tablename变量，不填默认为$-$。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getTopicNameFormat() const;
    bool topicNameFormatIsSet() const;
    void unsettopicNameFormat();
    void setTopicNameFormat(const std::string& value);

    /// <summary>
    /// **参数解释**：  Partition个数，指定Kafka Topic的分区数量。  **约束限制**：  - topic_policy为1、2、3时需要填写。  **取值范围**：  1-2147483647  **默认取值**：  1
    /// </summary>

    std::string getPartitionsNum() const;
    bool partitionsNumIsSet() const;
    void unsetpartitionsNum();
    void setPartitionsNum(const std::string& value);

    /// <summary>
    /// **参数解释**：  副本个数，指定Kafka Topic的副本数量。  **约束限制**：  - topic_policy为1、2、3时需要填写。  **取值范围**：  1-32767  **默认取值**：  1
    /// </summary>

    std::string getReplicationFactor() const;
    bool replicationFactorIsSet() const;
    void unsetreplicationFactor();
    void setReplicationFactor(const std::string& value);

    /// <summary>
    /// **参数解释**：  PostgreSQL同步全量阶段是否填充物化视图，指定全量同步时是否将源库物化视图的数据填充到目标库。  **约束限制**：  不涉及。  **取值范围**：  - true：填充物化视图 - false：不填充物化视图  **默认取值**：  false
    /// </summary>

    bool isIsFillMaterializedView() const;
    bool isFillMaterializedViewIsSet() const;
    void unsetisFillMaterializedView();
    void setIsFillMaterializedView(bool value);

    /// <summary>
    /// **参数解释**：  PostgreSQL同步全量阶段是否使用快照模式导出，指定全量同步时是否采用快照方式导出源库数据。  **约束限制**：  不涉及。  **取值范围**：  - true：使用快照模式导出 - false：不使用快照模式导出  **默认取值**：  false
    /// </summary>

    bool isExportSnapshot() const;
    bool exportSnapshotIsSet() const;
    void unsetexportSnapshot();
    void setExportSnapshot(bool value);

    /// <summary>
    /// **参数解释**：  复制槽名称，指定PostgreSQL逻辑复制的复制槽标识。  **约束限制**：  - gaussdbv5ha-to-kafka主备任务必填。 - PostgreSQL为源的单增量同步任务选填。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSlotName() const;
    bool slotNameIsSet() const;
    void unsetslotName();
    void setSlotName(const std::string& value);

    /// <summary>
    /// **参数解释**：  源库日志位点，指定增量同步的起始位点。  **约束限制**：  - MySQL为源时，通过show master status命令获取源库位点，格式为：文件名.文件编号:事件位点。文件名只能为1-60个字符且不能包含特殊字符，文件编号只能为3-20个数字，binlog事件位置只能为1-20个数字，且总长度不能超过100个字符。 - MongoDB为源时，位点需设置在oplog范围以内，格式为：timestamp:incre，timestamp和incre均为范围在1~2147483647之间的整数。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getFileAndPosition() const;
    bool fileAndPositionIsSet() const;
    void unsetfileAndPosition();
    void setFileAndPosition(const std::string& value);

    /// <summary>
    /// **参数解释**：  MySQL GTID集合，指定增量同步的GTID起始位点。  **约束限制**：  - MySQL为源的任务需要填写，通过show master status命令获取源库位点，根据提示填写Executed_Gtid_Set。 - 如果源库为MySQL 5.5版本，则不支持使用同步任务。 - 不能包含特殊字符和中文，且不能超过2048个字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getGtidSet() const;
    bool gtidSetIsSet() const;
    void unsetgtidSet();
    void setGtidSet(const std::string& value);

    /// <summary>
    /// **参数解释**：  存储DDL的Kafka Topic名称，指定DDL操作数据投递的目标Topic。  **约束限制**：  - Kafka为目标且ddl_trans为true时必填。 - 取值必须为目标库已存在的Topic名称，确保Topic已存在。  **取值范围**：  不涉及。  **默认取值**：  不涉及
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
