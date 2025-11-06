

#include "huaweicloud/codeartsrepo/v3/model/UpdateMergeRequestApprovalStateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




UpdateMergeRequestApprovalStateResponse::UpdateMergeRequestApprovalStateResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateMergeRequestApprovalStateResponse::~UpdateMergeRequestApprovalStateResponse() = default;

void UpdateMergeRequestApprovalStateResponse::validate()
{
}

web::json::value UpdateMergeRequestApprovalStateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateMergeRequestApprovalStateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ApproverBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


ApproverBasicDto UpdateMergeRequestApprovalStateResponse::getResult() const
{
    return result_;
}

void UpdateMergeRequestApprovalStateResponse::setResult(const ApproverBasicDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateMergeRequestApprovalStateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateMergeRequestApprovalStateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateMergeRequestApprovalStateResponse::getStatus() const
{
    return status_;
}

void UpdateMergeRequestApprovalStateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateMergeRequestApprovalStateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateMergeRequestApprovalStateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


