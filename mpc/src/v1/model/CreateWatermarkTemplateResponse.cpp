

#include "huaweicloud/mpc/v1/model/CreateWatermarkTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateWatermarkTemplateResponse::CreateWatermarkTemplateResponse()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
}

CreateWatermarkTemplateResponse::~CreateWatermarkTemplateResponse() = default;

void CreateWatermarkTemplateResponse::validate()
{
}

web::json::value CreateWatermarkTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreateWatermarkTemplateResponse::fromJson(const web::json::value& val)
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


int32_t CreateWatermarkTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreateWatermarkTemplateResponse::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateWatermarkTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


