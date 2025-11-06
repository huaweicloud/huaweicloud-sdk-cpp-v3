

#include "huaweicloud/codeartsrepo/v4/model/AddRepositoryWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




AddRepositoryWebhookRequest::AddRepositoryWebhookRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddRepositoryWebhookRequest::~AddRepositoryWebhookRequest() = default;

void AddRepositoryWebhookRequest::validate()
{
}

web::json::value AddRepositoryWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddRepositoryWebhookRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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


int32_t AddRepositoryWebhookRequest::getRepositoryId() const
{
    return repositoryId_;
}

void AddRepositoryWebhookRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddRepositoryWebhookRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddRepositoryWebhookRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

WebhookParamsDto AddRepositoryWebhookRequest::getBody() const
{
    return body_;
}

void AddRepositoryWebhookRequest::setBody(const WebhookParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRepositoryWebhookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRepositoryWebhookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


