

#include "huaweicloud/mpc/v1/model/CreateQualityEnhanceTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateQualityEnhanceTemplateResponse::CreateQualityEnhanceTemplateResponse()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
}

CreateQualityEnhanceTemplateResponse::~CreateQualityEnhanceTemplateResponse() = default;

void CreateQualityEnhanceTemplateResponse::validate()
{
}

web::json::value CreateQualityEnhanceTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreateQualityEnhanceTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t CreateQualityEnhanceTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreateQualityEnhanceTemplateResponse::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateQualityEnhanceTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateQualityEnhanceTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


