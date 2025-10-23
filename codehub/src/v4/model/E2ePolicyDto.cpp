

#include "huaweicloud/codehub/v4/model/E2ePolicyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




E2ePolicyDto::E2ePolicyDto()
{
    autoExtract_ = false;
    autoExtractIsSet_ = false;
    prefixSymbol_ = "";
    prefixSymbolIsSet_ = false;
    separator_ = "";
    separatorIsSet_ = false;
    suffixSymbol_ = "";
    suffixSymbolIsSet_ = false;
}

E2ePolicyDto::~E2ePolicyDto() = default;

void E2ePolicyDto::validate()
{
}

web::json::value E2ePolicyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoExtractIsSet_) {
        val[utility::conversions::to_string_t("auto_extract")] = ModelBase::toJson(autoExtract_);
    }
    if(prefixSymbolIsSet_) {
        val[utility::conversions::to_string_t("prefix_symbol")] = ModelBase::toJson(prefixSymbol_);
    }
    if(separatorIsSet_) {
        val[utility::conversions::to_string_t("separator")] = ModelBase::toJson(separator_);
    }
    if(suffixSymbolIsSet_) {
        val[utility::conversions::to_string_t("suffix_symbol")] = ModelBase::toJson(suffixSymbol_);
    }

    return val;
}
bool E2ePolicyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_extract"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_extract"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoExtract(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix_symbol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix_symbol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefixSymbol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("separator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("separator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeparator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suffix_symbol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suffix_symbol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuffixSymbol(refVal);
        }
    }
    return ok;
}


bool E2ePolicyDto::isAutoExtract() const
{
    return autoExtract_;
}

void E2ePolicyDto::setAutoExtract(bool value)
{
    autoExtract_ = value;
    autoExtractIsSet_ = true;
}

bool E2ePolicyDto::autoExtractIsSet() const
{
    return autoExtractIsSet_;
}

void E2ePolicyDto::unsetautoExtract()
{
    autoExtractIsSet_ = false;
}

std::string E2ePolicyDto::getPrefixSymbol() const
{
    return prefixSymbol_;
}

void E2ePolicyDto::setPrefixSymbol(const std::string& value)
{
    prefixSymbol_ = value;
    prefixSymbolIsSet_ = true;
}

bool E2ePolicyDto::prefixSymbolIsSet() const
{
    return prefixSymbolIsSet_;
}

void E2ePolicyDto::unsetprefixSymbol()
{
    prefixSymbolIsSet_ = false;
}

std::string E2ePolicyDto::getSeparator() const
{
    return separator_;
}

void E2ePolicyDto::setSeparator(const std::string& value)
{
    separator_ = value;
    separatorIsSet_ = true;
}

bool E2ePolicyDto::separatorIsSet() const
{
    return separatorIsSet_;
}

void E2ePolicyDto::unsetseparator()
{
    separatorIsSet_ = false;
}

std::string E2ePolicyDto::getSuffixSymbol() const
{
    return suffixSymbol_;
}

void E2ePolicyDto::setSuffixSymbol(const std::string& value)
{
    suffixSymbol_ = value;
    suffixSymbolIsSet_ = true;
}

bool E2ePolicyDto::suffixSymbolIsSet() const
{
    return suffixSymbolIsSet_;
}

void E2ePolicyDto::unsetsuffixSymbol()
{
    suffixSymbolIsSet_ = false;
}

}
}
}
}
}


