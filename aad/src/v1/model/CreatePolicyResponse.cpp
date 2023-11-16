

#include "huaweicloud/aad/v1/model/CreatePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CreatePolicyResponse::CreatePolicyResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    cleanThreshold_ = 0;
    cleanThresholdIsSet_ = false;
}

CreatePolicyResponse::~CreatePolicyResponse() = default;

void CreatePolicyResponse::validate()
{
}

web::json::value CreatePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(cleanThresholdIsSet_) {
        val[utility::conversions::to_string_t("clean_threshold")] = ModelBase::toJson(cleanThreshold_);
    }

    return val;
}
bool CreatePolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("clean_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanThreshold(refVal);
        }
    }
    return ok;
}


std::string CreatePolicyResponse::getId() const
{
    return id_;
}

void CreatePolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreatePolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void CreatePolicyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreatePolicyResponse::getName() const
{
    return name_;
}

void CreatePolicyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePolicyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePolicyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePolicyResponse::getPackageId() const
{
    return packageId_;
}

void CreatePolicyResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool CreatePolicyResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void CreatePolicyResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string CreatePolicyResponse::getDescription() const
{
    return description_;
}

void CreatePolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreatePolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreatePolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CreatePolicyResponse::getCleanThreshold() const
{
    return cleanThreshold_;
}

void CreatePolicyResponse::setCleanThreshold(int32_t value)
{
    cleanThreshold_ = value;
    cleanThresholdIsSet_ = true;
}

bool CreatePolicyResponse::cleanThresholdIsSet() const
{
    return cleanThresholdIsSet_;
}

void CreatePolicyResponse::unsetcleanThreshold()
{
    cleanThresholdIsSet_ = false;
}

}
}
}
}
}


