

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

}
}
}
}
}


