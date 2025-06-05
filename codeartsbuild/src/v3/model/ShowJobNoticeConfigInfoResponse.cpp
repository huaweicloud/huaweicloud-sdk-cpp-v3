

#include "huaweicloud/codeartsbuild/v3/model/ShowJobNoticeConfigInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobNoticeConfigInfoResponse::ShowJobNoticeConfigInfoResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobNoticeConfigInfoResponse::~ShowJobNoticeConfigInfoResponse() = default;

void ShowJobNoticeConfigInfoResponse::validate()
{
}

web::json::value ShowJobNoticeConfigInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowJobNoticeConfigInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryJobNoticeItems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


std::vector<QueryJobNoticeItems>& ShowJobNoticeConfigInfoResponse::getResult()
{
    return result_;
}

void ShowJobNoticeConfigInfoResponse::setResult(const std::vector<QueryJobNoticeItems>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobNoticeConfigInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobNoticeConfigInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobNoticeConfigInfoResponse::getError() const
{
    return error_;
}

void ShowJobNoticeConfigInfoResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobNoticeConfigInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobNoticeConfigInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowJobNoticeConfigInfoResponse::getStatus() const
{
    return status_;
}

void ShowJobNoticeConfigInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobNoticeConfigInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobNoticeConfigInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


