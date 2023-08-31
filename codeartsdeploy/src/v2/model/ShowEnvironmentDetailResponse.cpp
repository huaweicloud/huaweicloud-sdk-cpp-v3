

#include "huaweicloud/codeartsdeploy/v2/model/ShowEnvironmentDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowEnvironmentDetailResponse::ShowEnvironmentDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ShowEnvironmentDetailResponse::~ShowEnvironmentDetailResponse() = default;

void ShowEnvironmentDetailResponse::validate()
{
}

web::json::value ShowEnvironmentDetailResponse::toJson() const
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

bool ShowEnvironmentDetailResponse::fromJson(const web::json::value& val)
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
            EnvironmentDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

std::string ShowEnvironmentDetailResponse::getStatus() const
{
    return status_;
}

void ShowEnvironmentDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowEnvironmentDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowEnvironmentDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

EnvironmentDetail ShowEnvironmentDetailResponse::getResult() const
{
    return result_;
}

void ShowEnvironmentDetailResponse::setResult(const EnvironmentDetail& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowEnvironmentDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowEnvironmentDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


