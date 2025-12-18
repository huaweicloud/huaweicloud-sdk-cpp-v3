

#include "huaweicloud/meeting/v1/model/CategorySuggestions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CategorySuggestions::CategorySuggestions()
{
    politics_ = "";
    politicsIsSet_ = false;
    terrorism_ = "";
    terrorismIsSet_ = false;
    porn_ = "";
    pornIsSet_ = false;
}

CategorySuggestions::~CategorySuggestions() = default;

void CategorySuggestions::validate()
{
}

web::json::value CategorySuggestions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(politicsIsSet_) {
        val[utility::conversions::to_string_t("politics")] = ModelBase::toJson(politics_);
    }
    if(terrorismIsSet_) {
        val[utility::conversions::to_string_t("terrorism")] = ModelBase::toJson(terrorism_);
    }
    if(pornIsSet_) {
        val[utility::conversions::to_string_t("porn")] = ModelBase::toJson(porn_);
    }

    return val;
}
bool CategorySuggestions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("politics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("politics"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolitics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terrorism"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terrorism"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerrorism(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("porn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("porn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorn(refVal);
        }
    }
    return ok;
}


std::string CategorySuggestions::getPolitics() const
{
    return politics_;
}

void CategorySuggestions::setPolitics(const std::string& value)
{
    politics_ = value;
    politicsIsSet_ = true;
}

bool CategorySuggestions::politicsIsSet() const
{
    return politicsIsSet_;
}

void CategorySuggestions::unsetpolitics()
{
    politicsIsSet_ = false;
}

std::string CategorySuggestions::getTerrorism() const
{
    return terrorism_;
}

void CategorySuggestions::setTerrorism(const std::string& value)
{
    terrorism_ = value;
    terrorismIsSet_ = true;
}

bool CategorySuggestions::terrorismIsSet() const
{
    return terrorismIsSet_;
}

void CategorySuggestions::unsetterrorism()
{
    terrorismIsSet_ = false;
}

std::string CategorySuggestions::getPorn() const
{
    return porn_;
}

void CategorySuggestions::setPorn(const std::string& value)
{
    porn_ = value;
    pornIsSet_ = true;
}

bool CategorySuggestions::pornIsSet() const
{
    return pornIsSet_;
}

void CategorySuggestions::unsetporn()
{
    pornIsSet_ = false;
}

}
}
}
}
}


