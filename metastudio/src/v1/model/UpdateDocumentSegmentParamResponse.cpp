

#include "huaweicloud/metastudio/v1/model/UpdateDocumentSegmentParamResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentSegmentParamResponse::UpdateDocumentSegmentParamResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDocumentSegmentParamResponse::~UpdateDocumentSegmentParamResponse() = default;

void UpdateDocumentSegmentParamResponse::validate()
{
}

web::json::value UpdateDocumentSegmentParamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDocumentSegmentParamResponse::fromJson(const web::json::value& val)
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


std::string UpdateDocumentSegmentParamResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDocumentSegmentParamResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDocumentSegmentParamResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDocumentSegmentParamResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


