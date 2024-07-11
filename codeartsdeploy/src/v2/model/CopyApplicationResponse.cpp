

#include "huaweicloud/codeartsdeploy/v2/model/CopyApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CopyApplicationResponse::CopyApplicationResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CopyApplicationResponse::~CopyApplicationResponse() = default;

void CopyApplicationResponse::validate()
{
}

web::json::value CopyApplicationResponse::toJson() const
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
bool CopyApplicationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AppBaseInfo refVal;
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


AppBaseInfo CopyApplicationResponse::getResult() const
{
    return result_;
}

void CopyApplicationResponse::setResult(const AppBaseInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CopyApplicationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CopyApplicationResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CopyApplicationResponse::getStatus() const
{
    return status_;
}

void CopyApplicationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CopyApplicationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CopyApplicationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


