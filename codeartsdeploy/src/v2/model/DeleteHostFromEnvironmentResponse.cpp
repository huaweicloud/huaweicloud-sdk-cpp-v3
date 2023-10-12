

#include "huaweicloud/codeartsdeploy/v2/model/DeleteHostFromEnvironmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteHostFromEnvironmentResponse::DeleteHostFromEnvironmentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

DeleteHostFromEnvironmentResponse::~DeleteHostFromEnvironmentResponse() = default;

void DeleteHostFromEnvironmentResponse::validate()
{
}

web::json::value DeleteHostFromEnvironmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteHostFromEnvironmentResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string DeleteHostFromEnvironmentResponse::getStatus() const
{
    return status_;
}

void DeleteHostFromEnvironmentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteHostFromEnvironmentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteHostFromEnvironmentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteHostFromEnvironmentResponse::getResult() const
{
    return result_;
}

void DeleteHostFromEnvironmentResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteHostFromEnvironmentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteHostFromEnvironmentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


