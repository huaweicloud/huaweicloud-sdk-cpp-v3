

#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestTemplateRequest::UpdateMergeRequestTemplateRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestTemplateRequest::~UpdateMergeRequestTemplateRequest() = default;

void UpdateMergeRequestTemplateRequest::validate()
{
}

web::json::value UpdateMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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


int32_t UpdateMergeRequestTemplateRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestTemplateRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestTemplateRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestTemplateRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void UpdateMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

CreateMergeRequestTemplateDto UpdateMergeRequestTemplateRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestTemplateRequest::setBody(const CreateMergeRequestTemplateDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


