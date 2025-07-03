

#include "huaweicloud/ecs/v2/model/TemplateMarketOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateMarketOptions::TemplateMarketOptions()
{
    marketType_ = "";
    marketTypeIsSet_ = false;
    spotOptionsIsSet_ = false;
}

TemplateMarketOptions::~TemplateMarketOptions() = default;

void TemplateMarketOptions::validate()
{
}

web::json::value TemplateMarketOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(marketTypeIsSet_) {
        val[utility::conversions::to_string_t("market_type")] = ModelBase::toJson(marketType_);
    }
    if(spotOptionsIsSet_) {
        val[utility::conversions::to_string_t("spot_options")] = ModelBase::toJson(spotOptions_);
    }

    return val;
}
bool TemplateMarketOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("market_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("market_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spot_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spot_options"));
        if(!fieldValue.is_null())
        {
            TemplateSpotOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotOptions(refVal);
        }
    }
    return ok;
}


std::string TemplateMarketOptions::getMarketType() const
{
    return marketType_;
}

void TemplateMarketOptions::setMarketType(const std::string& value)
{
    marketType_ = value;
    marketTypeIsSet_ = true;
}

bool TemplateMarketOptions::marketTypeIsSet() const
{
    return marketTypeIsSet_;
}

void TemplateMarketOptions::unsetmarketType()
{
    marketTypeIsSet_ = false;
}

TemplateSpotOptions TemplateMarketOptions::getSpotOptions() const
{
    return spotOptions_;
}

void TemplateMarketOptions::setSpotOptions(const TemplateSpotOptions& value)
{
    spotOptions_ = value;
    spotOptionsIsSet_ = true;
}

bool TemplateMarketOptions::spotOptionsIsSet() const
{
    return spotOptionsIsSet_;
}

void TemplateMarketOptions::unsetspotOptions()
{
    spotOptionsIsSet_ = false;
}

}
}
}
}
}


