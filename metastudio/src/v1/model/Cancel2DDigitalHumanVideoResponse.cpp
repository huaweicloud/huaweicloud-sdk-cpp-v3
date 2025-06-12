

#include "huaweicloud/metastudio/v1/model/Cancel2DDigitalHumanVideoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Cancel2DDigitalHumanVideoResponse::Cancel2DDigitalHumanVideoResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

Cancel2DDigitalHumanVideoResponse::~Cancel2DDigitalHumanVideoResponse() = default;

void Cancel2DDigitalHumanVideoResponse::validate()
{
}

web::json::value Cancel2DDigitalHumanVideoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool Cancel2DDigitalHumanVideoResponse::fromJson(const web::json::value& val)
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


std::string Cancel2DDigitalHumanVideoResponse::getXRequestId() const
{
    return xRequestId_;
}

void Cancel2DDigitalHumanVideoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool Cancel2DDigitalHumanVideoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void Cancel2DDigitalHumanVideoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


