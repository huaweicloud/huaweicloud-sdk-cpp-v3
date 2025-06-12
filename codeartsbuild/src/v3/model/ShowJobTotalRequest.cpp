

#include "huaweicloud/codeartsbuild/v3/model/ShowJobTotalRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobTotalRequest::ShowJobTotalRequest()
{
    buildProjectId_ = "";
    buildProjectIdIsSet_ = false;
    fromDate_ = "";
    fromDateIsSet_ = false;
    toDate_ = "";
    toDateIsSet_ = false;
}

ShowJobTotalRequest::~ShowJobTotalRequest() = default;

void ShowJobTotalRequest::validate()
{
}

web::json::value ShowJobTotalRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildProjectIdIsSet_) {
        val[utility::conversions::to_string_t("build_project_id")] = ModelBase::toJson(buildProjectId_);
    }
    if(fromDateIsSet_) {
        val[utility::conversions::to_string_t("from_date")] = ModelBase::toJson(fromDate_);
    }
    if(toDateIsSet_) {
        val[utility::conversions::to_string_t("to_date")] = ModelBase::toJson(toDate_);
    }

    return val;
}
bool ShowJobTotalRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToDate(refVal);
        }
    }
    return ok;
}


std::string ShowJobTotalRequest::getBuildProjectId() const
{
    return buildProjectId_;
}

void ShowJobTotalRequest::setBuildProjectId(const std::string& value)
{
    buildProjectId_ = value;
    buildProjectIdIsSet_ = true;
}

bool ShowJobTotalRequest::buildProjectIdIsSet() const
{
    return buildProjectIdIsSet_;
}

void ShowJobTotalRequest::unsetbuildProjectId()
{
    buildProjectIdIsSet_ = false;
}

std::string ShowJobTotalRequest::getFromDate() const
{
    return fromDate_;
}

void ShowJobTotalRequest::setFromDate(const std::string& value)
{
    fromDate_ = value;
    fromDateIsSet_ = true;
}

bool ShowJobTotalRequest::fromDateIsSet() const
{
    return fromDateIsSet_;
}

void ShowJobTotalRequest::unsetfromDate()
{
    fromDateIsSet_ = false;
}

std::string ShowJobTotalRequest::getToDate() const
{
    return toDate_;
}

void ShowJobTotalRequest::setToDate(const std::string& value)
{
    toDate_ = value;
    toDateIsSet_ = true;
}

bool ShowJobTotalRequest::toDateIsSet() const
{
    return toDateIsSet_;
}

void ShowJobTotalRequest::unsettoDate()
{
    toDateIsSet_ = false;
}

}
}
}
}
}


