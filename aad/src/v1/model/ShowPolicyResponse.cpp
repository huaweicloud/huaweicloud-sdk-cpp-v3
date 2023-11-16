

#include "huaweicloud/aad/v1/model/ShowPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowPolicyResponse::ShowPolicyResponse()
{
    id_ = "";
    idIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    cleanThreshold_ = 0;
    cleanThresholdIsSet_ = false;
    popPolicyIsSet_ = false;
}

ShowPolicyResponse::~ShowPolicyResponse() = default;

void ShowPolicyResponse::validate()
{
}

web::json::value ShowPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cleanThresholdIsSet_) {
        val[utility::conversions::to_string_t("clean_threshold")] = ModelBase::toJson(cleanThreshold_);
    }
    if(popPolicyIsSet_) {
        val[utility::conversions::to_string_t("pop_policy")] = ModelBase::toJson(popPolicy_);
    }

    return val;
}
bool ShowPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pop_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pop_policy"));
        if(!fieldValue.is_null())
        {
            PopPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPopPolicy(refVal);
        }
    }
    return ok;
}


std::string ShowPolicyResponse::getId() const
{
    return id_;
}

void ShowPolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowPolicyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPolicyResponse::getPackageId() const
{
    return packageId_;
}

void ShowPolicyResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool ShowPolicyResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void ShowPolicyResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string ShowPolicyResponse::getName() const
{
    return name_;
}

void ShowPolicyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPolicyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPolicyResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t ShowPolicyResponse::getCleanThreshold() const
{
    return cleanThreshold_;
}

void ShowPolicyResponse::setCleanThreshold(int32_t value)
{
    cleanThreshold_ = value;
    cleanThresholdIsSet_ = true;
}

bool ShowPolicyResponse::cleanThresholdIsSet() const
{
    return cleanThresholdIsSet_;
}

void ShowPolicyResponse::unsetcleanThreshold()
{
    cleanThresholdIsSet_ = false;
}

PopPolicy ShowPolicyResponse::getPopPolicy() const
{
    return popPolicy_;
}

void ShowPolicyResponse::setPopPolicy(const PopPolicy& value)
{
    popPolicy_ = value;
    popPolicyIsSet_ = true;
}

bool ShowPolicyResponse::popPolicyIsSet() const
{
    return popPolicyIsSet_;
}

void ShowPolicyResponse::unsetpopPolicy()
{
    popPolicyIsSet_ = false;
}

}
}
}
}
}


