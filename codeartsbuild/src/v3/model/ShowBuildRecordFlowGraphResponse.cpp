

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFlowGraphResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordFlowGraphResponse::ShowBuildRecordFlowGraphResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowBuildRecordFlowGraphResponse::~ShowBuildRecordFlowGraphResponse() = default;

void ShowBuildRecordFlowGraphResponse::validate()
{
}

web::json::value ShowBuildRecordFlowGraphResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowBuildRecordFlowGraphResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FlowGraph2_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowBuildRecordFlowGraphResponse::getStatus() const
{
    return status_;
}

void ShowBuildRecordFlowGraphResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildRecordFlowGraphResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildRecordFlowGraphResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowBuildRecordFlowGraphResponse::getError() const
{
    return error_;
}

void ShowBuildRecordFlowGraphResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildRecordFlowGraphResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildRecordFlowGraphResponse::unseterror()
{
    errorIsSet_ = false;
}

FlowGraph2_result ShowBuildRecordFlowGraphResponse::getResult() const
{
    return result_;
}

void ShowBuildRecordFlowGraphResponse::setResult(const FlowGraph2_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildRecordFlowGraphResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildRecordFlowGraphResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


