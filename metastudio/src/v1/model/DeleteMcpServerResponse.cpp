

#include "huaweicloud/metastudio/v1/model/DeleteMcpServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteMcpServerResponse::DeleteMcpServerResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteMcpServerResponse::~DeleteMcpServerResponse() = default;

void DeleteMcpServerResponse::validate()
{
}

web::json::value DeleteMcpServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteMcpServerResponse::fromJson(const web::json::value& val)
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


std::string DeleteMcpServerResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteMcpServerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteMcpServerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteMcpServerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


