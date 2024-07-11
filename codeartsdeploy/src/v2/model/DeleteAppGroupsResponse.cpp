

#include "huaweicloud/codeartsdeploy/v2/model/DeleteAppGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteAppGroupsResponse::DeleteAppGroupsResponse()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteAppGroupsResponse::~DeleteAppGroupsResponse() = default;

void DeleteAppGroupsResponse::validate()
{
}

web::json::value DeleteAppGroupsResponse::toJson() const
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
bool DeleteAppGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string DeleteAppGroupsResponse::getResult() const
{
    return result_;
}

void DeleteAppGroupsResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAppGroupsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAppGroupsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteAppGroupsResponse::getStatus() const
{
    return status_;
}

void DeleteAppGroupsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAppGroupsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAppGroupsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


