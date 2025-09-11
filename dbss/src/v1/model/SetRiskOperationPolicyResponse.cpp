

#include "huaweicloud/dbss/v1/model/SetRiskOperationPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetRiskOperationPolicyResponse::SetRiskOperationPolicyResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetRiskOperationPolicyResponse::~SetRiskOperationPolicyResponse() = default;

void SetRiskOperationPolicyResponse::validate()
{
}

web::json::value SetRiskOperationPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetRiskOperationPolicyResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SetRiskOperationPolicyResponse::getStatus() const
{
    return status_;
}

void SetRiskOperationPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetRiskOperationPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetRiskOperationPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


