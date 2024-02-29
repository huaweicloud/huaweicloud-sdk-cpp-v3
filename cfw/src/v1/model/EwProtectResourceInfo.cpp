

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
    protectedResourceMode_ = "";
    protectedResourceModeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
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
    if(protectedResourceModeIsSet_) {
        val[utility::conversions::to_string_t("protected_resource_mode")] = ModelBase::toJson(protectedResourceMode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(val.has_field(utility::conversions::to_string_t("protected_resource_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_resource_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedResourceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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

std::string EwProtectResourceInfo::getProtectedResourceMode() const
{
    return protectedResourceMode_;
}

void EwProtectResourceInfo::setProtectedResourceMode(const std::string& value)
{
    protectedResourceMode_ = value;
    protectedResourceModeIsSet_ = true;
}

bool EwProtectResourceInfo::protectedResourceModeIsSet() const
{
    return protectedResourceModeIsSet_;
}

void EwProtectResourceInfo::unsetprotectedResourceMode()
{
    protectedResourceModeIsSet_ = false;
}

int32_t EwProtectResourceInfo::getStatus() const
{
    return status_;
}

void EwProtectResourceInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EwProtectResourceInfo::statusIsSet() const
{
    return statusIsSet_;
}

void EwProtectResourceInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


