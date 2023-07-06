

#include "huaweicloud/eip/v3/model/UpdateAssociatePublicipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateAssociatePublicipResponse::UpdateAssociatePublicipResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipIsSet_ = false;
}

UpdateAssociatePublicipResponse::~UpdateAssociatePublicipResponse() = default;

void UpdateAssociatePublicipResponse::validate()
{
}

web::json::value UpdateAssociatePublicipResponse::toJson() const
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

bool UpdateAssociatePublicipResponse::fromJson(const web::json::value& val)
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

std::string UpdateAssociatePublicipResponse::getRequestId() const
{
    return requestId_;
}

void UpdateAssociatePublicipResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateAssociatePublicipResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateAssociatePublicipResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PublicipInstanceResp UpdateAssociatePublicipResponse::getPublicip() const
{
    return publicip_;
}

void UpdateAssociatePublicipResponse::setPublicip(const PublicipInstanceResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool UpdateAssociatePublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void UpdateAssociatePublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


