

#include "huaweicloud/metastudio/v1/model/DeleteDocumentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteDocumentResponse::DeleteDocumentResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteDocumentResponse::~DeleteDocumentResponse() = default;

void DeleteDocumentResponse::validate()
{
}

web::json::value DeleteDocumentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteDocumentResponse::fromJson(const web::json::value& val)
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


std::string DeleteDocumentResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteDocumentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteDocumentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteDocumentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


