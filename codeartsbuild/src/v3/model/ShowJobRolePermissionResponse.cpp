

#include "huaweicloud/codeartsbuild/v3/model/ShowJobRolePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobRolePermissionResponse::ShowJobRolePermissionResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobRolePermissionResponse::~ShowJobRolePermissionResponse() = default;

void ShowJobRolePermissionResponse::validate()
{
}

web::json::value ShowJobRolePermissionResponse::toJson() const
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
bool ShowJobRolePermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowJobRolePermission_result> refVal;
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


std::vector<ShowJobRolePermission_result>& ShowJobRolePermissionResponse::getResult()
{
    return result_;
}

void ShowJobRolePermissionResponse::setResult(const std::vector<ShowJobRolePermission_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobRolePermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobRolePermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobRolePermissionResponse::getStatus() const
{
    return status_;
}

void ShowJobRolePermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobRolePermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobRolePermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


