

#include "huaweicloud/codeartsdeploy/v2/model/ListTaskSuccessRateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListTaskSuccessRateRequest::ListTaskSuccessRateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTaskSuccessRateRequest::~ListTaskSuccessRateRequest() = default;

void ListTaskSuccessRateRequest::validate()
{
}

web::json::value ListTaskSuccessRateRequest::toJson() const
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
bool ListTaskSuccessRateRequest::fromJson(const web::json::value& val)
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
            TasksSuccessRateQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTaskSuccessRateRequest::getProjectId() const
{
    return projectId_;
}

void ListTaskSuccessRateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTaskSuccessRateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTaskSuccessRateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

TasksSuccessRateQuery ListTaskSuccessRateRequest::getBody() const
{
    return body_;
}

void ListTaskSuccessRateRequest::setBody(const TasksSuccessRateQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTaskSuccessRateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTaskSuccessRateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


