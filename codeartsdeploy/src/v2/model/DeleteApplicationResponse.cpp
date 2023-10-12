

#include "huaweicloud/codeartsdeploy/v2/model/DeleteApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteApplicationResponse::DeleteApplicationResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

DeleteApplicationResponse::~DeleteApplicationResponse() = default;

void DeleteApplicationResponse::validate()
{
}

web::json::value DeleteApplicationResponse::toJson() const
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
bool DeleteApplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteApplicationResponse::getStatus() const
{
    return status_;
}

void DeleteApplicationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteApplicationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteApplicationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

AppBaseResponse DeleteApplicationResponse::getResult() const
{
    return result_;
}

void DeleteApplicationResponse::setResult(const AppBaseResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteApplicationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteApplicationResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


