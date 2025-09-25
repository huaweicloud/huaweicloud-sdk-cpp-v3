

#include "huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesLatestStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BatchShowPipelinesLatestStatusRequest::BatchShowPipelinesLatestStatusRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchShowPipelinesLatestStatusRequest::~BatchShowPipelinesLatestStatusRequest() = default;

void BatchShowPipelinesLatestStatusRequest::validate()
{
}

web::json::value BatchShowPipelinesLatestStatusRequest::toJson() const
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
bool BatchShowPipelinesLatestStatusRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchShowPipelinesLatestStatusRequest::getProjectId() const
{
    return projectId_;
}

void BatchShowPipelinesLatestStatusRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchShowPipelinesLatestStatusRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchShowPipelinesLatestStatusRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& BatchShowPipelinesLatestStatusRequest::getBody()
{
    return body_;
}

void BatchShowPipelinesLatestStatusRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowPipelinesLatestStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowPipelinesLatestStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


