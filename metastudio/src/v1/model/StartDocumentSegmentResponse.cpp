

#include "huaweicloud/metastudio/v1/model/StartDocumentSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartDocumentSegmentResponse::StartDocumentSegmentResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StartDocumentSegmentResponse::~StartDocumentSegmentResponse() = default;

void StartDocumentSegmentResponse::validate()
{
}

web::json::value StartDocumentSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StartDocumentSegmentResponse::fromJson(const web::json::value& val)
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


std::string StartDocumentSegmentResponse::getXRequestId() const
{
    return xRequestId_;
}

void StartDocumentSegmentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StartDocumentSegmentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StartDocumentSegmentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


