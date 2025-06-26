

#include "huaweicloud/codeartsbuild/v3/model/SaveTemplateUsedInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SaveTemplateUsedInfoRequestBody::SaveTemplateUsedInfoRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

SaveTemplateUsedInfoRequestBody::~SaveTemplateUsedInfoRequestBody() = default;

void SaveTemplateUsedInfoRequestBody::validate()
{
}

web::json::value SaveTemplateUsedInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool SaveTemplateUsedInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


std::string SaveTemplateUsedInfoRequestBody::getJobId() const
{
    return jobId_;
}

void SaveTemplateUsedInfoRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SaveTemplateUsedInfoRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SaveTemplateUsedInfoRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SaveTemplateUsedInfoRequestBody::getTemplateId() const
{
    return templateId_;
}

void SaveTemplateUsedInfoRequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool SaveTemplateUsedInfoRequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void SaveTemplateUsedInfoRequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


