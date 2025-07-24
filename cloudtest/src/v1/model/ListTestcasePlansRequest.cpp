

#include "huaweicloud/cloudtest/v1/model/ListTestcasePlansRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestcasePlansRequest::ListTestcasePlansRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    bodyIsSet_ = false;
}

ListTestcasePlansRequest::~ListTestcasePlansRequest() = default;

void ListTestcasePlansRequest::validate()
{
}

web::json::value ListTestcasePlansRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTestcasePlansRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TestcasePlanQueryParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTestcasePlansRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListTestcasePlansRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListTestcasePlansRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListTestcasePlansRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListTestcasePlansRequest::getBranchUri() const
{
    return branchUri_;
}

void ListTestcasePlansRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool ListTestcasePlansRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void ListTestcasePlansRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

TestcasePlanQueryParam ListTestcasePlansRequest::getBody() const
{
    return body_;
}

void ListTestcasePlansRequest::setBody(const TestcasePlanQueryParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTestcasePlansRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTestcasePlansRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


