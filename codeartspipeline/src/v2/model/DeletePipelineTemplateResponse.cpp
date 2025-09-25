

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineTemplateResponse::DeletePipelineTemplateResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
}

DeletePipelineTemplateResponse::~DeletePipelineTemplateResponse() = default;

void DeletePipelineTemplateResponse::validate()
{
}

web::json::value DeletePipelineTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("templateId")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeletePipelineTemplateResponse::fromJson(const web::json::value& val)
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


std::string DeletePipelineTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void DeletePipelineTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeletePipelineTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeletePipelineTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


