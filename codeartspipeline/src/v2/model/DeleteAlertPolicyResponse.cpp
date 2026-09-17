

#include "huaweicloud/codeartspipeline/v2/model/DeleteAlertPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteAlertPolicyResponse::DeleteAlertPolicyResponse()
{
    success_ = false;
    successIsSet_ = false;
}

DeleteAlertPolicyResponse::~DeleteAlertPolicyResponse() = default;

void DeleteAlertPolicyResponse::validate()
{
}

web::json::value DeleteAlertPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool DeleteAlertPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


bool DeleteAlertPolicyResponse::isSuccess() const
{
    return success_;
}

void DeleteAlertPolicyResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool DeleteAlertPolicyResponse::successIsSet() const
{
    return successIsSet_;
}

void DeleteAlertPolicyResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


