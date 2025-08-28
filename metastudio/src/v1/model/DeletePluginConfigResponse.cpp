

#include "huaweicloud/metastudio/v1/model/DeletePluginConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeletePluginConfigResponse::DeletePluginConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeletePluginConfigResponse::~DeletePluginConfigResponse() = default;

void DeletePluginConfigResponse::validate()
{
}

web::json::value DeletePluginConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeletePluginConfigResponse::fromJson(const web::json::value& val)
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


std::string DeletePluginConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeletePluginConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeletePluginConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeletePluginConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


