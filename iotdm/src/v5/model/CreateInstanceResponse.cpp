

#include "huaweicloud/iotdm/v5/model/CreateInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




CreateInstanceResponse::CreateInstanceResponse()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    flavorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    chargeInfoIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    additionalParamsIsSet_ = false;
}

CreateInstanceResponse::~CreateInstanceResponse() = default;

void CreateInstanceResponse::validate()
{
}

web::json::value CreateInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(additionalParamsIsSet_) {
        val[utility::conversions::to_string_t("additional_params")] = ModelBase::toJson(additionalParams_);
    }

    return val;
}
bool CreateInstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            Flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
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


std::string CreateInstanceResponse::getInstanceType() const
{
    return instanceType_;
}

void CreateInstanceResponse::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool CreateInstanceResponse::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void CreateInstanceResponse::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string CreateInstanceResponse::getInstanceId() const
{
    return instanceId_;
}

void CreateInstanceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateInstanceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateInstanceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateInstanceResponse::getName() const
{
    return name_;
}

void CreateInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

Flavor CreateInstanceResponse::getFlavor() const
{
    return flavor_;
}

void CreateInstanceResponse::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateInstanceResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateInstanceResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string CreateInstanceResponse::getStatus() const
{
    return status_;
}

void CreateInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ChargeInfo CreateInstanceResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateInstanceResponse::setChargeInfo(const ChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateInstanceResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateInstanceResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string CreateInstanceResponse::getDescription() const
{
    return description_;
}

void CreateInstanceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateInstanceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateInstanceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<Tag>& CreateInstanceResponse::getTags()
{
    return tags_;
}

void CreateInstanceResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateInstanceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateInstanceResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

AdditionalParams CreateInstanceResponse::getAdditionalParams() const
{
    return additionalParams_;
}

void CreateInstanceResponse::setAdditionalParams(const AdditionalParams& value)
{
    additionalParams_ = value;
    additionalParamsIsSet_ = true;
}

bool CreateInstanceResponse::additionalParamsIsSet() const
{
    return additionalParamsIsSet_;
}

void CreateInstanceResponse::unsetadditionalParams()
{
    additionalParamsIsSet_ = false;
}

}
}
}
}
}


