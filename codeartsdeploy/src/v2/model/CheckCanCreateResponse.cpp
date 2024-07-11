

#include "huaweicloud/codeartsdeploy/v2/model/CheckCanCreateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckCanCreateResponse::CheckCanCreateResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CheckCanCreateResponse::~CheckCanCreateResponse() = default;

void CheckCanCreateResponse::validate()
{
}

web::json::value CheckCanCreateResponse::toJson() const
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
bool CheckCanCreateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CheckCanCreateResponseBody_result refVal;
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


CheckCanCreateResponseBody_result CheckCanCreateResponse::getResult() const
{
    return result_;
}

void CheckCanCreateResponse::setResult(const CheckCanCreateResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckCanCreateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckCanCreateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CheckCanCreateResponse::getStatus() const
{
    return status_;
}

void CheckCanCreateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckCanCreateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckCanCreateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


