

#include "huaweicloud/sis/v1/model/GenerateSpeechRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




GenerateSpeechRequestBody::GenerateSpeechRequestBody()
{
    text_ = "";
    textIsSet_ = false;
    configIsSet_ = false;
}

GenerateSpeechRequestBody::~GenerateSpeechRequestBody() = default;

void GenerateSpeechRequestBody::validate()
{
}

web::json::value GenerateSpeechRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }

    return val;
}
bool GenerateSpeechRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            GenerateSpeechRequestBody_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    return ok;
}


std::string GenerateSpeechRequestBody::getText() const
{
    return text_;
}

void GenerateSpeechRequestBody::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool GenerateSpeechRequestBody::textIsSet() const
{
    return textIsSet_;
}

void GenerateSpeechRequestBody::unsettext()
{
    textIsSet_ = false;
}

GenerateSpeechRequestBody_config GenerateSpeechRequestBody::getConfig() const
{
    return config_;
}

void GenerateSpeechRequestBody::setConfig(const GenerateSpeechRequestBody_config& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool GenerateSpeechRequestBody::configIsSet() const
{
    return configIsSet_;
}

void GenerateSpeechRequestBody::unsetconfig()
{
    configIsSet_ = false;
}

}
}
}
}
}


