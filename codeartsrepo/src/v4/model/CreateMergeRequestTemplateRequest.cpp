

#include "huaweicloud/codeartsrepo/v4/model/CreateMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateMergeRequestTemplateRequest::CreateMergeRequestTemplateRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMergeRequestTemplateRequest::~CreateMergeRequestTemplateRequest() = default;

void CreateMergeRequestTemplateRequest::validate()
{
}

web::json::value CreateMergeRequestTemplateRequest::toJson() const
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
bool CreateMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
            CreateMergeRequestTemplateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateMergeRequestTemplateRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestTemplateRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestTemplateRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestTemplateRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CreateMergeRequestTemplateDto CreateMergeRequestTemplateRequest::getBody() const
{
    return body_;
}

void CreateMergeRequestTemplateRequest::setBody(const CreateMergeRequestTemplateDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


