

#include "huaweicloud/codeartsbuild/v3/model/ListJobConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJobConfigResponse::ListJobConfigResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListJobConfigResponse::~ListJobConfigResponse() = default;

void ListJobConfigResponse::validate()
{
}

web::json::value ListJobConfigResponse::toJson() const
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
bool ListJobConfigResponse::fromJson(const web::json::value& val)
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


CreateBuildJobRequestBody ListJobConfigResponse::getResult() const
{
    return result_;
}

void ListJobConfigResponse::setResult(const CreateBuildJobRequestBody& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListJobConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListJobConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListJobConfigResponse::getError() const
{
    return error_;
}

void ListJobConfigResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListJobConfigResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListJobConfigResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListJobConfigResponse::getStatus() const
{
    return status_;
}

void ListJobConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJobConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListJobConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


