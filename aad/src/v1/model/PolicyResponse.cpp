

#include "huaweicloud/aad/v1/model/PolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




PolicyResponse::PolicyResponse()
{
    id_ = "";
    idIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
    packageName_ = "";
    packageNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    cleanThreshold_ = 0;
    cleanThresholdIsSet_ = false;
    numProtectedIp_ = 0;
    numProtectedIpIsSet_ = false;
}

PolicyResponse::~PolicyResponse() = default;

void PolicyResponse::validate()
{
}

web::json::value PolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(packageNameIsSet_) {
        val[utility::conversions::to_string_t("package_name")] = ModelBase::toJson(packageName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(cleanThresholdIsSet_) {
        val[utility::conversions::to_string_t("clean_threshold")] = ModelBase::toJson(cleanThreshold_);
    }
    if(numProtectedIpIsSet_) {
        val[utility::conversions::to_string_t("num_protected_ip")] = ModelBase::toJson(numProtectedIp_);
    }

    return val;
}
bool PolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clean_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("num_protected_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num_protected_ip"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumProtectedIp(refVal);
        }
    }
    return ok;
}


std::string PolicyResponse::getId() const
{
    return id_;
}

void PolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void PolicyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string PolicyResponse::getPackageId() const
{
    return packageId_;
}

void PolicyResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool PolicyResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void PolicyResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string PolicyResponse::getPackageName() const
{
    return packageName_;
}

void PolicyResponse::setPackageName(const std::string& value)
{
    packageName_ = value;
    packageNameIsSet_ = true;
}

bool PolicyResponse::packageNameIsSet() const
{
    return packageNameIsSet_;
}

void PolicyResponse::unsetpackageName()
{
    packageNameIsSet_ = false;
}

std::string PolicyResponse::getName() const
{
    return name_;
}

void PolicyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PolicyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void PolicyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string PolicyResponse::getDescription() const
{
    return description_;
}

void PolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PolicyResponse::getRegion() const
{
    return region_;
}

void PolicyResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool PolicyResponse::regionIsSet() const
{
    return regionIsSet_;
}

void PolicyResponse::unsetregion()
{
    regionIsSet_ = false;
}

int32_t PolicyResponse::getCleanThreshold() const
{
    return cleanThreshold_;
}

void PolicyResponse::setCleanThreshold(int32_t value)
{
    cleanThreshold_ = value;
    cleanThresholdIsSet_ = true;
}

bool PolicyResponse::cleanThresholdIsSet() const
{
    return cleanThresholdIsSet_;
}

void PolicyResponse::unsetcleanThreshold()
{
    cleanThresholdIsSet_ = false;
}

int32_t PolicyResponse::getNumProtectedIp() const
{
    return numProtectedIp_;
}

void PolicyResponse::setNumProtectedIp(int32_t value)
{
    numProtectedIp_ = value;
    numProtectedIpIsSet_ = true;
}

bool PolicyResponse::numProtectedIpIsSet() const
{
    return numProtectedIpIsSet_;
}

void PolicyResponse::unsetnumProtectedIp()
{
    numProtectedIpIsSet_ = false;
}

}
}
}
}
}


