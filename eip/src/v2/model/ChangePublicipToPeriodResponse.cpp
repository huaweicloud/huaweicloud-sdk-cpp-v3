

#include "huaweicloud/eip/v2/model/ChangePublicipToPeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ChangePublicipToPeriodResponse::ChangePublicipToPeriodResponse()
{
    publicipIdsIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ChangePublicipToPeriodResponse::~ChangePublicipToPeriodResponse() = default;

void ChangePublicipToPeriodResponse::validate()
{
}

web::json::value ChangePublicipToPeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdsIsSet_) {
        val[utility::conversions::to_string_t("publicip_ids")] = ModelBase::toJson(publicipIds_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ChangePublicipToPeriodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChangePublicipToPeriodResponse::getPublicipIds()
{
    return publicipIds_;
}

void ChangePublicipToPeriodResponse::setPublicipIds(const std::vector<std::string>& value)
{
    publicipIds_ = value;
    publicipIdsIsSet_ = true;
}

bool ChangePublicipToPeriodResponse::publicipIdsIsSet() const
{
    return publicipIdsIsSet_;
}

void ChangePublicipToPeriodResponse::unsetpublicipIds()
{
    publicipIdsIsSet_ = false;
}

std::string ChangePublicipToPeriodResponse::getOrderId() const
{
    return orderId_;
}

void ChangePublicipToPeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangePublicipToPeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangePublicipToPeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangePublicipToPeriodResponse::getRequestId() const
{
    return requestId_;
}

void ChangePublicipToPeriodResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ChangePublicipToPeriodResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ChangePublicipToPeriodResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


