

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyDBPayTypeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyDBPayTypeRequestBody::ModifyDBPayTypeRequestBody()
{
    entityIdsIsSet_ = false;
    chargeInfoIsSet_ = false;
}

ModifyDBPayTypeRequestBody::~ModifyDBPayTypeRequestBody() = default;

void ModifyDBPayTypeRequestBody::validate()
{
}

web::json::value ModifyDBPayTypeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdsIsSet_) {
        val[utility::conversions::to_string_t("entity_ids")] = ModelBase::toJson(entityIds_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }

    return val;
}
bool ModifyDBPayTypeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            PeriodChargeInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ModifyDBPayTypeRequestBody::getEntityIds()
{
    return entityIds_;
}

void ModifyDBPayTypeRequestBody::setEntityIds(const std::vector<std::string>& value)
{
    entityIds_ = value;
    entityIdsIsSet_ = true;
}

bool ModifyDBPayTypeRequestBody::entityIdsIsSet() const
{
    return entityIdsIsSet_;
}

void ModifyDBPayTypeRequestBody::unsetentityIds()
{
    entityIdsIsSet_ = false;
}

PeriodChargeInfoOption ModifyDBPayTypeRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void ModifyDBPayTypeRequestBody::setChargeInfo(const PeriodChargeInfoOption& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool ModifyDBPayTypeRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void ModifyDBPayTypeRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


