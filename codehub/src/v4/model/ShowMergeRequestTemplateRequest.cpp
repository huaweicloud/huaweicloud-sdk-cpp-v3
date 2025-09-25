

#include "huaweicloud/codehub/v4/model/ShowMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowMergeRequestTemplateRequest::ShowMergeRequestTemplateRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
}

ShowMergeRequestTemplateRequest::~ShowMergeRequestTemplateRequest() = default;

void ShowMergeRequestTemplateRequest::validate()
{
}

web::json::value ShowMergeRequestTemplateRequest::toJson() const
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
bool ShowMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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


int32_t ShowMergeRequestTemplateRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestTemplateRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestTemplateRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestTemplateRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void ShowMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


