

#include "huaweicloud/gaussdb/v3/model/ChSlowLogQueryRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChSlowLogQueryRequestBody::ChSlowLogQueryRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
}

ChSlowLogQueryRequestBody::~ChSlowLogQueryRequestBody() = default;

void ChSlowLogQueryRequestBody::validate()
{
}

web::json::value ChSlowLogQueryRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }

    return val;
}
bool ChSlowLogQueryRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
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
    return ok;
}


std::string ChSlowLogQueryRequestBody::getNodeId() const
{
    return nodeId_;
}

void ChSlowLogQueryRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ChSlowLogQueryRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ChSlowLogQueryRequestBody::getStartTime() const
{
    return startTime_;
}

void ChSlowLogQueryRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ChSlowLogQueryRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ChSlowLogQueryRequestBody::getEndTime() const
{
    return endTime_;
}

void ChSlowLogQueryRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ChSlowLogQueryRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ChSlowLogQueryRequestBody::getLimit() const
{
    return limit_;
}

void ChSlowLogQueryRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ChSlowLogQueryRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ChSlowLogQueryRequestBody::getLineNum() const
{
    return lineNum_;
}

void ChSlowLogQueryRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ChSlowLogQueryRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ChSlowLogQueryRequestBody::getOperateType() const
{
    return operateType_;
}

void ChSlowLogQueryRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ChSlowLogQueryRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ChSlowLogQueryRequestBody::getDatabase() const
{
    return database_;
}

void ChSlowLogQueryRequestBody::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ChSlowLogQueryRequestBody::databaseIsSet() const
{
    return databaseIsSet_;
}

void ChSlowLogQueryRequestBody::unsetdatabase()
{
    databaseIsSet_ = false;
}

}
}
}
}
}


