

#include "huaweicloud/eip/v3/model/DisableNat64Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DisableNat64Response::DisableNat64Response()
{
    publicipIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DisableNat64Response::~DisableNat64Response() = default;

void DisableNat64Response::validate()
{
}

web::json::value DisableNat64Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DisableNat64Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
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


PublicipResp DisableNat64Response::getPublicip() const
{
    return publicip_;
}

void DisableNat64Response::setPublicip(const PublicipResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool DisableNat64Response::publicipIsSet() const
{
    return publicipIsSet_;
}

void DisableNat64Response::unsetpublicip()
{
    publicipIsSet_ = false;
}

std::string DisableNat64Response::getRequestId() const
{
    return requestId_;
}

void DisableNat64Response::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DisableNat64Response::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DisableNat64Response::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


