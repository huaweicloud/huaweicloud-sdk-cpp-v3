

#include "huaweicloud/cloudtest/v1/model/DeleteBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteBranchRequest::DeleteBranchRequest()
{
    branchUri_ = "";
    branchUriIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    isAsync_ = false;
    isAsyncIsSet_ = false;
}

DeleteBranchRequest::~DeleteBranchRequest() = default;

void DeleteBranchRequest::validate()
{
}

web::json::value DeleteBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(isAsyncIsSet_) {
        val[utility::conversions::to_string_t("is_async")] = ModelBase::toJson(isAsync_);
    }

    return val;
}
bool DeleteBranchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_async"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_async"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsync(refVal);
        }
    }
    return ok;
}


std::string DeleteBranchRequest::getBranchUri() const
{
    return branchUri_;
}

void DeleteBranchRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool DeleteBranchRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void DeleteBranchRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

std::string DeleteBranchRequest::getProjectUuid() const
{
    return projectUuid_;
}

void DeleteBranchRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool DeleteBranchRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void DeleteBranchRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

bool DeleteBranchRequest::isIsAsync() const
{
    return isAsync_;
}

void DeleteBranchRequest::setIsAsync(bool value)
{
    isAsync_ = value;
    isAsyncIsSet_ = true;
}

bool DeleteBranchRequest::isAsyncIsSet() const
{
    return isAsyncIsSet_;
}

void DeleteBranchRequest::unsetisAsync()
{
    isAsyncIsSet_ = false;
}

}
}
}
}
}


