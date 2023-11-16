

#include "huaweicloud/codeartsbuild/v3/model/EnableBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




EnableBuildJobResponse::EnableBuildJobResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

EnableBuildJobResponse::~EnableBuildJobResponse() = default;

void EnableBuildJobResponse::validate()
{
}

web::json::value EnableBuildJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool EnableBuildJobResponse::fromJson(const web::json::value& val)
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


std::string EnableBuildJobResponse::getStatus() const
{
    return status_;
}

void EnableBuildJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EnableBuildJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void EnableBuildJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


