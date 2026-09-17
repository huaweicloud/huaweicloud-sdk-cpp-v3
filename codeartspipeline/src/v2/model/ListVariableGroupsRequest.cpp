

#include "huaweicloud/codeartspipeline/v2/model/ListVariableGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListVariableGroupsRequest::ListVariableGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListVariableGroupsRequest::~ListVariableGroupsRequest() = default;

void ListVariableGroupsRequest::validate()
{
}

web::json::value ListVariableGroupsRequest::toJson() const
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
bool ListVariableGroupsRequest::fromJson(const web::json::value& val)
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
            ListVariableGroupsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListVariableGroupsRequest::getProjectId() const
{
    return projectId_;
}

void ListVariableGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListVariableGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListVariableGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ListVariableGroupsReq ListVariableGroupsRequest::getBody() const
{
    return body_;
}

void ListVariableGroupsRequest::setBody(const ListVariableGroupsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListVariableGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListVariableGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


