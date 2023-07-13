

#include "huaweicloud/drs/v5/model/LineCompareOverviewInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




LineCompareOverviewInfo::LineCompareOverviewInfo()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

LineCompareOverviewInfo::~LineCompareOverviewInfo() = default;

void LineCompareOverviewInfo::validate()
{
}

web::json::value LineCompareOverviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool LineCompareOverviewInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
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
    return ok;
}

std::string LineCompareOverviewInfo::getSourceDbName() const
{
    return sourceDbName_;
}

void LineCompareOverviewInfo::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool LineCompareOverviewInfo::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void LineCompareOverviewInfo::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string LineCompareOverviewInfo::getTargetDbName() const
{
    return targetDbName_;
}

void LineCompareOverviewInfo::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool LineCompareOverviewInfo::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void LineCompareOverviewInfo::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string LineCompareOverviewInfo::getStatus() const
{
    return status_;
}

void LineCompareOverviewInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LineCompareOverviewInfo::statusIsSet() const
{
    return statusIsSet_;
}

void LineCompareOverviewInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


