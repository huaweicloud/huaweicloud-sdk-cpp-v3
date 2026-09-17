

#include "huaweicloud/cloudtest/v1/model/ShowTestBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestBranchRequest::ShowTestBranchRequest()
{
    branchUri_ = "";
    branchUriIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ShowTestBranchRequest::~ShowTestBranchRequest() = default;

void ShowTestBranchRequest::validate()
{
}

web::json::value ShowTestBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ShowTestBranchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    return ok;
}


std::string ShowTestBranchRequest::getBranchUri() const
{
    return branchUri_;
}

void ShowTestBranchRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool ShowTestBranchRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void ShowTestBranchRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

std::string ShowTestBranchRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowTestBranchRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowTestBranchRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowTestBranchRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


