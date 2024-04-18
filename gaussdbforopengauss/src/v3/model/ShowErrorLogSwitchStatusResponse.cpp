

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowErrorLogSwitchStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowErrorLogSwitchStatusResponse::ShowErrorLogSwitchStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowErrorLogSwitchStatusResponse::~ShowErrorLogSwitchStatusResponse() = default;

void ShowErrorLogSwitchStatusResponse::validate()
{
}

web::json::value ShowErrorLogSwitchStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowErrorLogSwitchStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowErrorLogSwitchStatusResponse::getStatus() const
{
    return status_;
}

void ShowErrorLogSwitchStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowErrorLogSwitchStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowErrorLogSwitchStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


