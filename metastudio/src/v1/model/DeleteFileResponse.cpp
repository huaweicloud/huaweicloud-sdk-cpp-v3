

#include "huaweicloud/metastudio/v1/model/DeleteFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteFileResponse::DeleteFileResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteFileResponse::~DeleteFileResponse() = default;

void DeleteFileResponse::validate()
{
}

web::json::value DeleteFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteFileResponse::fromJson(const web::json::value& val)
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


std::string DeleteFileResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteFileResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteFileResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteFileResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


