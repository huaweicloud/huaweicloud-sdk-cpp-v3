

#include "huaweicloud/sdrs/v1/model/ResizeProtectedInstanceRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ResizeProtectedInstanceRequestParams::ResizeProtectedInstanceRequestParams()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    productionFlavorRef_ = "";
    productionFlavorRefIsSet_ = false;
    drFlavorRef_ = "";
    drFlavorRefIsSet_ = false;
    productionDedicatedHostId_ = "";
    productionDedicatedHostIdIsSet_ = false;
    drDedicatedHostId_ = "";
    drDedicatedHostIdIsSet_ = false;
}

ResizeProtectedInstanceRequestParams::~ResizeProtectedInstanceRequestParams() = default;

void ResizeProtectedInstanceRequestParams::validate()
{
}

web::json::value ResizeProtectedInstanceRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(productionFlavorRefIsSet_) {
        val[utility::conversions::to_string_t("production_flavorRef")] = ModelBase::toJson(productionFlavorRef_);
    }
    if(drFlavorRefIsSet_) {
        val[utility::conversions::to_string_t("dr_flavorRef")] = ModelBase::toJson(drFlavorRef_);
    }
    if(productionDedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("production_dedicated_host_id")] = ModelBase::toJson(productionDedicatedHostId_);
    }
    if(drDedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dr_dedicated_host_id")] = ModelBase::toJson(drDedicatedHostId_);
    }

    return val;
}

bool ResizeProtectedInstanceRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("production_flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("production_flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductionFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("production_dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("production_dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductionDedicatedHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrDedicatedHostId(refVal);
        }
    }
    return ok;
}

std::string ResizeProtectedInstanceRequestParams::getFlavorRef() const
{
    return flavorRef_;
}

void ResizeProtectedInstanceRequestParams::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ResizeProtectedInstanceRequestParams::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ResizeProtectedInstanceRequestParams::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string ResizeProtectedInstanceRequestParams::getProductionFlavorRef() const
{
    return productionFlavorRef_;
}

void ResizeProtectedInstanceRequestParams::setProductionFlavorRef(const std::string& value)
{
    productionFlavorRef_ = value;
    productionFlavorRefIsSet_ = true;
}

bool ResizeProtectedInstanceRequestParams::productionFlavorRefIsSet() const
{
    return productionFlavorRefIsSet_;
}

void ResizeProtectedInstanceRequestParams::unsetproductionFlavorRef()
{
    productionFlavorRefIsSet_ = false;
}

std::string ResizeProtectedInstanceRequestParams::getDrFlavorRef() const
{
    return drFlavorRef_;
}

void ResizeProtectedInstanceRequestParams::setDrFlavorRef(const std::string& value)
{
    drFlavorRef_ = value;
    drFlavorRefIsSet_ = true;
}

bool ResizeProtectedInstanceRequestParams::drFlavorRefIsSet() const
{
    return drFlavorRefIsSet_;
}

void ResizeProtectedInstanceRequestParams::unsetdrFlavorRef()
{
    drFlavorRefIsSet_ = false;
}

std::string ResizeProtectedInstanceRequestParams::getProductionDedicatedHostId() const
{
    return productionDedicatedHostId_;
}

void ResizeProtectedInstanceRequestParams::setProductionDedicatedHostId(const std::string& value)
{
    productionDedicatedHostId_ = value;
    productionDedicatedHostIdIsSet_ = true;
}

bool ResizeProtectedInstanceRequestParams::productionDedicatedHostIdIsSet() const
{
    return productionDedicatedHostIdIsSet_;
}

void ResizeProtectedInstanceRequestParams::unsetproductionDedicatedHostId()
{
    productionDedicatedHostIdIsSet_ = false;
}

std::string ResizeProtectedInstanceRequestParams::getDrDedicatedHostId() const
{
    return drDedicatedHostId_;
}

void ResizeProtectedInstanceRequestParams::setDrDedicatedHostId(const std::string& value)
{
    drDedicatedHostId_ = value;
    drDedicatedHostIdIsSet_ = true;
}

bool ResizeProtectedInstanceRequestParams::drDedicatedHostIdIsSet() const
{
    return drDedicatedHostIdIsSet_;
}

void ResizeProtectedInstanceRequestParams::unsetdrDedicatedHostId()
{
    drDedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


