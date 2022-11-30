

#include "huaweicloud/eip/v3/model/UpdateDisassociatePublicipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateDisassociatePublicipResponse::UpdateDisassociatePublicipResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipIsSet_ = false;
}

UpdateDisassociatePublicipResponse::~UpdateDisassociatePublicipResponse() = default;

void UpdateDisassociatePublicipResponse::validate()
{
}

web::json::value UpdateDisassociatePublicipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool UpdateDisassociatePublicipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipInstanceResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


std::string UpdateDisassociatePublicipResponse::getRequestId() const
{
    return requestId_;
}

void UpdateDisassociatePublicipResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateDisassociatePublicipResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateDisassociatePublicipResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PublicipInstanceResp UpdateDisassociatePublicipResponse::getPublicip() const
{
    return publicip_;
}

void UpdateDisassociatePublicipResponse::setPublicip(const PublicipInstanceResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool UpdateDisassociatePublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void UpdateDisassociatePublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


