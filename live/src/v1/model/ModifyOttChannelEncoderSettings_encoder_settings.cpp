

#include "huaweicloud/live/v1/model/ModifyOttChannelEncoderSettings_encoder_settings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelEncoderSettings_encoder_settings::ModifyOttChannelEncoderSettings_encoder_settings()
{
    templateId_ = "";
    templateIdIsSet_ = false;
}

ModifyOttChannelEncoderSettings_encoder_settings::~ModifyOttChannelEncoderSettings_encoder_settings() = default;

void ModifyOttChannelEncoderSettings_encoder_settings::validate()
{
}

web::json::value ModifyOttChannelEncoderSettings_encoder_settings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool ModifyOttChannelEncoderSettings_encoder_settings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ModifyOttChannelEncoderSettings_encoder_settings::getTemplateId() const
{
    return templateId_;
}

void ModifyOttChannelEncoderSettings_encoder_settings::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ModifyOttChannelEncoderSettings_encoder_settings::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ModifyOttChannelEncoderSettings_encoder_settings::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


