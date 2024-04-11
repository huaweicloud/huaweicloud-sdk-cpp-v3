

#include "huaweicloud/gaussdbforopengauss/v3/model/CnInfoBeforeReduce.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CnInfoBeforeReduce::CnInfoBeforeReduce()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    supportReduce_ = false;
    supportReduceIsSet_ = false;
}

CnInfoBeforeReduce::~CnInfoBeforeReduce() = default;

void CnInfoBeforeReduce::validate()
{
}

web::json::value CnInfoBeforeReduce::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(supportReduceIsSet_) {
        val[utility::conversions::to_string_t("support_reduce")] = ModelBase::toJson(supportReduce_);
    }

    return val;
}
bool CnInfoBeforeReduce::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_reduce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_reduce"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportReduce(refVal);
        }
    }
    return ok;
}


std::string CnInfoBeforeReduce::getId() const
{
    return id_;
}

void CnInfoBeforeReduce::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CnInfoBeforeReduce::idIsSet() const
{
    return idIsSet_;
}

void CnInfoBeforeReduce::unsetid()
{
    idIsSet_ = false;
}

std::string CnInfoBeforeReduce::getName() const
{
    return name_;
}

void CnInfoBeforeReduce::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CnInfoBeforeReduce::nameIsSet() const
{
    return nameIsSet_;
}

void CnInfoBeforeReduce::unsetname()
{
    nameIsSet_ = false;
}

std::string CnInfoBeforeReduce::getStatus() const
{
    return status_;
}

void CnInfoBeforeReduce::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CnInfoBeforeReduce::statusIsSet() const
{
    return statusIsSet_;
}

void CnInfoBeforeReduce::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CnInfoBeforeReduce::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CnInfoBeforeReduce::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CnInfoBeforeReduce::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CnInfoBeforeReduce::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

bool CnInfoBeforeReduce::isSupportReduce() const
{
    return supportReduce_;
}

void CnInfoBeforeReduce::setSupportReduce(bool value)
{
    supportReduce_ = value;
    supportReduceIsSet_ = true;
}

bool CnInfoBeforeReduce::supportReduceIsSet() const
{
    return supportReduceIsSet_;
}

void CnInfoBeforeReduce::unsetsupportReduce()
{
    supportReduceIsSet_ = false;
}

}
}
}
}
}


