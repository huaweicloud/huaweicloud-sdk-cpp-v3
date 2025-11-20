

#include "huaweicloud/metastudio/v1/model/DeleteUserQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteUserQuotasResponse::DeleteUserQuotasResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteUserQuotasResponse::~DeleteUserQuotasResponse() = default;

void DeleteUserQuotasResponse::validate()
{
}

web::json::value DeleteUserQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteUserQuotasResponse::fromJson(const web::json::value& val)
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


std::string DeleteUserQuotasResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteUserQuotasResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteUserQuotasResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteUserQuotasResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


