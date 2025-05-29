

#include "huaweicloud/codeartsbuild/v3/model/ShowJobConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobConfigResponse::ShowJobConfigResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobConfigResponse::~ShowJobConfigResponse() = default;

void ShowJobConfigResponse::validate()
{
}

web::json::value ShowJobConfigResponse::toJson() const
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
bool ShowJobConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CreateBuildJobRequestBody refVal;
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


CreateBuildJobRequestBody ShowJobConfigResponse::getResult() const
{
    return result_;
}

void ShowJobConfigResponse::setResult(const CreateBuildJobRequestBody& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobConfigResponse::getError() const
{
    return error_;
}

void ShowJobConfigResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobConfigResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobConfigResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowJobConfigResponse::getStatus() const
{
    return status_;
}

void ShowJobConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


