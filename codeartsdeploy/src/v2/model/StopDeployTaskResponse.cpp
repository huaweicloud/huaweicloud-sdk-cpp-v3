

#include "huaweicloud/codeartsdeploy/v2/model/StopDeployTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




StopDeployTaskResponse::StopDeployTaskResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

StopDeployTaskResponse::~StopDeployTaskResponse() = default;

void StopDeployTaskResponse::validate()
{
}

web::json::value StopDeployTaskResponse::toJson() const
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
bool StopDeployTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CancelInfo refVal;
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


CancelInfo StopDeployTaskResponse::getResult() const
{
    return result_;
}

void StopDeployTaskResponse::setResult(const CancelInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopDeployTaskResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopDeployTaskResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string StopDeployTaskResponse::getStatus() const
{
    return status_;
}

void StopDeployTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StopDeployTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StopDeployTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


