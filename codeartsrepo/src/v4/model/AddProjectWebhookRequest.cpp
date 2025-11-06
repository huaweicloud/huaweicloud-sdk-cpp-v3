

#include "huaweicloud/codeartsrepo/v4/model/AddProjectWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




AddProjectWebhookRequest::AddProjectWebhookRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddProjectWebhookRequest::~AddProjectWebhookRequest() = default;

void AddProjectWebhookRequest::validate()
{
}

web::json::value AddProjectWebhookRequest::toJson() const
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
bool AddProjectWebhookRequest::fromJson(const web::json::value& val)
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
            WebhookParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddProjectWebhookRequest::getProjectId() const
{
    return projectId_;
}

void AddProjectWebhookRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddProjectWebhookRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddProjectWebhookRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

WebhookParamsDto AddProjectWebhookRequest::getBody() const
{
    return body_;
}

void AddProjectWebhookRequest::setBody(const WebhookParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddProjectWebhookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddProjectWebhookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


