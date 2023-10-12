

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowBalanceStatusResponse::ShowBalanceStatusResponse()
{
    balanced_ = false;
    balancedIsSet_ = false;
}

ShowBalanceStatusResponse::~ShowBalanceStatusResponse() = default;

void ShowBalanceStatusResponse::validate()
{
}

web::json::value ShowBalanceStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(balancedIsSet_) {
        val[utility::conversions::to_string_t("balanced")] = ModelBase::toJson(balanced_);
    }

    return val;
}
bool ShowBalanceStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("balanced"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("balanced"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBalanced(refVal);
        }
    }
    return ok;
}


bool ShowBalanceStatusResponse::isBalanced() const
{
    return balanced_;
}

void ShowBalanceStatusResponse::setBalanced(bool value)
{
    balanced_ = value;
    balancedIsSet_ = true;
}

bool ShowBalanceStatusResponse::balancedIsSet() const
{
    return balancedIsSet_;
}

void ShowBalanceStatusResponse::unsetbalanced()
{
    balancedIsSet_ = false;
}

}
}
}
}
}


