

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildInfoRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildInfoRecordResponse::ShowBuildInfoRecordResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowBuildInfoRecordResponse::~ShowBuildInfoRecordResponse() = default;

void ShowBuildInfoRecordResponse::validate()
{
}

web::json::value ShowBuildInfoRecordResponse::toJson() const
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
bool ShowBuildInfoRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BuildInfoRecord refVal;
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


BuildInfoRecord ShowBuildInfoRecordResponse::getResult() const
{
    return result_;
}

void ShowBuildInfoRecordResponse::setResult(const BuildInfoRecord& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildInfoRecordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildInfoRecordResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowBuildInfoRecordResponse::getError() const
{
    return error_;
}

void ShowBuildInfoRecordResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildInfoRecordResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildInfoRecordResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowBuildInfoRecordResponse::getStatus() const
{
    return status_;
}

void ShowBuildInfoRecordResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildInfoRecordResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildInfoRecordResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


