

#include "huaweicloud/cbr/v1/model/CbcOrderResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CbcOrderResult::CbcOrderResult()
{
    cloudServiceId_ = "";
    cloudServiceIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    subscribeResult_ = 0;
    subscribeResultIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

CbcOrderResult::~CbcOrderResult() = default;

void CbcOrderResult::validate()
{
}

web::json::value CbcOrderResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudServiceIdIsSet_) {
        val[utility::conversions::to_string_t("cloudServiceId")] = ModelBase::toJson(cloudServiceId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("orderId")] = ModelBase::toJson(orderId_);
    }
    if(subscribeResultIsSet_) {
        val[utility::conversions::to_string_t("subscribeResult")] = ModelBase::toJson(subscribeResult_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resourceId")] = ModelBase::toJson(resourceId_);
    }

    return val;
}

bool CbcOrderResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloudServiceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudServiceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscribeResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscribeResult"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscribeResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string CbcOrderResult::getCloudServiceId() const
{
    return cloudServiceId_;
}

void CbcOrderResult::setCloudServiceId(const std::string& value)
{
    cloudServiceId_ = value;
    cloudServiceIdIsSet_ = true;
}

bool CbcOrderResult::cloudServiceIdIsSet() const
{
    return cloudServiceIdIsSet_;
}

void CbcOrderResult::unsetcloudServiceId()
{
    cloudServiceIdIsSet_ = false;
}

std::string CbcOrderResult::getOrderId() const
{
    return orderId_;
}

void CbcOrderResult::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CbcOrderResult::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CbcOrderResult::unsetorderId()
{
    orderIdIsSet_ = false;
}

int32_t CbcOrderResult::getSubscribeResult() const
{
    return subscribeResult_;
}

void CbcOrderResult::setSubscribeResult(int32_t value)
{
    subscribeResult_ = value;
    subscribeResultIsSet_ = true;
}

bool CbcOrderResult::subscribeResultIsSet() const
{
    return subscribeResultIsSet_;
}

void CbcOrderResult::unsetsubscribeResult()
{
    subscribeResultIsSet_ = false;
}

std::string CbcOrderResult::getResourceId() const
{
    return resourceId_;
}

void CbcOrderResult::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CbcOrderResult::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CbcOrderResult::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


