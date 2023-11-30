

#include "huaweicloud/eip/v3/model/UpdatePublicipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdatePublicipResponse::UpdatePublicipResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipIsSet_ = false;
}

UpdatePublicipResponse::~UpdatePublicipResponse() = default;

void UpdatePublicipResponse::validate()
{
}

web::json::value UpdatePublicipResponse::toJson() const
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
bool UpdatePublicipResponse::fromJson(const web::json::value& val)
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
            PublicipUpdateResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


std::string UpdatePublicipResponse::getRequestId() const
{
    return requestId_;
}

void UpdatePublicipResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdatePublicipResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdatePublicipResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PublicipUpdateResp UpdatePublicipResponse::getPublicip() const
{
    return publicip_;
}

void UpdatePublicipResponse::setPublicip(const PublicipUpdateResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool UpdatePublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void UpdatePublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


