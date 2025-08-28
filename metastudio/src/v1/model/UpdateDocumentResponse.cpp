

#include "huaweicloud/metastudio/v1/model/UpdateDocumentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentResponse::UpdateDocumentResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDocumentResponse::~UpdateDocumentResponse() = default;

void UpdateDocumentResponse::validate()
{
}

web::json::value UpdateDocumentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDocumentResponse::fromJson(const web::json::value& val)
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


std::string UpdateDocumentResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDocumentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDocumentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDocumentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


