

#include "huaweicloud/cpcs/v1/model/CreateAppRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateAppRequestBody::CreateAppRequestBody()
{
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
    description_ = "";
    descriptionIsSet_ = false;
}

CreateAppRequestBody::~CreateAppRequestBody() = default;

void CreateAppRequestBody::validate()
{
}

web::json::value CreateAppRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateAppRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string CreateAppRequestBody::getAppName() const
{
    return appName_;
}

void CreateAppRequestBody::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool CreateAppRequestBody::appNameIsSet() const
{
    return appNameIsSet_;
}

void CreateAppRequestBody::unsetappName()
{
    appNameIsSet_ = false;
}

std::string CreateAppRequestBody::getVpcId() const
{
    return vpcId_;
}

void CreateAppRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateAppRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateAppRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateAppRequestBody::getVpcName() const
{
    return vpcName_;
}

void CreateAppRequestBody::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool CreateAppRequestBody::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void CreateAppRequestBody::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string CreateAppRequestBody::getSubnetId() const
{
    return subnetId_;
}

void CreateAppRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateAppRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateAppRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateAppRequestBody::getSubnetName() const
{
    return subnetName_;
}

void CreateAppRequestBody::setSubnetName(const std::string& value)
{
    subnetName_ = value;
    subnetNameIsSet_ = true;
}

bool CreateAppRequestBody::subnetNameIsSet() const
{
    return subnetNameIsSet_;
}

void CreateAppRequestBody::unsetsubnetName()
{
    subnetNameIsSet_ = false;
}

std::string CreateAppRequestBody::getDescription() const
{
    return description_;
}

void CreateAppRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAppRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAppRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


