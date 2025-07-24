

#include "huaweicloud/cloudtest/v1/model/ShowUserAccessInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowUserAccessInfoResponse::ShowUserAccessInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ShowUserAccessInfoResponse::~ShowUserAccessInfoResponse() = default;

void ShowUserAccessInfoResponse::validate()
{
}

web::json::value ShowUserAccessInfoResponse::toJson() const
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
bool ShowUserAccessInfoResponse::fromJson(const web::json::value& val)
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
            ResultValueStringForOk refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowUserAccessInfoResponse::getStatus() const
{
    return status_;
}

void ShowUserAccessInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserAccessInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserAccessInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueStringForOk ShowUserAccessInfoResponse::getResult() const
{
    return result_;
}

void ShowUserAccessInfoResponse::setResult(const ResultValueStringForOk& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowUserAccessInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowUserAccessInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


