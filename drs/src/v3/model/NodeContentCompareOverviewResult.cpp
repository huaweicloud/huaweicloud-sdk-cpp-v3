

#include "huaweicloud/drs/v3/model/NodeContentCompareOverviewResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




NodeContentCompareOverviewResult::NodeContentCompareOverviewResult()
{
    sourceDb_ = "";
    sourceDbIsSet_ = false;
    targetDb_ = "";
    targetDbIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    compareNum_ = 0;
    compareNumIsSet_ = false;
    compareEndNum_ = 0;
    compareEndNumIsSet_ = false;
    dataInconsistentNum_ = 0;
    dataInconsistentNumIsSet_ = false;
    uncomparableNum_ = 0;
    uncomparableNumIsSet_ = false;
}

NodeContentCompareOverviewResult::~NodeContentCompareOverviewResult() = default;

void NodeContentCompareOverviewResult::validate()
{
}

web::json::value NodeContentCompareOverviewResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbIsSet_) {
        val[utility::conversions::to_string_t("source_db")] = ModelBase::toJson(sourceDb_);
    }
    if(targetDbIsSet_) {
        val[utility::conversions::to_string_t("target_db")] = ModelBase::toJson(targetDb_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(compareNumIsSet_) {
        val[utility::conversions::to_string_t("compare_num")] = ModelBase::toJson(compareNum_);
    }
    if(compareEndNumIsSet_) {
        val[utility::conversions::to_string_t("compare_end_num")] = ModelBase::toJson(compareEndNum_);
    }
    if(dataInconsistentNumIsSet_) {
        val[utility::conversions::to_string_t("data_inconsistent_num")] = ModelBase::toJson(dataInconsistentNum_);
    }
    if(uncomparableNumIsSet_) {
        val[utility::conversions::to_string_t("uncomparable_num")] = ModelBase::toJson(uncomparableNum_);
    }

    return val;
}
bool NodeContentCompareOverviewResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_end_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_end_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareEndNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_inconsistent_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_inconsistent_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataInconsistentNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uncomparable_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uncomparable_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUncomparableNum(refVal);
        }
    }
    return ok;
}


std::string NodeContentCompareOverviewResult::getSourceDb() const
{
    return sourceDb_;
}

void NodeContentCompareOverviewResult::setSourceDb(const std::string& value)
{
    sourceDb_ = value;
    sourceDbIsSet_ = true;
}

bool NodeContentCompareOverviewResult::sourceDbIsSet() const
{
    return sourceDbIsSet_;
}

void NodeContentCompareOverviewResult::unsetsourceDb()
{
    sourceDbIsSet_ = false;
}

std::string NodeContentCompareOverviewResult::getTargetDb() const
{
    return targetDb_;
}

void NodeContentCompareOverviewResult::setTargetDb(const std::string& value)
{
    targetDb_ = value;
    targetDbIsSet_ = true;
}

bool NodeContentCompareOverviewResult::targetDbIsSet() const
{
    return targetDbIsSet_;
}

void NodeContentCompareOverviewResult::unsettargetDb()
{
    targetDbIsSet_ = false;
}

int32_t NodeContentCompareOverviewResult::getStatus() const
{
    return status_;
}

void NodeContentCompareOverviewResult::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodeContentCompareOverviewResult::statusIsSet() const
{
    return statusIsSet_;
}

void NodeContentCompareOverviewResult::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t NodeContentCompareOverviewResult::getCompareNum() const
{
    return compareNum_;
}

void NodeContentCompareOverviewResult::setCompareNum(int32_t value)
{
    compareNum_ = value;
    compareNumIsSet_ = true;
}

bool NodeContentCompareOverviewResult::compareNumIsSet() const
{
    return compareNumIsSet_;
}

void NodeContentCompareOverviewResult::unsetcompareNum()
{
    compareNumIsSet_ = false;
}

int32_t NodeContentCompareOverviewResult::getCompareEndNum() const
{
    return compareEndNum_;
}

void NodeContentCompareOverviewResult::setCompareEndNum(int32_t value)
{
    compareEndNum_ = value;
    compareEndNumIsSet_ = true;
}

bool NodeContentCompareOverviewResult::compareEndNumIsSet() const
{
    return compareEndNumIsSet_;
}

void NodeContentCompareOverviewResult::unsetcompareEndNum()
{
    compareEndNumIsSet_ = false;
}

int32_t NodeContentCompareOverviewResult::getDataInconsistentNum() const
{
    return dataInconsistentNum_;
}

void NodeContentCompareOverviewResult::setDataInconsistentNum(int32_t value)
{
    dataInconsistentNum_ = value;
    dataInconsistentNumIsSet_ = true;
}

bool NodeContentCompareOverviewResult::dataInconsistentNumIsSet() const
{
    return dataInconsistentNumIsSet_;
}

void NodeContentCompareOverviewResult::unsetdataInconsistentNum()
{
    dataInconsistentNumIsSet_ = false;
}

int32_t NodeContentCompareOverviewResult::getUncomparableNum() const
{
    return uncomparableNum_;
}

void NodeContentCompareOverviewResult::setUncomparableNum(int32_t value)
{
    uncomparableNum_ = value;
    uncomparableNumIsSet_ = true;
}

bool NodeContentCompareOverviewResult::uncomparableNumIsSet() const
{
    return uncomparableNumIsSet_;
}

void NodeContentCompareOverviewResult::unsetuncomparableNum()
{
    uncomparableNumIsSet_ = false;
}

}
}
}
}
}


