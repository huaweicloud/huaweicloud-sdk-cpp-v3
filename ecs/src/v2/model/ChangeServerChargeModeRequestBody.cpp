

#include "huaweicloud/ecs/v2/model/ChangeServerChargeModeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerChargeModeRequestBody::ChangeServerChargeModeRequestBody()
{
    serverIdsIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    prepaidOptionsIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
}

ChangeServerChargeModeRequestBody::~ChangeServerChargeModeRequestBody() = default;

void ChangeServerChargeModeRequestBody::validate()
{
}

web::json::value ChangeServerChargeModeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdsIsSet_) {
        val[utility::conversions::to_string_t("server_ids")] = ModelBase::toJson(serverIds_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(prepaidOptionsIsSet_) {
        val[utility::conversions::to_string_t("prepaid_options")] = ModelBase::toJson(prepaidOptions_);
    }
    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }

    return val;
}
bool ChangeServerChargeModeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prepaid_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prepaid_options"));
        if(!fieldValue.is_null())
        {
            ChangeServerChargeModePrepaidOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrepaidOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChangeServerChargeModeRequestBody::getServerIds()
{
    return serverIds_;
}

void ChangeServerChargeModeRequestBody::setServerIds(const std::vector<std::string>& value)
{
    serverIds_ = value;
    serverIdsIsSet_ = true;
}

bool ChangeServerChargeModeRequestBody::serverIdsIsSet() const
{
    return serverIdsIsSet_;
}

void ChangeServerChargeModeRequestBody::unsetserverIds()
{
    serverIdsIsSet_ = false;
}

std::string ChangeServerChargeModeRequestBody::getChargeMode() const
{
    return chargeMode_;
}

void ChangeServerChargeModeRequestBody::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChangeServerChargeModeRequestBody::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChangeServerChargeModeRequestBody::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

ChangeServerChargeModePrepaidOption ChangeServerChargeModeRequestBody::getPrepaidOptions() const
{
    return prepaidOptions_;
}

void ChangeServerChargeModeRequestBody::setPrepaidOptions(const ChangeServerChargeModePrepaidOption& value)
{
    prepaidOptions_ = value;
    prepaidOptionsIsSet_ = true;
}

bool ChangeServerChargeModeRequestBody::prepaidOptionsIsSet() const
{
    return prepaidOptionsIsSet_;
}

void ChangeServerChargeModeRequestBody::unsetprepaidOptions()
{
    prepaidOptionsIsSet_ = false;
}

bool ChangeServerChargeModeRequestBody::isDryRun() const
{
    return dryRun_;
}

void ChangeServerChargeModeRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool ChangeServerChargeModeRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void ChangeServerChargeModeRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

}
}
}
}
}


