

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppInfoResponse::UpdateAppInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

UpdateAppInfoResponse::~UpdateAppInfoResponse() = default;

void UpdateAppInfoResponse::validate()
{
}

web::json::value UpdateAppInfoResponse::toJson() const
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
bool UpdateAppInfoResponse::fromJson(const web::json::value& val)
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
            AppBaseResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateAppInfoResponse::getStatus() const
{
    return status_;
}

void UpdateAppInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAppInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAppInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

AppBaseResponse UpdateAppInfoResponse::getResult() const
{
    return result_;
}

void UpdateAppInfoResponse::setResult(const AppBaseResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAppInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAppInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


