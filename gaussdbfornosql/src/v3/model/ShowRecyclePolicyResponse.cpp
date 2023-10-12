

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRecyclePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRecyclePolicyResponse::ShowRecyclePolicyResponse()
{
    recyclePolicyIsSet_ = false;
}

ShowRecyclePolicyResponse::~ShowRecyclePolicyResponse() = default;

void ShowRecyclePolicyResponse::validate()
{
}

web::json::value ShowRecyclePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recyclePolicyIsSet_) {
        val[utility::conversions::to_string_t("recycle_policy")] = ModelBase::toJson(recyclePolicy_);
    }

    return val;
}
bool ShowRecyclePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recycle_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_policy"));
        if(!fieldValue.is_null())
        {
            RecyclePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecyclePolicy(refVal);
        }
    }
    return ok;
}


RecyclePolicy ShowRecyclePolicyResponse::getRecyclePolicy() const
{
    return recyclePolicy_;
}

void ShowRecyclePolicyResponse::setRecyclePolicy(const RecyclePolicy& value)
{
    recyclePolicy_ = value;
    recyclePolicyIsSet_ = true;
}

bool ShowRecyclePolicyResponse::recyclePolicyIsSet() const
{
    return recyclePolicyIsSet_;
}

void ShowRecyclePolicyResponse::unsetrecyclePolicy()
{
    recyclePolicyIsSet_ = false;
}

}
}
}
}
}


