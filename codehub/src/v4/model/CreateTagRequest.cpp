

#include "huaweicloud/codehub/v4/model/CreateTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateTagRequest::CreateTagRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTagRequest::~CreateTagRequest() = default;

void CreateTagRequest::validate()
{
}

web::json::value CreateTagRequest::toJson() const
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
bool CreateTagRequest::fromJson(const web::json::value& val)
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
            CreateTagDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateTagRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateTagRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateTagRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateTagRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CreateTagDto CreateTagRequest::getBody() const
{
    return body_;
}

void CreateTagRequest::setBody(const CreateTagDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


