

#include "huaweicloud/cfw/v1/model/EwProtectResourceInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EwProtectResourceInfo::EwProtectResourceInfo()
{
    protectedResourceType_ = 0;
    protectedResourceTypeIsSet_ = false;
    protectedResourceName_ = "";
    protectedResourceNameIsSet_ = false;
    protectedResourceId_ = "";
    protectedResourceIdIsSet_ = false;
    protectedResourceNatName_ = "";
    protectedResourceNatNameIsSet_ = false;
    protectedResourceNatId_ = "";
    protectedResourceNatIdIsSet_ = false;
    protectedResourceProjectId_ = "";
    protectedResourceProjectIdIsSet_ = false;
}

EwProtectResourceInfo::~EwProtectResourceInfo() = default;

void EwProtectResourceInfo::validate()
{
}

web::json::value EwProtectResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_type")] = ModelBase::toJson(protectedResourceType_);
    }
    if(protectedResourceNameIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_name")] = ModelBase::toJson(protectedResourceName_);
    }
    if(protectedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_id")] = ModelBase::toJson(protectedResourceId_);
    }
    if(protectedResourceNatNameIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_nat_name")] = ModelBase::toJson(protectedResourceNatName_);
    }
    if(protectedResourceNatIdIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_nat_id")] = ModelBase::toJson(protectedResourceNatId_);
    }
    if(protectedResourceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_project_id")] = ModelBase::toJson(protectedResourceProjectId_);
    }

    return val;
}

bool EwProtectResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_resource_nat_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_nat_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceNatName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_resource_nat_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_nat_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceNatId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_resource_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceProjectId(refVal);
        }
    }
    return ok;
}

int32_t EwProtectResourceInfo::getProtectedResourceType() const
{
    return protectedResourceType_;
}

void EwProtectResourceInfo::setProtectedResourceType(int32_t value)
{
    protectedResourceType_ = value;
    protectedResourceTypeIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceTypeIsSet() const
{
    return protectedResourceTypeIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceType()
{
    protectedResourceTypeIsSet_ = false;
}

std::string EwProtectResourceInfo::getProtectedResourceName() const
{
    return protectedResourceName_;
}

void EwProtectResourceInfo::setProtectedResourceName(const std::string& value)
{
    protectedResourceName_ = value;
    protectedResourceNameIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceNameIsSet() const
{
    return protectedResourceNameIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceName()
{
    protectedResourceNameIsSet_ = false;
}

std::string EwProtectResourceInfo::getProtectedResourceId() const
{
    return protectedResourceId_;
}

void EwProtectResourceInfo::setProtectedResourceId(const std::string& value)
{
    protectedResourceId_ = value;
    protectedResourceIdIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceIdIsSet() const
{
    return protectedResourceIdIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceId()
{
    protectedResourceIdIsSet_ = false;
}

std::string EwProtectResourceInfo::getProtectedResourceNatName() const
{
    return protectedResourceNatName_;
}

void EwProtectResourceInfo::setProtectedResourceNatName(const std::string& value)
{
    protectedResourceNatName_ = value;
    protectedResourceNatNameIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceNatNameIsSet() const
{
    return protectedResourceNatNameIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceNatName()
{
    protectedResourceNatNameIsSet_ = false;
}

std::string EwProtectResourceInfo::getProtectedResourceNatId() const
{
    return protectedResourceNatId_;
}

void EwProtectResourceInfo::setProtectedResourceNatId(const std::string& value)
{
    protectedResourceNatId_ = value;
    protectedResourceNatIdIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceNatIdIsSet() const
{
    return protectedResourceNatIdIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceNatId()
{
    protectedResourceNatIdIsSet_ = false;
}

std::string EwProtectResourceInfo::getProtectedResourceProjectId() const
{
    return protectedResourceProjectId_;
}

void EwProtectResourceInfo::setProtectedResourceProjectId(const std::string& value)
{
    protectedResourceProjectId_ = value;
    protectedResourceProjectIdIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceProjectIdIsSet() const
{
    return protectedResourceProjectIdIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceProjectId()
{
    protectedResourceProjectIdIsSet_ = false;
}

}
}
}
}
}


