

#include "huaweicloud/metastudio/v1/model/DeleteLlmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteLlmConfigResponse::DeleteLlmConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteLlmConfigResponse::~DeleteLlmConfigResponse() = default;

void DeleteLlmConfigResponse::validate()
{
}

web::json::value DeleteLlmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteLlmConfigResponse::fromJson(const web::json::value& val)
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


std::string DeleteLlmConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteLlmConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteLlmConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteLlmConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


