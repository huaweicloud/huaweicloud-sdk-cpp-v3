

#include "huaweicloud/metastudio/v1/model/CancelPhotoDigitalHumanVideoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CancelPhotoDigitalHumanVideoResponse::CancelPhotoDigitalHumanVideoResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CancelPhotoDigitalHumanVideoResponse::~CancelPhotoDigitalHumanVideoResponse() = default;

void CancelPhotoDigitalHumanVideoResponse::validate()
{
}

web::json::value CancelPhotoDigitalHumanVideoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CancelPhotoDigitalHumanVideoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CancelPhotoDigitalHumanVideoResponse::getXRequestId() const
{
    return xRequestId_;
}

void CancelPhotoDigitalHumanVideoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CancelPhotoDigitalHumanVideoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CancelPhotoDigitalHumanVideoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


