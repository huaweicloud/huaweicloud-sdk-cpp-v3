

#include "huaweicloud/codeartsbuild/v3/model/DisableTheJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableTheJobResponse::DisableTheJobResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DisableTheJobResponse::~DisableTheJobResponse() = default;

void DisableTheJobResponse::validate()
{
}

web::json::value DisableTheJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DisableTheJobResponse::fromJson(const web::json::value& val)
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


std::string DisableTheJobResponse::getStatus() const
{
    return status_;
}

void DisableTheJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DisableTheJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DisableTheJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


