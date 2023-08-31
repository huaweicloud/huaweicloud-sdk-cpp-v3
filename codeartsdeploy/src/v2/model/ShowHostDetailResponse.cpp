

#include "huaweicloud/codeartsdeploy/v2/model/ShowHostDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowHostDetailResponse::ShowHostDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ShowHostDetailResponse::~ShowHostDetailResponse() = default;

void ShowHostDetailResponse::validate()
{
}

web::json::value ShowHostDetailResponse::toJson() const
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

bool ShowHostDetailResponse::fromJson(const web::json::value& val)
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
            HostInfoDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

std::string ShowHostDetailResponse::getStatus() const
{
    return status_;
}

void ShowHostDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHostDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHostDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

HostInfoDetail ShowHostDetailResponse::getResult() const
{
    return result_;
}

void ShowHostDetailResponse::setResult(const HostInfoDetail& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowHostDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowHostDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


