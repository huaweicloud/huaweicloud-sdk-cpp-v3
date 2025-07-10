

#include "huaweicloud/codeartsbuild/v3/model/StopTheJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StopTheJobResponse::StopTheJobResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

StopTheJobResponse::~StopTheJobResponse() = default;

void StopTheJobResponse::validate()
{
}

web::json::value StopTheJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool StopTheJobResponse::fromJson(const web::json::value& val)
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


std::string StopTheJobResponse::getStatus() const
{
    return status_;
}

void StopTheJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StopTheJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StopTheJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


