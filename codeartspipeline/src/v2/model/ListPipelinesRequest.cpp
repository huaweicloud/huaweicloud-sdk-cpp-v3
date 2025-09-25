

#include "huaweicloud/codeartspipeline/v2/model/ListPipelinesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelinesRequest::ListPipelinesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListPipelinesRequest::~ListPipelinesRequest() = default;

void ListPipelinesRequest::validate()
{
}

web::json::value ListPipelinesRequest::toJson() const
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
bool ListPipelinesRequest::fromJson(const web::json::value& val)
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
            ListPipelineQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListPipelinesRequest::getProjectId() const
{
    return projectId_;
}

void ListPipelinesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipelinesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipelinesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ListPipelineQuery ListPipelinesRequest::getBody() const
{
    return body_;
}

void ListPipelinesRequest::setBody(const ListPipelineQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPipelinesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPipelinesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


