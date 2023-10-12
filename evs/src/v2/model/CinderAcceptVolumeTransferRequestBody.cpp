

#include "huaweicloud/evs/v2/model/CinderAcceptVolumeTransferRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderAcceptVolumeTransferRequestBody::CinderAcceptVolumeTransferRequestBody()
{
    acceptIsSet_ = false;
}

CinderAcceptVolumeTransferRequestBody::~CinderAcceptVolumeTransferRequestBody() = default;

void CinderAcceptVolumeTransferRequestBody::validate()
{
}

web::json::value CinderAcceptVolumeTransferRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceptIsSet_) {
        val[utility::conversions::to_string_t("accept")] = ModelBase::toJson(accept_);
    }

    return val;
}
bool CinderAcceptVolumeTransferRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accept"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accept"));
        if(!fieldValue.is_null())
        {
            CinderAcceptVolumeTransferOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccept(refVal);
        }
    }
    return ok;
}


CinderAcceptVolumeTransferOption CinderAcceptVolumeTransferRequestBody::getAccept() const
{
    return accept_;
}

void CinderAcceptVolumeTransferRequestBody::setAccept(const CinderAcceptVolumeTransferOption& value)
{
    accept_ = value;
    acceptIsSet_ = true;
}

bool CinderAcceptVolumeTransferRequestBody::acceptIsSet() const
{
    return acceptIsSet_;
}

void CinderAcceptVolumeTransferRequestBody::unsetaccept()
{
    acceptIsSet_ = false;
}

}
}
}
}
}


