

#include "huaweicloud/drs/v5/model/ContentCompareOverviewInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ContentCompareOverviewInfo::ContentCompareOverviewInfo()
{
    sourceDb_ = "";
    sourceDbIsSet_ = false;
    targetDb_ = "";
    targetDbIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    compareResult_ = false;
    compareResultIsSet_ = false;
}

ContentCompareOverviewInfo::~ContentCompareOverviewInfo() = default;

void ContentCompareOverviewInfo::validate()
{
}

web::json::value ContentCompareOverviewInfo::toJson() const
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
    if(compareResultIsSet_) {
        val[utility::conversions::to_string_t("compare_result")] = ModelBase::toJson(compareResult_);
    }

    return val;
}
bool ContentCompareOverviewInfo::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResult(refVal);
        }
    }
    return ok;
}


std::string ContentCompareOverviewInfo::getSourceDb() const
{
    return sourceDb_;
}

void ContentCompareOverviewInfo::setSourceDb(const std::string& value)
{
    sourceDb_ = value;
    sourceDbIsSet_ = true;
}

bool ContentCompareOverviewInfo::sourceDbIsSet() const
{
    return sourceDbIsSet_;
}

void ContentCompareOverviewInfo::unsetsourceDb()
{
    sourceDbIsSet_ = false;
}

std::string ContentCompareOverviewInfo::getTargetDb() const
{
    return targetDb_;
}

void ContentCompareOverviewInfo::setTargetDb(const std::string& value)
{
    targetDb_ = value;
    targetDbIsSet_ = true;
}

bool ContentCompareOverviewInfo::targetDbIsSet() const
{
    return targetDbIsSet_;
}

void ContentCompareOverviewInfo::unsettargetDb()
{
    targetDbIsSet_ = false;
}

std::string ContentCompareOverviewInfo::getStatus() const
{
    return status_;
}

void ContentCompareOverviewInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ContentCompareOverviewInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ContentCompareOverviewInfo::unsetstatus()
{
    statusIsSet_ = false;
}

bool ContentCompareOverviewInfo::isCompareResult() const
{
    return compareResult_;
}

void ContentCompareOverviewInfo::setCompareResult(bool value)
{
    compareResult_ = value;
    compareResultIsSet_ = true;
}

bool ContentCompareOverviewInfo::compareResultIsSet() const
{
    return compareResultIsSet_;
}

void ContentCompareOverviewInfo::unsetcompareResult()
{
    compareResultIsSet_ = false;
}

}
}
}
}
}


