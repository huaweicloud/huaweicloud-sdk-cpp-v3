

#include "huaweicloud/metastudio/v1/model/UpdateDocumentSegmentInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentSegmentInfoResponse::UpdateDocumentSegmentInfoResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDocumentSegmentInfoResponse::~UpdateDocumentSegmentInfoResponse() = default;

void UpdateDocumentSegmentInfoResponse::validate()
{
}

web::json::value UpdateDocumentSegmentInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDocumentSegmentInfoResponse::fromJson(const web::json::value& val)
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


std::string UpdateDocumentSegmentInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDocumentSegmentInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDocumentSegmentInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDocumentSegmentInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


