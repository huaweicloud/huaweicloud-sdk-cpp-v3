

#include "huaweicloud/iotdm/v5/model/ShowInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ShowInstanceResponse::ShowInstanceResponse()
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

ShowInstanceResponse::~ShowInstanceResponse() = default;

void ShowInstanceResponse::validate()
{
}

web::json::value ShowInstanceResponse::toJson() const
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
bool ShowInstanceResponse::fromJson(const web::json::value& val)
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


std::string ShowInstanceResponse::getInstanceType() const
{
    return instanceType_;
}

void ShowInstanceResponse::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ShowInstanceResponse::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ShowInstanceResponse::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string ShowInstanceResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceResponse::getChargeMode() const
{
    return chargeMode_;
}

void ShowInstanceResponse::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ShowInstanceResponse::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ShowInstanceResponse::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ShowInstanceResponse::getName() const
{
    return name_;
}

void ShowInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

Flavor ShowInstanceResponse::getFlavor() const
{
    return flavor_;
}

void ShowInstanceResponse::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ShowInstanceResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void ShowInstanceResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ShowInstanceResponse::getStatus() const
{
    return status_;
}

void ShowInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowInstanceResponse::getRegionId() const
{
    return regionId_;
}

void ShowInstanceResponse::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ShowInstanceResponse::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ShowInstanceResponse::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ShowInstanceResponse::getDescription() const
{
    return description_;
}

void ShowInstanceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowInstanceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowInstanceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<AccessInfo>& ShowInstanceResponse::getAccessInfos()
{
    return accessInfos_;
}

void ShowInstanceResponse::setAccessInfos(const std::vector<AccessInfo>& value)
{
    accessInfos_ = value;
    accessInfosIsSet_ = true;
}

bool ShowInstanceResponse::accessInfosIsSet() const
{
    return accessInfosIsSet_;
}

void ShowInstanceResponse::unsetaccessInfos()
{
    accessInfosIsSet_ = false;
}

std::string ShowInstanceResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInstanceResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInstanceResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInstanceResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowInstanceResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowInstanceResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowInstanceResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowInstanceResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<Tag>& ShowInstanceResponse::getTags()
{
    return tags_;
}

void ShowInstanceResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowInstanceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowInstanceResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ShowInstanceResponse::getOrderId() const
{
    return orderId_;
}

void ShowInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ShowInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ShowInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

OperateWindow ShowInstanceResponse::getOperateWindow() const
{
    return operateWindow_;
}

void ShowInstanceResponse::setOperateWindow(const OperateWindow& value)
{
    operateWindow_ = value;
    operateWindowIsSet_ = true;
}

bool ShowInstanceResponse::operateWindowIsSet() const
{
    return operateWindowIsSet_;
}

void ShowInstanceResponse::unsetoperateWindow()
{
    operateWindowIsSet_ = false;
}

AdditionalParamsResp ShowInstanceResponse::getAdditionalParams() const
{
    return additionalParams_;
}

void ShowInstanceResponse::setAdditionalParams(const AdditionalParamsResp& value)
{
    additionalParams_ = value;
    additionalParamsIsSet_ = true;
}

bool ShowInstanceResponse::additionalParamsIsSet() const
{
    return additionalParamsIsSet_;
}

void ShowInstanceResponse::unsetadditionalParams()
{
    additionalParamsIsSet_ = false;
}

}
}
}
}
}


