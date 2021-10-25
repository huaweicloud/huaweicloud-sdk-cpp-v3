

#include "huaweicloud/eip/v3/model/DisassociatePublicipsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DisassociatePublicipsResponse::DisassociatePublicipsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipIsSet_ = false;
}

DisassociatePublicipsResponse::~DisassociatePublicipsResponse() = default;

void DisassociatePublicipsResponse::validate()
{
}

web::json::value DisassociatePublicipsResponse::toJson() const
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

bool DisassociatePublicipsResponse::fromJson(const web::json::value& val)
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


std::string DisassociatePublicipsResponse::getRequestId() const
{
    return requestId_;
}

void DisassociatePublicipsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DisassociatePublicipsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DisassociatePublicipsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PublicipInstanceResp DisassociatePublicipsResponse::getPublicip() const
{
    return publicip_;
}

void DisassociatePublicipsResponse::setPublicip(const PublicipInstanceResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool DisassociatePublicipsResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void DisassociatePublicipsResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


