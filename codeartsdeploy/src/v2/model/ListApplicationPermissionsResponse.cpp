

#include "huaweicloud/codeartsdeploy/v2/model/ListApplicationPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListApplicationPermissionsResponse::ListApplicationPermissionsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListApplicationPermissionsResponse::~ListApplicationPermissionsResponse() = default;

void ListApplicationPermissionsResponse::validate()
{
}

web::json::value ListApplicationPermissionsResponse::toJson() const
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
bool ListApplicationPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationPermissionVO> refVal;
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


std::vector<ApplicationPermissionVO>& ListApplicationPermissionsResponse::getResult()
{
    return result_;
}

void ListApplicationPermissionsResponse::setResult(const std::vector<ApplicationPermissionVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListApplicationPermissionsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListApplicationPermissionsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListApplicationPermissionsResponse::getStatus() const
{
    return status_;
}

void ListApplicationPermissionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListApplicationPermissionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListApplicationPermissionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


