

#include "huaweicloud/modelarts/v1/model/ServerFlavorinstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerFlavorinstanceResponse::ServerFlavorinstanceResponse()
{
    arch_ = "";
    archIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    roceNum_ = 0;
    roceNumIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    skuCode_ = "";
    skuCodeIsSet_ = false;
    specification_ = "";
    specificationIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    isSoldOut_ = false;
    isSoldOutIsSet_ = false;
}

ServerFlavorinstanceResponse::~ServerFlavorinstanceResponse() = default;

void ServerFlavorinstanceResponse::validate()
{
}

web::json::value ServerFlavorinstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(roceNumIsSet_) {
        val[utility::conversions::to_string_t("roce_num")] = ModelBase::toJson(roceNum_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(skuCodeIsSet_) {
        val[utility::conversions::to_string_t("sku_code")] = ModelBase::toJson(skuCode_);
    }
    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isSoldOutIsSet_) {
        val[utility::conversions::to_string_t("is_sold_out")] = ModelBase::toJson(isSoldOut_);
    }

    return val;
}
bool ServerFlavorinstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roce_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roce_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sku_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sku_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkuCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sold_out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sold_out"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSoldOut(refVal);
        }
    }
    return ok;
}


std::string ServerFlavorinstanceResponse::getArch() const
{
    return arch_;
}

void ServerFlavorinstanceResponse::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ServerFlavorinstanceResponse::archIsSet() const
{
    return archIsSet_;
}

void ServerFlavorinstanceResponse::unsetarch()
{
    archIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ServerFlavorinstanceResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ServerFlavorinstanceResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ServerFlavorinstanceResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getChargingMode() const
{
    return chargingMode_;
}

void ServerFlavorinstanceResponse::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ServerFlavorinstanceResponse::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ServerFlavorinstanceResponse::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

int32_t ServerFlavorinstanceResponse::getCount() const
{
    return count_;
}

void ServerFlavorinstanceResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ServerFlavorinstanceResponse::countIsSet() const
{
    return countIsSet_;
}

void ServerFlavorinstanceResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getFlavor() const
{
    return flavor_;
}

void ServerFlavorinstanceResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerFlavorinstanceResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerFlavorinstanceResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getFlavorType() const
{
    return flavorType_;
}

void ServerFlavorinstanceResponse::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ServerFlavorinstanceResponse::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ServerFlavorinstanceResponse::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

int32_t ServerFlavorinstanceResponse::getRoceNum() const
{
    return roceNum_;
}

void ServerFlavorinstanceResponse::setRoceNum(int32_t value)
{
    roceNum_ = value;
    roceNumIsSet_ = true;
}

bool ServerFlavorinstanceResponse::roceNumIsSet() const
{
    return roceNumIsSet_;
}

void ServerFlavorinstanceResponse::unsetroceNum()
{
    roceNumIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getServerType() const
{
    return serverType_;
}

void ServerFlavorinstanceResponse::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ServerFlavorinstanceResponse::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ServerFlavorinstanceResponse::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getSkuCode() const
{
    return skuCode_;
}

void ServerFlavorinstanceResponse::setSkuCode(const std::string& value)
{
    skuCode_ = value;
    skuCodeIsSet_ = true;
}

bool ServerFlavorinstanceResponse::skuCodeIsSet() const
{
    return skuCodeIsSet_;
}

void ServerFlavorinstanceResponse::unsetskuCode()
{
    skuCodeIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getSpecification() const
{
    return specification_;
}

void ServerFlavorinstanceResponse::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool ServerFlavorinstanceResponse::specificationIsSet() const
{
    return specificationIsSet_;
}

void ServerFlavorinstanceResponse::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string ServerFlavorinstanceResponse::getStatus() const
{
    return status_;
}

void ServerFlavorinstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServerFlavorinstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ServerFlavorinstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

bool ServerFlavorinstanceResponse::isIsSoldOut() const
{
    return isSoldOut_;
}

void ServerFlavorinstanceResponse::setIsSoldOut(bool value)
{
    isSoldOut_ = value;
    isSoldOutIsSet_ = true;
}

bool ServerFlavorinstanceResponse::isSoldOutIsSet() const
{
    return isSoldOutIsSet_;
}

void ServerFlavorinstanceResponse::unsetisSoldOut()
{
    isSoldOutIsSet_ = false;
}

}
}
}
}
}


