

#include "huaweicloud/metastudio/v1/model/UpdateMcpServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateMcpServerResponse::UpdateMcpServerResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateMcpServerResponse::~UpdateMcpServerResponse() = default;

void UpdateMcpServerResponse::validate()
{
}

web::json::value UpdateMcpServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateMcpServerResponse::fromJson(const web::json::value& val)
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


std::string UpdateMcpServerResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateMcpServerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateMcpServerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateMcpServerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


