

#include "huaweicloud/functiongraph/v2/model/OperateErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




OperateErrorInfo::OperateErrorInfo()
{
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
    errorDetail_ = "";
    errorDetailIsSet_ = false;
}

OperateErrorInfo::~OperateErrorInfo() = default;

void OperateErrorInfo::validate()
{
}

web::json::value OperateErrorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowUrnIsSet_) {
        val[utility::conversions::to_string_t("workflow_urn")] = ModelBase::toJson(workflowUrn_);
    }
    if(errorDetailIsSet_) {
        val[utility::conversions::to_string_t("error_detail")] = ModelBase::toJson(errorDetail_);
    }

    return val;
}
bool OperateErrorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorDetail(refVal);
        }
    }
    return ok;
}


std::string OperateErrorInfo::getWorkflowUrn() const
{
    return workflowUrn_;
}

void OperateErrorInfo::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool OperateErrorInfo::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void OperateErrorInfo::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string OperateErrorInfo::getErrorDetail() const
{
    return errorDetail_;
}

void OperateErrorInfo::setErrorDetail(const std::string& value)
{
    errorDetail_ = value;
    errorDetailIsSet_ = true;
}

bool OperateErrorInfo::errorDetailIsSet() const
{
    return errorDetailIsSet_;
}

void OperateErrorInfo::unseterrorDetail()
{
    errorDetailIsSet_ = false;
}

}
}
}
}
}


