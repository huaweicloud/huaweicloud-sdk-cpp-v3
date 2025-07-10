

#include "huaweicloud/rgc/v1/model/Content.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




Content::Content()
{
    en_ = "";
    enIsSet_ = false;
    ch_ = "";
    chIsSet_ = false;
}

Content::~Content() = default;

void Content::validate()
{
}

web::json::value Content::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enIsSet_) {
        val[utility::conversions::to_string_t("en")] = ModelBase::toJson(en_);
    }
    if(chIsSet_) {
        val[utility::conversions::to_string_t("ch")] = ModelBase::toJson(ch_);
    }

    return val;
}
bool Content::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCh(refVal);
        }
    }
    return ok;
}


std::string Content::getEn() const
{
    return en_;
}

void Content::setEn(const std::string& value)
{
    en_ = value;
    enIsSet_ = true;
}

bool Content::enIsSet() const
{
    return enIsSet_;
}

void Content::unseten()
{
    enIsSet_ = false;
}

std::string Content::getCh() const
{
    return ch_;
}

void Content::setCh(const std::string& value)
{
    ch_ = value;
    chIsSet_ = true;
}

bool Content::chIsSet() const
{
    return chIsSet_;
}

void Content::unsetch()
{
    chIsSet_ = false;
}

}
}
}
}
}


