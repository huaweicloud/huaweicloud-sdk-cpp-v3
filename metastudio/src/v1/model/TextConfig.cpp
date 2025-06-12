

#include "huaweicloud/metastudio/v1/model/TextConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TextConfig::TextConfig()
{
    text_ = "";
    textIsSet_ = false;
}

TextConfig::~TextConfig() = default;

void TextConfig::validate()
{
}

web::json::value TextConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool TextConfig::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TextConfig::getText() const
{
    return text_;
}

void TextConfig::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool TextConfig::textIsSet() const
{
    return textIsSet_;
}

void TextConfig::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


