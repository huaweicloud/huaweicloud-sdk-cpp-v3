

#include "huaweicloud/codeartspipeline/v2/model/DeleteRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteRuleResponse::DeleteRuleResponse()
{
    status_ = false;
    statusIsSet_ = false;
}

DeleteRuleResponse::~DeleteRuleResponse() = default;

void DeleteRuleResponse::validate()
{
}

web::json::value DeleteRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


bool DeleteRuleResponse::isStatus() const
{
    return status_;
}

void DeleteRuleResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


