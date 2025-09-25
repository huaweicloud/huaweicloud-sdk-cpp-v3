

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAspStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAspStatusResponse::ShowAspStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowAspStatusResponse::~ShowAspStatusResponse() = default;

void ShowAspStatusResponse::validate()
{
}

web::json::value ShowAspStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowAspStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowAspStatusResponse::getStatus() const
{
    return status_;
}

void ShowAspStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAspStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAspStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


