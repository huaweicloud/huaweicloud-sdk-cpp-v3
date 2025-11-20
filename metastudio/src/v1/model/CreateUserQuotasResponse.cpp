

#include "huaweicloud/metastudio/v1/model/CreateUserQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateUserQuotasResponse::CreateUserQuotasResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateUserQuotasResponse::~CreateUserQuotasResponse() = default;

void CreateUserQuotasResponse::validate()
{
}

web::json::value CreateUserQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateUserQuotasResponse::fromJson(const web::json::value& val)
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


std::string CreateUserQuotasResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateUserQuotasResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateUserQuotasResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateUserQuotasResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


