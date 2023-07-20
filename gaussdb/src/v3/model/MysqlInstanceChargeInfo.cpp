

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceChargeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceChargeInfo::MysqlInstanceChargeInfo()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

MysqlInstanceChargeInfo::~MysqlInstanceChargeInfo() = default;

void MysqlInstanceChargeInfo::validate()
{
}

web::json::value MysqlInstanceChargeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}

bool MysqlInstanceChargeInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}

std::string MysqlInstanceChargeInfo::getChargeMode() const
{
    return chargeMode_;
}

void MysqlInstanceChargeInfo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool MysqlInstanceChargeInfo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void MysqlInstanceChargeInfo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string MysqlInstanceChargeInfo::getOrderId() const
{
    return orderId_;
}

void MysqlInstanceChargeInfo::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool MysqlInstanceChargeInfo::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void MysqlInstanceChargeInfo::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


