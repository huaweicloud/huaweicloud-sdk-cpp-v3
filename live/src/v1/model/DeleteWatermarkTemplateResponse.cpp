

#include "huaweicloud/live/v1/model/DeleteWatermarkTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteWatermarkTemplateResponse::DeleteWatermarkTemplateResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteWatermarkTemplateResponse::~DeleteWatermarkTemplateResponse() = default;

void DeleteWatermarkTemplateResponse::validate()
{
}

web::json::value DeleteWatermarkTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteWatermarkTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteWatermarkTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteWatermarkTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteWatermarkTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteWatermarkTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


