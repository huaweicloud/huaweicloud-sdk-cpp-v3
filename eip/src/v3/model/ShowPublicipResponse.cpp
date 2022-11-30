

#include "huaweicloud/eip/v3/model/ShowPublicipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowPublicipResponse::ShowPublicipResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    publicipIsSet_ = false;
}

ShowPublicipResponse::~ShowPublicipResponse() = default;

void ShowPublicipResponse::validate()
{
}

web::json::value ShowPublicipResponse::toJson() const
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

bool ShowPublicipResponse::fromJson(const web::json::value& val)
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
            PublicipSingleShowResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


std::string ShowPublicipResponse::getRequestId() const
{
    return requestId_;
}

void ShowPublicipResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowPublicipResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowPublicipResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PublicipSingleShowResp ShowPublicipResponse::getPublicip() const
{
    return publicip_;
}

void ShowPublicipResponse::setPublicip(const PublicipSingleShowResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool ShowPublicipResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void ShowPublicipResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


