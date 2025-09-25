

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineTemplateResponse::CreatePipelineTemplateResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
}

CreatePipelineTemplateResponse::~CreatePipelineTemplateResponse() = default;

void CreatePipelineTemplateResponse::validate()
{
}

web::json::value CreatePipelineTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("templateId")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreatePipelineTemplateResponse::fromJson(const web::json::value& val)
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


std::string CreatePipelineTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreatePipelineTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreatePipelineTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreatePipelineTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


