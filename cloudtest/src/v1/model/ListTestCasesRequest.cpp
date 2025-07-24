

#include "huaweicloud/cloudtest/v1/model/ListTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesRequest::ListTestCasesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTestCasesRequest::~ListTestCasesRequest() = default;

void ListTestCasesRequest::validate()
{
}

web::json::value ListTestCasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTestCasesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListTestCasesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTestCasesRequest::getProjectId() const
{
    return projectId_;
}

void ListTestCasesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestCasesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestCasesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ListTestCasesRequestBody ListTestCasesRequest::getBody() const
{
    return body_;
}

void ListTestCasesRequest::setBody(const ListTestCasesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTestCasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTestCasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


