

#include "huaweicloud/cbr/v1/model/ShowMigrateStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMigrateStatusResponse::ShowMigrateStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    projectStatusIsSet_ = false;
}

ShowMigrateStatusResponse::~ShowMigrateStatusResponse() = default;

void ShowMigrateStatusResponse::validate()
{
}

web::json::value ShowMigrateStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(projectStatusIsSet_) {
        val[utility::conversions::to_string_t("project_status")] = ModelBase::toJson(projectStatus_);
    }

    return val;
}

bool ShowMigrateStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_status"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainMigrateProjectStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectStatus(refVal);
        }
    }
    return ok;
}


std::string ShowMigrateStatusResponse::getStatus() const
{
    return status_;
}

void ShowMigrateStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMigrateStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMigrateStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<DomainMigrateProjectStatus>& ShowMigrateStatusResponse::getProjectStatus()
{
    return projectStatus_;
}

void ShowMigrateStatusResponse::setProjectStatus(const std::vector<DomainMigrateProjectStatus>& value)
{
    projectStatus_ = value;
    projectStatusIsSet_ = true;
}

bool ShowMigrateStatusResponse::projectStatusIsSet() const
{
    return projectStatusIsSet_;
}

void ShowMigrateStatusResponse::unsetprojectStatus()
{
    projectStatusIsSet_ = false;
}

}
}
}
}
}


