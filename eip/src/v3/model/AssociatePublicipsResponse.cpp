

#include "huaweicloud/eip/v3/model/AssociatePublicipsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AssociatePublicipsResponse::AssociatePublicipsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipIsSet_ = false;
}

AssociatePublicipsResponse::~AssociatePublicipsResponse() = default;

void AssociatePublicipsResponse::validate()
{
}

web::json::value AssociatePublicipsResponse::toJson() const
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

bool AssociatePublicipsResponse::fromJson(const web::json::value& val)
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


std::string AssociatePublicipsResponse::getRequestId() const
{
    return requestId_;
}

void AssociatePublicipsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AssociatePublicipsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AssociatePublicipsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PublicipInstanceResp AssociatePublicipsResponse::getPublicip() const
{
    return publicip_;
}

void AssociatePublicipsResponse::setPublicip(const PublicipInstanceResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool AssociatePublicipsResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void AssociatePublicipsResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


