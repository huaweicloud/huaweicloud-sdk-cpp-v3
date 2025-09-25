

#include "huaweicloud/codeartspipeline/v2/model/UpdateRuleSetStatusReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateRuleSetStatusReq::UpdateRuleSetStatusReq()
{
    isValid_ = false;
    isValidIsSet_ = false;
}

UpdateRuleSetStatusReq::~UpdateRuleSetStatusReq() = default;

void UpdateRuleSetStatusReq::validate()
{
}

web::json::value UpdateRuleSetStatusReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }

    return val;
}
bool UpdateRuleSetStatusReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    return ok;
}


bool UpdateRuleSetStatusReq::isIsValid() const
{
    return isValid_;
}

void UpdateRuleSetStatusReq::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool UpdateRuleSetStatusReq::isValidIsSet() const
{
    return isValidIsSet_;
}

void UpdateRuleSetStatusReq::unsetisValid()
{
    isValidIsSet_ = false;
}

}
}
}
}
}


