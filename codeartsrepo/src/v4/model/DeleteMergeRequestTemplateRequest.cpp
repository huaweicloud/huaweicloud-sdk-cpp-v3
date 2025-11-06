

#include "huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteMergeRequestTemplateRequest::DeleteMergeRequestTemplateRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
}

DeleteMergeRequestTemplateRequest::~DeleteMergeRequestTemplateRequest() = default;

void DeleteMergeRequestTemplateRequest::validate()
{
}

web::json::value DeleteMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeleteMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t DeleteMergeRequestTemplateRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteMergeRequestTemplateRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteMergeRequestTemplateRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteMergeRequestTemplateRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t DeleteMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


