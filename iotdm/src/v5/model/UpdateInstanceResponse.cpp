

#include "huaweicloud/iotdm/v5/model/UpdateInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UpdateInstanceResponse::UpdateInstanceResponse()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    flavorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    accessInfosIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    operateWindowIsSet_ = false;
    additionalParamsIsSet_ = false;
}

UpdateInstanceResponse::~UpdateInstanceResponse() = default;

void UpdateInstanceResponse::validate()
{
}

web::json::value UpdateInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
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
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(accessInfosIsSet_) {
        val[utility::conversions::to_string_t("access_infos")] = ModelBase::toJson(accessInfos_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
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
    if(operateWindowIsSet_) {
        val[utility::conversions::to_string_t("operate_window")] = ModelBase::toJson(operateWindow_);
    }
    if(additionalParamsIsSet_) {
        val[utility::conversions::to_string_t("additional_params")] = ModelBase::toJson(additionalParams_);
    }

    return val;
}
bool UpdateInstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("access_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operate_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_window"));
        if(!fieldValue.is_null())
        {
            OperateWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_params"));
        if(!fieldValue.is_null())
        {
            AdditionalParamsResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalParams(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceResponse::getInstanceType() const
{
    return instanceType_;
}

void UpdateInstanceResponse::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool UpdateInstanceResponse::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void UpdateInstanceResponse::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string UpdateInstanceResponse::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateInstanceResponse::getChargeMode() const
{
    return chargeMode_;
}

void UpdateInstanceResponse::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool UpdateInstanceResponse::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void UpdateInstanceResponse::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string UpdateInstanceResponse::getName() const
{
    return name_;
}

void UpdateInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

Flavor UpdateInstanceResponse::getFlavor() const
{
    return flavor_;
}

void UpdateInstanceResponse::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool UpdateInstanceResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void UpdateInstanceResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string UpdateInstanceResponse::getStatus() const
{
    return status_;
}

void UpdateInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateInstanceResponse::getRegionId() const
{
    return regionId_;
}

void UpdateInstanceResponse::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool UpdateInstanceResponse::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void UpdateInstanceResponse::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string UpdateInstanceResponse::getDescription() const
{
    return description_;
}

void UpdateInstanceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateInstanceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateInstanceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<AccessInfo>& UpdateInstanceResponse::getAccessInfos()
{
    return accessInfos_;
}

void UpdateInstanceResponse::setAccessInfos(const std::vector<AccessInfo>& value)
{
    accessInfos_ = value;
    accessInfosIsSet_ = true;
}

bool UpdateInstanceResponse::accessInfosIsSet() const
{
    return accessInfosIsSet_;
}

void UpdateInstanceResponse::unsetaccessInfos()
{
    accessInfosIsSet_ = false;
}

std::string UpdateInstanceResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateInstanceResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateInstanceResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateInstanceResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateInstanceResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateInstanceResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateInstanceResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateInstanceResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<Tag>& UpdateInstanceResponse::getTags()
{
    return tags_;
}

void UpdateInstanceResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateInstanceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateInstanceResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string UpdateInstanceResponse::getOrderId() const
{
    return orderId_;
}

void UpdateInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpdateInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpdateInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

OperateWindow UpdateInstanceResponse::getOperateWindow() const
{
    return operateWindow_;
}

void UpdateInstanceResponse::setOperateWindow(const OperateWindow& value)
{
    operateWindow_ = value;
    operateWindowIsSet_ = true;
}

bool UpdateInstanceResponse::operateWindowIsSet() const
{
    return operateWindowIsSet_;
}

void UpdateInstanceResponse::unsetoperateWindow()
{
    operateWindowIsSet_ = false;
}

AdditionalParamsResp UpdateInstanceResponse::getAdditionalParams() const
{
    return additionalParams_;
}

void UpdateInstanceResponse::setAdditionalParams(const AdditionalParamsResp& value)
{
    additionalParams_ = value;
    additionalParamsIsSet_ = true;
}

bool UpdateInstanceResponse::additionalParamsIsSet() const
{
    return additionalParamsIsSet_;
}

void UpdateInstanceResponse::unsetadditionalParams()
{
    additionalParamsIsSet_ = false;
}

}
}
}
}
}


