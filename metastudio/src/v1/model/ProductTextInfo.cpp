

#include "huaweicloud/metastudio/v1/model/ProductTextInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductTextInfo::ProductTextInfo()
{
    title_ = "";
    titleIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
}

ProductTextInfo::~ProductTextInfo() = default;

void ProductTextInfo::validate()
{
}

web::json::value ProductTextInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool ProductTextInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
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


std::string ProductTextInfo::getTitle() const
{
    return title_;
}

void ProductTextInfo::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ProductTextInfo::titleIsSet() const
{
    return titleIsSet_;
}

void ProductTextInfo::unsettitle()
{
    titleIsSet_ = false;
}

std::string ProductTextInfo::getText() const
{
    return text_;
}

void ProductTextInfo::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool ProductTextInfo::textIsSet() const
{
    return textIsSet_;
}

void ProductTextInfo::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


