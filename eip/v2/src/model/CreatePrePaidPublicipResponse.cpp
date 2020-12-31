

#include "huaweicloud/eip/model/CreatePrePaidPublicipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePrePaidPublicipResponse::CreatePrePaidPublicipResponse()
{
    publicipIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

CreatePrePaidPublicipResponse::~CreatePrePaidPublicipResponse() = default;

void CreatePrePaidPublicipResponse::validate()
{
}

web::json::value CreatePrePaidPublicipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}

bool CreatePrePaidPublicipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipCreateResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}


PublicipCreateResp CreatePrePaidPublicipResponse::getPublicip() const
{
    return publicip_;
}

void CreatePrePaidPublicipResponse::setPublicip(const PublicipCreateResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool CreatePrePaidPublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void CreatePrePaidPublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

std::string CreatePrePaidPublicipResponse::getOrderId() const
{
    return orderId_;
}

void CreatePrePaidPublicipResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreatePrePaidPublicipResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreatePrePaidPublicipResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string CreatePrePaidPublicipResponse::getPublicipId() const
{
    return publicipId_;
}

void CreatePrePaidPublicipResponse::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool CreatePrePaidPublicipResponse::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void CreatePrePaidPublicipResponse::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


