

#include "huaweicloud/drs/v3/model/SyncPolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




SyncPolicyReq::SyncPolicyReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    conflictPolicy_ = "";
    conflictPolicyIsSet_ = false;
    filterDdlPolicy_ = "";
    filterDdlPolicyIsSet_ = false;
    ddlTrans_ = false;
    ddlTransIsSet_ = false;
    indexTrans_ = false;
    indexTransIsSet_ = false;
    topicPolicy_ = "";
    topicPolicyIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    partitionPolicy_ = "";
    partitionPolicyIsSet_ = false;
    kafkaDataFormat_ = "";
    kafkaDataFormatIsSet_ = false;
    topicNameFormat_ = "";
    topicNameFormatIsSet_ = false;
    partitionsNum_ = "";
    partitionsNumIsSet_ = false;
    replicationFactor_ = "";
    replicationFactorIsSet_ = false;
    isFillMaterializedView_ = false;
    isFillMaterializedViewIsSet_ = false;
    exportSnapshot_ = false;
    exportSnapshotIsSet_ = false;
    slotName_ = "";
    slotNameIsSet_ = false;
    fileAndPosition_ = "";
    fileAndPositionIsSet_ = false;
    gtidSet_ = "";
    gtidSetIsSet_ = false;
}

SyncPolicyReq::~SyncPolicyReq() = default;

void SyncPolicyReq::validate()
{
}

web::json::value SyncPolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(conflictPolicyIsSet_) {
        val[utility::conversions::to_string_t("conflict_policy")] = ModelBase::toJson(conflictPolicy_);
    }
    if(filterDdlPolicyIsSet_) {
        val[utility::conversions::to_string_t("filter_ddl_policy")] = ModelBase::toJson(filterDdlPolicy_);
    }
    if(ddlTransIsSet_) {
        val[utility::conversions::to_string_t("ddl_trans")] = ModelBase::toJson(ddlTrans_);
    }
    if(indexTransIsSet_) {
        val[utility::conversions::to_string_t("index_trans")] = ModelBase::toJson(indexTrans_);
    }
    if(topicPolicyIsSet_) {
        val[utility::conversions::to_string_t("topic_policy")] = ModelBase::toJson(topicPolicy_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(partitionPolicyIsSet_) {
        val[utility::conversions::to_string_t("partition_policy")] = ModelBase::toJson(partitionPolicy_);
    }
    if(kafkaDataFormatIsSet_) {
        val[utility::conversions::to_string_t("kafka_data_format")] = ModelBase::toJson(kafkaDataFormat_);
    }
    if(topicNameFormatIsSet_) {
        val[utility::conversions::to_string_t("topic_name_format")] = ModelBase::toJson(topicNameFormat_);
    }
    if(partitionsNumIsSet_) {
        val[utility::conversions::to_string_t("partitions_num")] = ModelBase::toJson(partitionsNum_);
    }
    if(replicationFactorIsSet_) {
        val[utility::conversions::to_string_t("replication_factor")] = ModelBase::toJson(replicationFactor_);
    }
    if(isFillMaterializedViewIsSet_) {
        val[utility::conversions::to_string_t("is_fill_materialized_view")] = ModelBase::toJson(isFillMaterializedView_);
    }
    if(exportSnapshotIsSet_) {
        val[utility::conversions::to_string_t("export_snapshot")] = ModelBase::toJson(exportSnapshot_);
    }
    if(slotNameIsSet_) {
        val[utility::conversions::to_string_t("slot_name")] = ModelBase::toJson(slotName_);
    }
    if(fileAndPositionIsSet_) {
        val[utility::conversions::to_string_t("file_and_position")] = ModelBase::toJson(fileAndPosition_);
    }
    if(gtidSetIsSet_) {
        val[utility::conversions::to_string_t("gtid_set")] = ModelBase::toJson(gtidSet_);
    }

    return val;
}
bool SyncPolicyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conflict_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_ddl_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_ddl_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterDdlPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_trans"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlTrans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_trans"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexTrans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_data_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_data_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaDataFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_name_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_name_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicNameFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partitions_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partitions_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionsNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_factor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_factor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationFactor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_fill_materialized_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_fill_materialized_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFillMaterializedView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_snapshot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportSnapshot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slot_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slot_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlotName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_and_position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_and_position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileAndPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gtid_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gtid_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGtidSet(refVal);
        }
    }
    return ok;
}


std::string SyncPolicyReq::getJobId() const
{
    return jobId_;
}

void SyncPolicyReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SyncPolicyReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SyncPolicyReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SyncPolicyReq::getConflictPolicy() const
{
    return conflictPolicy_;
}

void SyncPolicyReq::setConflictPolicy(const std::string& value)
{
    conflictPolicy_ = value;
    conflictPolicyIsSet_ = true;
}

bool SyncPolicyReq::conflictPolicyIsSet() const
{
    return conflictPolicyIsSet_;
}

void SyncPolicyReq::unsetconflictPolicy()
{
    conflictPolicyIsSet_ = false;
}

std::string SyncPolicyReq::getFilterDdlPolicy() const
{
    return filterDdlPolicy_;
}

void SyncPolicyReq::setFilterDdlPolicy(const std::string& value)
{
    filterDdlPolicy_ = value;
    filterDdlPolicyIsSet_ = true;
}

bool SyncPolicyReq::filterDdlPolicyIsSet() const
{
    return filterDdlPolicyIsSet_;
}

void SyncPolicyReq::unsetfilterDdlPolicy()
{
    filterDdlPolicyIsSet_ = false;
}

bool SyncPolicyReq::isDdlTrans() const
{
    return ddlTrans_;
}

void SyncPolicyReq::setDdlTrans(bool value)
{
    ddlTrans_ = value;
    ddlTransIsSet_ = true;
}

bool SyncPolicyReq::ddlTransIsSet() const
{
    return ddlTransIsSet_;
}

void SyncPolicyReq::unsetddlTrans()
{
    ddlTransIsSet_ = false;
}

bool SyncPolicyReq::isIndexTrans() const
{
    return indexTrans_;
}

void SyncPolicyReq::setIndexTrans(bool value)
{
    indexTrans_ = value;
    indexTransIsSet_ = true;
}

bool SyncPolicyReq::indexTransIsSet() const
{
    return indexTransIsSet_;
}

void SyncPolicyReq::unsetindexTrans()
{
    indexTransIsSet_ = false;
}

std::string SyncPolicyReq::getTopicPolicy() const
{
    return topicPolicy_;
}

void SyncPolicyReq::setTopicPolicy(const std::string& value)
{
    topicPolicy_ = value;
    topicPolicyIsSet_ = true;
}

bool SyncPolicyReq::topicPolicyIsSet() const
{
    return topicPolicyIsSet_;
}

void SyncPolicyReq::unsettopicPolicy()
{
    topicPolicyIsSet_ = false;
}

std::string SyncPolicyReq::getTopic() const
{
    return topic_;
}

void SyncPolicyReq::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool SyncPolicyReq::topicIsSet() const
{
    return topicIsSet_;
}

void SyncPolicyReq::unsettopic()
{
    topicIsSet_ = false;
}

std::string SyncPolicyReq::getPartitionPolicy() const
{
    return partitionPolicy_;
}

void SyncPolicyReq::setPartitionPolicy(const std::string& value)
{
    partitionPolicy_ = value;
    partitionPolicyIsSet_ = true;
}

bool SyncPolicyReq::partitionPolicyIsSet() const
{
    return partitionPolicyIsSet_;
}

void SyncPolicyReq::unsetpartitionPolicy()
{
    partitionPolicyIsSet_ = false;
}

std::string SyncPolicyReq::getKafkaDataFormat() const
{
    return kafkaDataFormat_;
}

void SyncPolicyReq::setKafkaDataFormat(const std::string& value)
{
    kafkaDataFormat_ = value;
    kafkaDataFormatIsSet_ = true;
}

bool SyncPolicyReq::kafkaDataFormatIsSet() const
{
    return kafkaDataFormatIsSet_;
}

void SyncPolicyReq::unsetkafkaDataFormat()
{
    kafkaDataFormatIsSet_ = false;
}

std::string SyncPolicyReq::getTopicNameFormat() const
{
    return topicNameFormat_;
}

void SyncPolicyReq::setTopicNameFormat(const std::string& value)
{
    topicNameFormat_ = value;
    topicNameFormatIsSet_ = true;
}

bool SyncPolicyReq::topicNameFormatIsSet() const
{
    return topicNameFormatIsSet_;
}

void SyncPolicyReq::unsettopicNameFormat()
{
    topicNameFormatIsSet_ = false;
}

std::string SyncPolicyReq::getPartitionsNum() const
{
    return partitionsNum_;
}

void SyncPolicyReq::setPartitionsNum(const std::string& value)
{
    partitionsNum_ = value;
    partitionsNumIsSet_ = true;
}

bool SyncPolicyReq::partitionsNumIsSet() const
{
    return partitionsNumIsSet_;
}

void SyncPolicyReq::unsetpartitionsNum()
{
    partitionsNumIsSet_ = false;
}

std::string SyncPolicyReq::getReplicationFactor() const
{
    return replicationFactor_;
}

void SyncPolicyReq::setReplicationFactor(const std::string& value)
{
    replicationFactor_ = value;
    replicationFactorIsSet_ = true;
}

bool SyncPolicyReq::replicationFactorIsSet() const
{
    return replicationFactorIsSet_;
}

void SyncPolicyReq::unsetreplicationFactor()
{
    replicationFactorIsSet_ = false;
}

bool SyncPolicyReq::isIsFillMaterializedView() const
{
    return isFillMaterializedView_;
}

void SyncPolicyReq::setIsFillMaterializedView(bool value)
{
    isFillMaterializedView_ = value;
    isFillMaterializedViewIsSet_ = true;
}

bool SyncPolicyReq::isFillMaterializedViewIsSet() const
{
    return isFillMaterializedViewIsSet_;
}

void SyncPolicyReq::unsetisFillMaterializedView()
{
    isFillMaterializedViewIsSet_ = false;
}

bool SyncPolicyReq::isExportSnapshot() const
{
    return exportSnapshot_;
}

void SyncPolicyReq::setExportSnapshot(bool value)
{
    exportSnapshot_ = value;
    exportSnapshotIsSet_ = true;
}

bool SyncPolicyReq::exportSnapshotIsSet() const
{
    return exportSnapshotIsSet_;
}

void SyncPolicyReq::unsetexportSnapshot()
{
    exportSnapshotIsSet_ = false;
}

std::string SyncPolicyReq::getSlotName() const
{
    return slotName_;
}

void SyncPolicyReq::setSlotName(const std::string& value)
{
    slotName_ = value;
    slotNameIsSet_ = true;
}

bool SyncPolicyReq::slotNameIsSet() const
{
    return slotNameIsSet_;
}

void SyncPolicyReq::unsetslotName()
{
    slotNameIsSet_ = false;
}

std::string SyncPolicyReq::getFileAndPosition() const
{
    return fileAndPosition_;
}

void SyncPolicyReq::setFileAndPosition(const std::string& value)
{
    fileAndPosition_ = value;
    fileAndPositionIsSet_ = true;
}

bool SyncPolicyReq::fileAndPositionIsSet() const
{
    return fileAndPositionIsSet_;
}

void SyncPolicyReq::unsetfileAndPosition()
{
    fileAndPositionIsSet_ = false;
}

std::string SyncPolicyReq::getGtidSet() const
{
    return gtidSet_;
}

void SyncPolicyReq::setGtidSet(const std::string& value)
{
    gtidSet_ = value;
    gtidSetIsSet_ = true;
}

bool SyncPolicyReq::gtidSetIsSet() const
{
    return gtidSetIsSet_;
}

void SyncPolicyReq::unsetgtidSet()
{
    gtidSetIsSet_ = false;
}

}
}
}
}
}


