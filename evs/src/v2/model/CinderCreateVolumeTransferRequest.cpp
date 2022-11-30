

#include "huaweicloud/evs/v2/model/CinderCreateVolumeTransferRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderCreateVolumeTransferRequest::CinderCreateVolumeTransferRequest()
{
    bodyIsSet_ = false;
}

CinderCreateVolumeTransferRequest::~CinderCreateVolumeTransferRequest() = default;

void CinderCreateVolumeTransferRequest::validate()
{
}

web::json::value CinderCreateVolumeTransferRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CinderCreateVolumeTransferRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CinderCreateVolumeTransferRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CinderCreateVolumeTransferRequestBody CinderCreateVolumeTransferRequest::getBody() const
{
    return body_;
}

void CinderCreateVolumeTransferRequest::setBody(const CinderCreateVolumeTransferRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CinderCreateVolumeTransferRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CinderCreateVolumeTransferRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


