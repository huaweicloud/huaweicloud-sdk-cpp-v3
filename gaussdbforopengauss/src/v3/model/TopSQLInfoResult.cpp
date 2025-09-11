

#include "huaweicloud/gaussdbforopengauss/v3/model/TopSQLInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TopSQLInfoResult::TopSQLInfoResult()
{
    sqlId_ = "";
    sqlIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    sqlText_ = "";
    sqlTextIsSet_ = false;
    callsPercent_ = "";
    callsPercentIsSet_ = false;
    cpuPercent_ = "";
    cpuPercentIsSet_ = false;
    ioPercent_ = "";
    ioPercentIsSet_ = false;
    calls_ = "";
    callsIsSet_ = false;
    returnedRows_ = "";
    returnedRowsIsSet_ = false;
    tupleRead_ = "";
    tupleReadIsSet_ = false;
    avgElapseTime_ = "";
    avgElapseTimeIsSet_ = false;
    totalElapseTime_ = "";
    totalElapseTimeIsSet_ = false;
    cpuTime_ = "";
    cpuTimeIsSet_ = false;
    ioTime_ = "";
    ioTimeIsSet_ = false;
    minElapseTime_ = "";
    minElapseTimeIsSet_ = false;
    maxElapseTime_ = "";
    maxElapseTimeIsSet_ = false;
    sqlHitRatio_ = "";
    sqlHitRatioIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
}

TopSQLInfoResult::~TopSQLInfoResult() = default;

void TopSQLInfoResult::validate()
{
}

web::json::value TopSQLInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(callsPercentIsSet_) {
        val[utility::conversions::to_string_t("calls_percent")] = ModelBase::toJson(callsPercent_);
    }
    if(cpuPercentIsSet_) {
        val[utility::conversions::to_string_t("cpu_percent")] = ModelBase::toJson(cpuPercent_);
    }
    if(ioPercentIsSet_) {
        val[utility::conversions::to_string_t("io_percent")] = ModelBase::toJson(ioPercent_);
    }
    if(callsIsSet_) {
        val[utility::conversions::to_string_t("calls")] = ModelBase::toJson(calls_);
    }
    if(returnedRowsIsSet_) {
        val[utility::conversions::to_string_t("returned_rows")] = ModelBase::toJson(returnedRows_);
    }
    if(tupleReadIsSet_) {
        val[utility::conversions::to_string_t("tuple_read")] = ModelBase::toJson(tupleRead_);
    }
    if(avgElapseTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_elapse_time")] = ModelBase::toJson(avgElapseTime_);
    }
    if(totalElapseTimeIsSet_) {
        val[utility::conversions::to_string_t("total_elapse_time")] = ModelBase::toJson(totalElapseTime_);
    }
    if(cpuTimeIsSet_) {
        val[utility::conversions::to_string_t("cpu_time")] = ModelBase::toJson(cpuTime_);
    }
    if(ioTimeIsSet_) {
        val[utility::conversions::to_string_t("io_time")] = ModelBase::toJson(ioTime_);
    }
    if(minElapseTimeIsSet_) {
        val[utility::conversions::to_string_t("min_elapse_time")] = ModelBase::toJson(minElapseTime_);
    }
    if(maxElapseTimeIsSet_) {
        val[utility::conversions::to_string_t("max_elapse_time")] = ModelBase::toJson(maxElapseTime_);
    }
    if(sqlHitRatioIsSet_) {
        val[utility::conversions::to_string_t("sql_hit_ratio")] = ModelBase::toJson(sqlHitRatio_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }

    return val;
}
bool TopSQLInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("calls_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("calls_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("io_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("calls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("calls"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCalls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("returned_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returned_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tuple_read"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tuple_read"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTupleRead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_elapse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_elapse_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgElapseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_elapse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_elapse_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalElapseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_elapse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_elapse_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinElapseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_elapse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_elapse_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxElapseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_hit_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_hit_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlHitRatio(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    return ok;
}


std::string TopSQLInfoResult::getSqlId() const
{
    return sqlId_;
}

void TopSQLInfoResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool TopSQLInfoResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void TopSQLInfoResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string TopSQLInfoResult::getUserName() const
{
    return userName_;
}

void TopSQLInfoResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TopSQLInfoResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void TopSQLInfoResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string TopSQLInfoResult::getSqlText() const
{
    return sqlText_;
}

void TopSQLInfoResult::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool TopSQLInfoResult::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void TopSQLInfoResult::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string TopSQLInfoResult::getCallsPercent() const
{
    return callsPercent_;
}

void TopSQLInfoResult::setCallsPercent(const std::string& value)
{
    callsPercent_ = value;
    callsPercentIsSet_ = true;
}

bool TopSQLInfoResult::callsPercentIsSet() const
{
    return callsPercentIsSet_;
}

void TopSQLInfoResult::unsetcallsPercent()
{
    callsPercentIsSet_ = false;
}

std::string TopSQLInfoResult::getCpuPercent() const
{
    return cpuPercent_;
}

void TopSQLInfoResult::setCpuPercent(const std::string& value)
{
    cpuPercent_ = value;
    cpuPercentIsSet_ = true;
}

bool TopSQLInfoResult::cpuPercentIsSet() const
{
    return cpuPercentIsSet_;
}

void TopSQLInfoResult::unsetcpuPercent()
{
    cpuPercentIsSet_ = false;
}

std::string TopSQLInfoResult::getIoPercent() const
{
    return ioPercent_;
}

void TopSQLInfoResult::setIoPercent(const std::string& value)
{
    ioPercent_ = value;
    ioPercentIsSet_ = true;
}

bool TopSQLInfoResult::ioPercentIsSet() const
{
    return ioPercentIsSet_;
}

void TopSQLInfoResult::unsetioPercent()
{
    ioPercentIsSet_ = false;
}

std::string TopSQLInfoResult::getCalls() const
{
    return calls_;
}

void TopSQLInfoResult::setCalls(const std::string& value)
{
    calls_ = value;
    callsIsSet_ = true;
}

bool TopSQLInfoResult::callsIsSet() const
{
    return callsIsSet_;
}

void TopSQLInfoResult::unsetcalls()
{
    callsIsSet_ = false;
}

std::string TopSQLInfoResult::getReturnedRows() const
{
    return returnedRows_;
}

void TopSQLInfoResult::setReturnedRows(const std::string& value)
{
    returnedRows_ = value;
    returnedRowsIsSet_ = true;
}

bool TopSQLInfoResult::returnedRowsIsSet() const
{
    return returnedRowsIsSet_;
}

void TopSQLInfoResult::unsetreturnedRows()
{
    returnedRowsIsSet_ = false;
}

std::string TopSQLInfoResult::getTupleRead() const
{
    return tupleRead_;
}

void TopSQLInfoResult::setTupleRead(const std::string& value)
{
    tupleRead_ = value;
    tupleReadIsSet_ = true;
}

bool TopSQLInfoResult::tupleReadIsSet() const
{
    return tupleReadIsSet_;
}

void TopSQLInfoResult::unsettupleRead()
{
    tupleReadIsSet_ = false;
}

std::string TopSQLInfoResult::getAvgElapseTime() const
{
    return avgElapseTime_;
}

void TopSQLInfoResult::setAvgElapseTime(const std::string& value)
{
    avgElapseTime_ = value;
    avgElapseTimeIsSet_ = true;
}

bool TopSQLInfoResult::avgElapseTimeIsSet() const
{
    return avgElapseTimeIsSet_;
}

void TopSQLInfoResult::unsetavgElapseTime()
{
    avgElapseTimeIsSet_ = false;
}

std::string TopSQLInfoResult::getTotalElapseTime() const
{
    return totalElapseTime_;
}

void TopSQLInfoResult::setTotalElapseTime(const std::string& value)
{
    totalElapseTime_ = value;
    totalElapseTimeIsSet_ = true;
}

bool TopSQLInfoResult::totalElapseTimeIsSet() const
{
    return totalElapseTimeIsSet_;
}

void TopSQLInfoResult::unsettotalElapseTime()
{
    totalElapseTimeIsSet_ = false;
}

std::string TopSQLInfoResult::getCpuTime() const
{
    return cpuTime_;
}

void TopSQLInfoResult::setCpuTime(const std::string& value)
{
    cpuTime_ = value;
    cpuTimeIsSet_ = true;
}

bool TopSQLInfoResult::cpuTimeIsSet() const
{
    return cpuTimeIsSet_;
}

void TopSQLInfoResult::unsetcpuTime()
{
    cpuTimeIsSet_ = false;
}

std::string TopSQLInfoResult::getIoTime() const
{
    return ioTime_;
}

void TopSQLInfoResult::setIoTime(const std::string& value)
{
    ioTime_ = value;
    ioTimeIsSet_ = true;
}

bool TopSQLInfoResult::ioTimeIsSet() const
{
    return ioTimeIsSet_;
}

void TopSQLInfoResult::unsetioTime()
{
    ioTimeIsSet_ = false;
}

std::string TopSQLInfoResult::getMinElapseTime() const
{
    return minElapseTime_;
}

void TopSQLInfoResult::setMinElapseTime(const std::string& value)
{
    minElapseTime_ = value;
    minElapseTimeIsSet_ = true;
}

bool TopSQLInfoResult::minElapseTimeIsSet() const
{
    return minElapseTimeIsSet_;
}

void TopSQLInfoResult::unsetminElapseTime()
{
    minElapseTimeIsSet_ = false;
}

std::string TopSQLInfoResult::getMaxElapseTime() const
{
    return maxElapseTime_;
}

void TopSQLInfoResult::setMaxElapseTime(const std::string& value)
{
    maxElapseTime_ = value;
    maxElapseTimeIsSet_ = true;
}

bool TopSQLInfoResult::maxElapseTimeIsSet() const
{
    return maxElapseTimeIsSet_;
}

void TopSQLInfoResult::unsetmaxElapseTime()
{
    maxElapseTimeIsSet_ = false;
}

std::string TopSQLInfoResult::getSqlHitRatio() const
{
    return sqlHitRatio_;
}

void TopSQLInfoResult::setSqlHitRatio(const std::string& value)
{
    sqlHitRatio_ = value;
    sqlHitRatioIsSet_ = true;
}

bool TopSQLInfoResult::sqlHitRatioIsSet() const
{
    return sqlHitRatioIsSet_;
}

void TopSQLInfoResult::unsetsqlHitRatio()
{
    sqlHitRatioIsSet_ = false;
}

std::string TopSQLInfoResult::getNodeId() const
{
    return nodeId_;
}

void TopSQLInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TopSQLInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TopSQLInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string TopSQLInfoResult::getDbName() const
{
    return dbName_;
}

void TopSQLInfoResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TopSQLInfoResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TopSQLInfoResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string TopSQLInfoResult::getNodeName() const
{
    return nodeName_;
}

void TopSQLInfoResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool TopSQLInfoResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void TopSQLInfoResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

}
}
}
}
}


