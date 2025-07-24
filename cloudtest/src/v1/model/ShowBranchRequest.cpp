

#include "huaweicloud/cloudtest/v1/model/ShowBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowBranchRequest::ShowBranchRequest()
{
    branchId_ = "";
    branchIdIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ShowBranchRequest::~ShowBranchRequest() = default;

void ShowBranchRequest::validate()
{
}

web::json::value ShowBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIdIsSet_) {
        val[utility::conversions::to_string_t("branch_id")] = ModelBase::toJson(branchId_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ShowBranchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchId(refVal);
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


std::string ShowBranchRequest::getBranchId() const
{
    return branchId_;
}

void ShowBranchRequest::setBranchId(const std::string& value)
{
    branchId_ = value;
    branchIdIsSet_ = true;
}

bool ShowBranchRequest::branchIdIsSet() const
{
    return branchIdIsSet_;
}

void ShowBranchRequest::unsetbranchId()
{
    branchIdIsSet_ = false;
}

std::string ShowBranchRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowBranchRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowBranchRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowBranchRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


