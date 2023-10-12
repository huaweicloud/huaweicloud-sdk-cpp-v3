

#include "huaweicloud/evs/v2/model/CinderAcceptVolumeTransferRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderAcceptVolumeTransferRequest::CinderAcceptVolumeTransferRequest()
{
    transferId_ = "";
    transferIdIsSet_ = false;
    bodyIsSet_ = false;
}

CinderAcceptVolumeTransferRequest::~CinderAcceptVolumeTransferRequest() = default;

void CinderAcceptVolumeTransferRequest::validate()
{
}

web::json::value CinderAcceptVolumeTransferRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIdIsSet_) {
        val[utility::conversions::to_string_t("transfer_id")] = ModelBase::toJson(transferId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CinderAcceptVolumeTransferRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CinderAcceptVolumeTransferRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CinderAcceptVolumeTransferRequest::getTransferId() const
{
    return transferId_;
}

void CinderAcceptVolumeTransferRequest::setTransferId(const std::string& value)
{
    transferId_ = value;
    transferIdIsSet_ = true;
}

bool CinderAcceptVolumeTransferRequest::transferIdIsSet() const
{
    return transferIdIsSet_;
}

void CinderAcceptVolumeTransferRequest::unsettransferId()
{
    transferIdIsSet_ = false;
}

CinderAcceptVolumeTransferRequestBody CinderAcceptVolumeTransferRequest::getBody() const
{
    return body_;
}

void CinderAcceptVolumeTransferRequest::setBody(const CinderAcceptVolumeTransferRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CinderAcceptVolumeTransferRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CinderAcceptVolumeTransferRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


