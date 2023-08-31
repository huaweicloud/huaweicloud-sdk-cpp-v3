

#include "huaweicloud/codeartsdeploy/v2/model/CreateAppResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateAppResponse::CreateAppResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

CreateAppResponse::~CreateAppResponse() = default;

void CreateAppResponse::validate()
{
}

web::json::value CreateAppResponse::toJson() const
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

bool CreateAppResponse::fromJson(const web::json::value& val)
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

std::string CreateAppResponse::getStatus() const
{
    return status_;
}

void CreateAppResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAppResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAppResponse::unsetstatus()
{
    statusIsSet_ = false;
}

AppBaseResponse CreateAppResponse::getResult() const
{
    return result_;
}

void CreateAppResponse::setResult(const AppBaseResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateAppResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateAppResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


