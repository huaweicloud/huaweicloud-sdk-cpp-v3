

#include "huaweicloud/ecs/v2/model/MarketModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




MarketModel::MarketModel()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    prepaidInfoIsSet_ = false;
}

MarketModel::~MarketModel() = default;

void MarketModel::validate()
{
}

web::json::value MarketModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(prepaidInfoIsSet_) {
        val[utility::conversions::to_string_t("prepaid_info")] = ModelBase::toJson(prepaidInfo_);
    }

    return val;
}
bool MarketModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prepaid_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prepaid_info"));
        if(!fieldValue.is_null())
        {
            MarketModel_prepaid_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrepaidInfo(refVal);
        }
    }
    return ok;
}


std::string MarketModel::getChargeMode() const
{
    return chargeMode_;
}

void MarketModel::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool MarketModel::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void MarketModel::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

MarketModel_prepaid_info MarketModel::getPrepaidInfo() const
{
    return prepaidInfo_;
}

void MarketModel::setPrepaidInfo(const MarketModel_prepaid_info& value)
{
    prepaidInfo_ = value;
    prepaidInfoIsSet_ = true;
}

bool MarketModel::prepaidInfoIsSet() const
{
    return prepaidInfoIsSet_;
}

void MarketModel::unsetprepaidInfo()
{
    prepaidInfoIsSet_ = false;
}

}
}
}
}
}


