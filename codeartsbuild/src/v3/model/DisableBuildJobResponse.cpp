

#include "huaweicloud/codeartsbuild/v3/model/DisableBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableBuildJobResponse::DisableBuildJobResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DisableBuildJobResponse::~DisableBuildJobResponse() = default;

void DisableBuildJobResponse::validate()
{
}

web::json::value DisableBuildJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DisableBuildJobResponse::fromJson(const web::json::value& val)
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


std::string DisableBuildJobResponse::getStatus() const
{
    return status_;
}

void DisableBuildJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DisableBuildJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DisableBuildJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


