

#include "huaweicloud/rds/v3/model/Single2HaObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Single2HaObject::Single2HaObject()
{
    azCodeNewNode_ = "";
    azCodeNewNodeIsSet_ = false;
    dsspoolId_ = "";
    dsspoolIdIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    adDomainInfoIsSet_ = false;
}

Single2HaObject::~Single2HaObject() = default;

void Single2HaObject::validate()
{
}

web::json::value Single2HaObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azCodeNewNodeIsSet_) {
        val[utility::conversions::to_string_t("az_code_new_node")] = ModelBase::toJson(azCodeNewNode_);
    }
    if(dsspoolIdIsSet_) {
        val[utility::conversions::to_string_t("dsspool_id")] = ModelBase::toJson(dsspoolId_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(adDomainInfoIsSet_) {
        val[utility::conversions::to_string_t("ad_domain_info")] = ModelBase::toJson(adDomainInfo_);
    }

    return val;
}

bool Single2HaObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az_code_new_node"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code_new_node"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCodeNewNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsspool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsspool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDsspoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ad_domain_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ad_domain_info"));
        if(!fieldValue.is_null())
        {
            ADDomainInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdDomainInfo(refVal);
        }
    }
    return ok;
}

std::string Single2HaObject::getAzCodeNewNode() const
{
    return azCodeNewNode_;
}

void Single2HaObject::setAzCodeNewNode(const std::string& value)
{
    azCodeNewNode_ = value;
    azCodeNewNodeIsSet_ = true;
}

bool Single2HaObject::azCodeNewNodeIsSet() const
{
    return azCodeNewNodeIsSet_;
}

void Single2HaObject::unsetazCodeNewNode()
{
    azCodeNewNodeIsSet_ = false;
}

std::string Single2HaObject::getDsspoolId() const
{
    return dsspoolId_;
}

void Single2HaObject::setDsspoolId(const std::string& value)
{
    dsspoolId_ = value;
    dsspoolIdIsSet_ = true;
}

bool Single2HaObject::dsspoolIdIsSet() const
{
    return dsspoolIdIsSet_;
}

void Single2HaObject::unsetdsspoolId()
{
    dsspoolIdIsSet_ = false;
}

bool Single2HaObject::isIsAutoPay() const
{
    return isAutoPay_;
}

void Single2HaObject::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool Single2HaObject::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void Single2HaObject::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

ADDomainInfo Single2HaObject::getAdDomainInfo() const
{
    return adDomainInfo_;
}

void Single2HaObject::setAdDomainInfo(const ADDomainInfo& value)
{
    adDomainInfo_ = value;
    adDomainInfoIsSet_ = true;
}

bool Single2HaObject::adDomainInfoIsSet() const
{
    return adDomainInfoIsSet_;
}

void Single2HaObject::unsetadDomainInfo()
{
    adDomainInfoIsSet_ = false;
}

}
}
}
}
}


