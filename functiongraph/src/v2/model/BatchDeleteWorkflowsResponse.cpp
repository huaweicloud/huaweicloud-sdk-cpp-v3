

#include "huaweicloud/functiongraph/v2/model/BatchDeleteWorkflowsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




BatchDeleteWorkflowsResponse::BatchDeleteWorkflowsResponse()
{
    successIsSet_ = false;
    failIsSet_ = false;
}

BatchDeleteWorkflowsResponse::~BatchDeleteWorkflowsResponse() = default;

void BatchDeleteWorkflowsResponse::validate()
{
}

web::json::value BatchDeleteWorkflowsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failIsSet_) {
        val[utility::conversions::to_string_t("fail")] = ModelBase::toJson(fail_);
    }

    return val;
}
bool BatchDeleteWorkflowsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail"));
        if(!fieldValue.is_null())
        {
            std::vector<OperateErrorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFail(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteWorkflowsResponse::getSuccess()
{
    return success_;
}

void BatchDeleteWorkflowsResponse::setSuccess(const std::vector<std::string>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool BatchDeleteWorkflowsResponse::successIsSet() const
{
    return successIsSet_;
}

void BatchDeleteWorkflowsResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<OperateErrorInfo>& BatchDeleteWorkflowsResponse::getFail()
{
    return fail_;
}

void BatchDeleteWorkflowsResponse::setFail(const std::vector<OperateErrorInfo>& value)
{
    fail_ = value;
    failIsSet_ = true;
}

bool BatchDeleteWorkflowsResponse::failIsSet() const
{
    return failIsSet_;
}

void BatchDeleteWorkflowsResponse::unsetfail()
{
    failIsSet_ = false;
}

}
}
}
}
}


