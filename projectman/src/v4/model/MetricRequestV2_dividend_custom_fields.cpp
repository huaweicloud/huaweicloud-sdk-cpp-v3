

#include "huaweicloud/projectman/v4/model/MetricRequestV2_dividend_custom_fields.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MetricRequestV2_dividend_custom_fields::MetricRequestV2_dividend_custom_fields()
{
    name_ = "";
    nameIsSet_ = false;
    options_ = "";
    optionsIsSet_ = false;
}

MetricRequestV2_dividend_custom_fields::~MetricRequestV2_dividend_custom_fields() = default;

void MetricRequestV2_dividend_custom_fields::validate()
{
}

web::json::value MetricRequestV2_dividend_custom_fields::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }

    return val;
}
bool MetricRequestV2_dividend_custom_fields::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    return ok;
}


std::string MetricRequestV2_dividend_custom_fields::getName() const
{
    return name_;
}

void MetricRequestV2_dividend_custom_fields::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MetricRequestV2_dividend_custom_fields::nameIsSet() const
{
    return nameIsSet_;
}

void MetricRequestV2_dividend_custom_fields::unsetname()
{
    nameIsSet_ = false;
}

std::string MetricRequestV2_dividend_custom_fields::getOptions() const
{
    return options_;
}

void MetricRequestV2_dividend_custom_fields::setOptions(const std::string& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool MetricRequestV2_dividend_custom_fields::optionsIsSet() const
{
    return optionsIsSet_;
}

void MetricRequestV2_dividend_custom_fields::unsetoptions()
{
    optionsIsSet_ = false;
}

}
}
}
}
}


