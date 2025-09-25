

#include "huaweicloud/codeartspipeline/v2/model/ExtensionExtendProp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionExtendProp::ExtensionExtendProp()
{
    apiOptions_ = "";
    apiOptionsIsSet_ = false;
    apiType_ = "";
    apiTypeIsSet_ = false;
    showPlaceholder_ = "";
    showPlaceholderIsSet_ = false;
    options_ = "";
    optionsIsSet_ = false;
    disabledConditions_ = "";
    disabledConditionsIsSet_ = false;
    visibleConditions_ = "";
    visibleConditionsIsSet_ = false;
}

ExtensionExtendProp::~ExtensionExtendProp() = default;

void ExtensionExtendProp::validate()
{
}

web::json::value ExtensionExtendProp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiOptionsIsSet_) {
        val[utility::conversions::to_string_t("api_options")] = ModelBase::toJson(apiOptions_);
    }
    if(apiTypeIsSet_) {
        val[utility::conversions::to_string_t("api_type")] = ModelBase::toJson(apiType_);
    }
    if(showPlaceholderIsSet_) {
        val[utility::conversions::to_string_t("show_placeholder")] = ModelBase::toJson(showPlaceholder_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(disabledConditionsIsSet_) {
        val[utility::conversions::to_string_t("disabled_conditions")] = ModelBase::toJson(disabledConditions_);
    }
    if(visibleConditionsIsSet_) {
        val[utility::conversions::to_string_t("visible_conditions")] = ModelBase::toJson(visibleConditions_);
    }

    return val;
}
bool ExtensionExtendProp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("api_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_options"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_placeholder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_placeholder"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowPlaceholder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled_conditions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabledConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visible_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visible_conditions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibleConditions(refVal);
        }
    }
    return ok;
}


std::string ExtensionExtendProp::getApiOptions() const
{
    return apiOptions_;
}

void ExtensionExtendProp::setApiOptions(const std::string& value)
{
    apiOptions_ = value;
    apiOptionsIsSet_ = true;
}

bool ExtensionExtendProp::apiOptionsIsSet() const
{
    return apiOptionsIsSet_;
}

void ExtensionExtendProp::unsetapiOptions()
{
    apiOptionsIsSet_ = false;
}

std::string ExtensionExtendProp::getApiType() const
{
    return apiType_;
}

void ExtensionExtendProp::setApiType(const std::string& value)
{
    apiType_ = value;
    apiTypeIsSet_ = true;
}

bool ExtensionExtendProp::apiTypeIsSet() const
{
    return apiTypeIsSet_;
}

void ExtensionExtendProp::unsetapiType()
{
    apiTypeIsSet_ = false;
}

std::string ExtensionExtendProp::getShowPlaceholder() const
{
    return showPlaceholder_;
}

void ExtensionExtendProp::setShowPlaceholder(const std::string& value)
{
    showPlaceholder_ = value;
    showPlaceholderIsSet_ = true;
}

bool ExtensionExtendProp::showPlaceholderIsSet() const
{
    return showPlaceholderIsSet_;
}

void ExtensionExtendProp::unsetshowPlaceholder()
{
    showPlaceholderIsSet_ = false;
}

std::string ExtensionExtendProp::getOptions() const
{
    return options_;
}

void ExtensionExtendProp::setOptions(const std::string& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool ExtensionExtendProp::optionsIsSet() const
{
    return optionsIsSet_;
}

void ExtensionExtendProp::unsetoptions()
{
    optionsIsSet_ = false;
}

std::string ExtensionExtendProp::getDisabledConditions() const
{
    return disabledConditions_;
}

void ExtensionExtendProp::setDisabledConditions(const std::string& value)
{
    disabledConditions_ = value;
    disabledConditionsIsSet_ = true;
}

bool ExtensionExtendProp::disabledConditionsIsSet() const
{
    return disabledConditionsIsSet_;
}

void ExtensionExtendProp::unsetdisabledConditions()
{
    disabledConditionsIsSet_ = false;
}

std::string ExtensionExtendProp::getVisibleConditions() const
{
    return visibleConditions_;
}

void ExtensionExtendProp::setVisibleConditions(const std::string& value)
{
    visibleConditions_ = value;
    visibleConditionsIsSet_ = true;
}

bool ExtensionExtendProp::visibleConditionsIsSet() const
{
    return visibleConditionsIsSet_;
}

void ExtensionExtendProp::unsetvisibleConditions()
{
    visibleConditionsIsSet_ = false;
}

}
}
}
}
}


