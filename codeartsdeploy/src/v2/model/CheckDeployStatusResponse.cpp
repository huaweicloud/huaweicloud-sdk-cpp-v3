

#include "huaweicloud/codeartsdeploy/v2/model/CheckDeployStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckDeployStatusResponse::CheckDeployStatusResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CheckDeployStatusResponse::~CheckDeployStatusResponse() = default;

void CheckDeployStatusResponse::validate()
{
}

web::json::value CheckDeployStatusResponse::toJson() const
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
bool CheckDeployStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            StateInfo refVal;
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


StateInfo CheckDeployStatusResponse::getResult() const
{
    return result_;
}

void CheckDeployStatusResponse::setResult(const StateInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckDeployStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckDeployStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CheckDeployStatusResponse::getStatus() const
{
    return status_;
}

void CheckDeployStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckDeployStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckDeployStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


