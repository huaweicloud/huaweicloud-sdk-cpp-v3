

#include "huaweicloud/codeartsdeploy/v2/model/CopyHostsToTargetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CopyHostsToTargetResponse::CopyHostsToTargetResponse()
{
    status_ = "";
    statusIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
}

CopyHostsToTargetResponse::~CopyHostsToTargetResponse() = default;

void CopyHostsToTargetResponse::validate()
{
}

web::json::value CopyHostsToTargetResponse::toJson() const
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
bool CopyHostsToTargetResponse::fromJson(const web::json::value& val)
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CopyHostsToTargetResponse::getStatus() const
{
    return status_;
}

void CopyHostsToTargetResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CopyHostsToTargetResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CopyHostsToTargetResponse::unsetstatus()
{
    statusIsSet_ = false;
}

bool CopyHostsToTargetResponse::isResult() const
{
    return result_;
}

void CopyHostsToTargetResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CopyHostsToTargetResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CopyHostsToTargetResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


