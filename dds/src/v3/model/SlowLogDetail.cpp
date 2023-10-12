

#include "huaweicloud/dds/v3/model/SlowLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SlowLogDetail::SlowLogDetail()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    wholeMessage_ = "";
    wholeMessageIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    costTime_ = 0;
    costTimeIsSet_ = false;
    lockTime_ = 0;
    lockTimeIsSet_ = false;
    docsReturned_ = 0;
    docsReturnedIsSet_ = false;
    docsScanned_ = 0;
    docsScannedIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    collection_ = "";
    collectionIsSet_ = false;
    logTime_ = "";
    logTimeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

SlowLogDetail::~SlowLogDetail() = default;

void SlowLogDetail::validate()
{
}

web::json::value SlowLogDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(wholeMessageIsSet_) {
        val[utility::conversions::to_string_t("whole_message")] = ModelBase::toJson(wholeMessage_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(costTimeIsSet_) {
        val[utility::conversions::to_string_t("cost_time")] = ModelBase::toJson(costTime_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(docsReturnedIsSet_) {
        val[utility::conversions::to_string_t("docs_returned")] = ModelBase::toJson(docsReturned_);
    }
    if(docsScannedIsSet_) {
        val[utility::conversions::to_string_t("docs_scanned")] = ModelBase::toJson(docsScanned_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(collectionIsSet_) {
        val[utility::conversions::to_string_t("collection")] = ModelBase::toJson(collection_);
    }
    if(logTimeIsSet_) {
        val[utility::conversions::to_string_t("log_time")] = ModelBase::toJson(logTime_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool SlowLogDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whole_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whole_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWholeMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("docs_returned"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("docs_returned"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocsReturned(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("docs_scanned"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("docs_scanned"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocsScanned(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    return ok;
}


std::string SlowLogDetail::getNodeName() const
{
    return nodeName_;
}

void SlowLogDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool SlowLogDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void SlowLogDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string SlowLogDetail::getNodeId() const
{
    return nodeId_;
}

void SlowLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SlowLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SlowLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SlowLogDetail::getWholeMessage() const
{
    return wholeMessage_;
}

void SlowLogDetail::setWholeMessage(const std::string& value)
{
    wholeMessage_ = value;
    wholeMessageIsSet_ = true;
}

bool SlowLogDetail::wholeMessageIsSet() const
{
    return wholeMessageIsSet_;
}

void SlowLogDetail::unsetwholeMessage()
{
    wholeMessageIsSet_ = false;
}

std::string SlowLogDetail::getOperateType() const
{
    return operateType_;
}

void SlowLogDetail::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool SlowLogDetail::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void SlowLogDetail::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

int32_t SlowLogDetail::getCostTime() const
{
    return costTime_;
}

void SlowLogDetail::setCostTime(int32_t value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool SlowLogDetail::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void SlowLogDetail::unsetcostTime()
{
    costTimeIsSet_ = false;
}

int32_t SlowLogDetail::getLockTime() const
{
    return lockTime_;
}

void SlowLogDetail::setLockTime(int32_t value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool SlowLogDetail::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void SlowLogDetail::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

int32_t SlowLogDetail::getDocsReturned() const
{
    return docsReturned_;
}

void SlowLogDetail::setDocsReturned(int32_t value)
{
    docsReturned_ = value;
    docsReturnedIsSet_ = true;
}

bool SlowLogDetail::docsReturnedIsSet() const
{
    return docsReturnedIsSet_;
}

void SlowLogDetail::unsetdocsReturned()
{
    docsReturnedIsSet_ = false;
}

int32_t SlowLogDetail::getDocsScanned() const
{
    return docsScanned_;
}

void SlowLogDetail::setDocsScanned(int32_t value)
{
    docsScanned_ = value;
    docsScannedIsSet_ = true;
}

bool SlowLogDetail::docsScannedIsSet() const
{
    return docsScannedIsSet_;
}

void SlowLogDetail::unsetdocsScanned()
{
    docsScannedIsSet_ = false;
}

std::string SlowLogDetail::getDatabase() const
{
    return database_;
}

void SlowLogDetail::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool SlowLogDetail::databaseIsSet() const
{
    return databaseIsSet_;
}

void SlowLogDetail::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string SlowLogDetail::getCollection() const
{
    return collection_;
}

void SlowLogDetail::setCollection(const std::string& value)
{
    collection_ = value;
    collectionIsSet_ = true;
}

bool SlowLogDetail::collectionIsSet() const
{
    return collectionIsSet_;
}

void SlowLogDetail::unsetcollection()
{
    collectionIsSet_ = false;
}

std::string SlowLogDetail::getLogTime() const
{
    return logTime_;
}

void SlowLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool SlowLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void SlowLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

std::string SlowLogDetail::getLineNum() const
{
    return lineNum_;
}

void SlowLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool SlowLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void SlowLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


