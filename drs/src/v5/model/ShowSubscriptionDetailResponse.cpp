

#include "huaweicloud/drs/v5/model/ShowSubscriptionDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSubscriptionDetailResponse::ShowSubscriptionDetailResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subscriptionDataTypeIsSet_ = false;
    sourceEndpointIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    nowTime_ = "";
    nowTimeIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    chargeInfoIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ShowSubscriptionDetailResponse::~ShowSubscriptionDetailResponse() = default;

void ShowSubscriptionDetailResponse::validate()
{
}

web::json::value ShowSubscriptionDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subscriptionDataTypeIsSet_) {
        val[utility::conversions::to_string_t("subscription_data_type")] = ModelBase::toJson(subscriptionDataType_);
    }
    if(sourceEndpointIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint")] = ModelBase::toJson(sourceEndpoint_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(nowTimeIsSet_) {
        val[utility::conversions::to_string_t("now_time")] = ModelBase::toJson(nowTime_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ShowSubscriptionDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_data_type"));
        if(!fieldValue.is_null())
        {
            SubscriptionDataType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionDataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint"));
        if(!fieldValue.is_null())
        {
            SubscriptionEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("now_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("now_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNowTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfoVo refVal;
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
    return ok;
}


std::string ShowSubscriptionDetailResponse::getId() const
{
    return id_;
}

void ShowSubscriptionDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowSubscriptionDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getName() const
{
    return name_;
}

void ShowSubscriptionDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowSubscriptionDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getIp() const
{
    return ip_;
}

void ShowSubscriptionDetailResponse::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::ipIsSet() const
{
    return ipIsSet_;
}

void ShowSubscriptionDetailResponse::unsetip()
{
    ipIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowSubscriptionDetailResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowSubscriptionDetailResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getStatus() const
{
    return status_;
}

void ShowSubscriptionDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSubscriptionDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

SubscriptionDataType ShowSubscriptionDetailResponse::getSubscriptionDataType() const
{
    return subscriptionDataType_;
}

void ShowSubscriptionDetailResponse::setSubscriptionDataType(const SubscriptionDataType& value)
{
    subscriptionDataType_ = value;
    subscriptionDataTypeIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::subscriptionDataTypeIsSet() const
{
    return subscriptionDataTypeIsSet_;
}

void ShowSubscriptionDetailResponse::unsetsubscriptionDataType()
{
    subscriptionDataTypeIsSet_ = false;
}

SubscriptionEndpointInfo ShowSubscriptionDetailResponse::getSourceEndpoint() const
{
    return sourceEndpoint_;
}

void ShowSubscriptionDetailResponse::setSourceEndpoint(const SubscriptionEndpointInfo& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void ShowSubscriptionDetailResponse::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowSubscriptionDetailResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowSubscriptionDetailResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowSubscriptionDetailResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowSubscriptionDetailResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getNowTime() const
{
    return nowTime_;
}

void ShowSubscriptionDetailResponse::setNowTime(const std::string& value)
{
    nowTime_ = value;
    nowTimeIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::nowTimeIsSet() const
{
    return nowTimeIsSet_;
}

void ShowSubscriptionDetailResponse::unsetnowTime()
{
    nowTimeIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getEngineType() const
{
    return engineType_;
}

void ShowSubscriptionDetailResponse::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ShowSubscriptionDetailResponse::unsetengineType()
{
    engineTypeIsSet_ = false;
}

ChargeInfoVo ShowSubscriptionDetailResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void ShowSubscriptionDetailResponse::setChargeInfo(const ChargeInfoVo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void ShowSubscriptionDetailResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string ShowSubscriptionDetailResponse::getDescription() const
{
    return description_;
}

void ShowSubscriptionDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowSubscriptionDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowSubscriptionDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


