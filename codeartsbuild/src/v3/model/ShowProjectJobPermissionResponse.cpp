

#include "huaweicloud/codeartsbuild/v3/model/ShowProjectJobPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowProjectJobPermissionResponse::ShowProjectJobPermissionResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowProjectJobPermissionResponse::~ShowProjectJobPermissionResponse() = default;

void ShowProjectJobPermissionResponse::validate()
{
}

web::json::value ShowProjectJobPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowProjectJobPermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowJobPermission_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
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


ShowJobPermission_result ShowProjectJobPermissionResponse::getResult() const
{
    return result_;
}

void ShowProjectJobPermissionResponse::setResult(const ShowJobPermission_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProjectJobPermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProjectJobPermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowProjectJobPermissionResponse::getStatus() const
{
    return status_;
}

void ShowProjectJobPermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProjectJobPermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProjectJobPermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


