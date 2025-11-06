

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryLabelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryLabelRequest::UpdateRepositoryLabelRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryLabelRequest::~UpdateRepositoryLabelRequest() = default;

void UpdateRepositoryLabelRequest::validate()
{
}

web::json::value UpdateRepositoryLabelRequest::toJson() const
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
bool UpdateRepositoryLabelRequest::fromJson(const web::json::value& val)
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
            BodyPutLabelDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryLabelRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryLabelRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryLabelRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryLabelRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BodyPutLabelDto UpdateRepositoryLabelRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryLabelRequest::setBody(const BodyPutLabelDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryLabelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryLabelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


