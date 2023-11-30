

#include "huaweicloud/eip/v3/model/UpdatePublicipOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdatePublicipOption::UpdatePublicipOption()
{
    alias_ = "";
    aliasIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    associateInstanceType_ = "";
    associateInstanceTypeIsSet_ = false;
    associateInstanceId_ = "";
    associateInstanceIdIsSet_ = false;
}

UpdatePublicipOption::~UpdatePublicipOption() = default;

void UpdatePublicipOption::validate()
{
}

web::json::value UpdatePublicipOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(associateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_type")] = ModelBase::toJson(associateInstanceType_);
    }
    if(associateInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_id")] = ModelBase::toJson(associateInstanceId_);
    }

    return val;
}
bool UpdatePublicipOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceId(refVal);
        }
    }
    return ok;
}


std::string UpdatePublicipOption::getAlias() const
{
    return alias_;
}

void UpdatePublicipOption::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool UpdatePublicipOption::aliasIsSet() const
{
    return aliasIsSet_;
}

void UpdatePublicipOption::unsetalias()
{
    aliasIsSet_ = false;
}

std::string UpdatePublicipOption::getDescription() const
{
    return description_;
}

void UpdatePublicipOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdatePublicipOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdatePublicipOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdatePublicipOption::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void UpdatePublicipOption::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool UpdatePublicipOption::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void UpdatePublicipOption::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string UpdatePublicipOption::getAssociateInstanceId() const
{
    return associateInstanceId_;
}

void UpdatePublicipOption::setAssociateInstanceId(const std::string& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool UpdatePublicipOption::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void UpdatePublicipOption::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

}
}
}
}
}


