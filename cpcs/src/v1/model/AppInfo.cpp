

#include "huaweicloud/cpcs/v1/model/AppInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AppInfo::AppInfo()
{
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    subnetName_ = "";
    subnetNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

AppInfo::~AppInfo() = default;

void AppInfo::validate()
{
}

web::json::value AppInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(subnetNameIsSet_) {
        val[utility::conversions::to_string_t("subnet_name")] = ModelBase::toJson(subnetName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AppInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string AppInfo::getAppId() const
{
    return appId_;
}

void AppInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AppInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void AppInfo::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AppInfo::getAppName() const
{
    return appName_;
}

void AppInfo::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AppInfo::appNameIsSet() const
{
    return appNameIsSet_;
}

void AppInfo::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AppInfo::getVpcId() const
{
    return vpcId_;
}

void AppInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool AppInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void AppInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string AppInfo::getVpcName() const
{
    return vpcName_;
}

void AppInfo::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool AppInfo::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void AppInfo::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string AppInfo::getSubnetId() const
{
    return subnetId_;
}

void AppInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool AppInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void AppInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string AppInfo::getSubnetName() const
{
    return subnetName_;
}

void AppInfo::setSubnetName(const std::string& value)
{
    subnetName_ = value;
    subnetNameIsSet_ = true;
}

bool AppInfo::subnetNameIsSet() const
{
    return subnetNameIsSet_;
}

void AppInfo::unsetsubnetName()
{
    subnetNameIsSet_ = false;
}

std::string AppInfo::getDomainId() const
{
    return domainId_;
}

void AppInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AppInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AppInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AppInfo::getDescription() const
{
    return description_;
}

void AppInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AppInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AppInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t AppInfo::getCreateTime() const
{
    return createTime_;
}

void AppInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AppInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AppInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


