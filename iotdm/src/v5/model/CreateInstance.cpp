

#include "huaweicloud/iotdm/v5/model/CreateInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




CreateInstance::CreateInstance()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    flavorIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    chargeInfoIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    additionalParamsIsSet_ = false;
}

CreateInstance::~CreateInstance() = default;

void CreateInstance::validate()
{
}

web::json::value CreateInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(additionalParamsIsSet_) {
        val[utility::conversions::to_string_t("additional_params")] = ModelBase::toJson(additionalParams_);
    }

    return val;
}
bool CreateInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            Flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_params"));
        if(!fieldValue.is_null())
        {
            AdditionalParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalParams(refVal);
        }
    }
    return ok;
}


std::string CreateInstance::getInstanceType() const
{
    return instanceType_;
}

void CreateInstance::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool CreateInstance::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void CreateInstance::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

Flavor CreateInstance::getFlavor() const
{
    return flavor_;
}

void CreateInstance::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateInstance::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateInstance::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string CreateInstance::getName() const
{
    return name_;
}

void CreateInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstance::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstance::unsetname()
{
    nameIsSet_ = false;
}

ChargeInfo CreateInstance::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateInstance::setChargeInfo(const ChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateInstance::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateInstance::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string CreateInstance::getDescription() const
{
    return description_;
}

void CreateInstance::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateInstance::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateInstance::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateInstance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateInstance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateInstance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateInstance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<Tag>& CreateInstance::getTags()
{
    return tags_;
}

void CreateInstance::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateInstance::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateInstance::unsettags()
{
    tagsIsSet_ = false;
}

AdditionalParams CreateInstance::getAdditionalParams() const
{
    return additionalParams_;
}

void CreateInstance::setAdditionalParams(const AdditionalParams& value)
{
    additionalParams_ = value;
    additionalParamsIsSet_ = true;
}

bool CreateInstance::additionalParamsIsSet() const
{
    return additionalParamsIsSet_;
}

void CreateInstance::unsetadditionalParams()
{
    additionalParamsIsSet_ = false;
}

}
}
}
}
}


