

#include "huaweicloud/metastudio/v1/model/UpdateHotWordsSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotWordsSwitchResponse::UpdateHotWordsSwitchResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateHotWordsSwitchResponse::~UpdateHotWordsSwitchResponse() = default;

void UpdateHotWordsSwitchResponse::validate()
{
}

web::json::value UpdateHotWordsSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateHotWordsSwitchResponse::fromJson(const web::json::value& val)
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


std::string UpdateHotWordsSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateHotWordsSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateHotWordsSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateHotWordsSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


