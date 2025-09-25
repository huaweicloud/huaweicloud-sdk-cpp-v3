

#include "huaweicloud/codeartspipeline/v2/model/UpdatePipelineTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePipelineTemplateResponse::UpdatePipelineTemplateResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
}

UpdatePipelineTemplateResponse::~UpdatePipelineTemplateResponse() = default;

void UpdatePipelineTemplateResponse::validate()
{
}

web::json::value UpdatePipelineTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("templateId")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool UpdatePipelineTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templateId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


std::string UpdatePipelineTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void UpdatePipelineTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdatePipelineTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdatePipelineTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


