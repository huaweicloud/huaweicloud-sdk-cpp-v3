

#include "huaweicloud/dds/v3/model/RecyclePolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RecyclePolicyRequestBody::RecyclePolicyRequestBody()
{
    recyclePolicyIsSet_ = false;
}

RecyclePolicyRequestBody::~RecyclePolicyRequestBody() = default;

void RecyclePolicyRequestBody::validate()
{
}

web::json::value RecyclePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recyclePolicyIsSet_) {
        val[utility::conversions::to_string_t("recycle_policy")] = ModelBase::toJson(recyclePolicy_);
    }

    return val;
}

bool RecyclePolicyRequestBody::fromJson(const web::json::value& val)
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

RecyclePolicy RecyclePolicyRequestBody::getRecyclePolicy() const
{
    return recyclePolicy_;
}

void RecyclePolicyRequestBody::setRecyclePolicy(const RecyclePolicy& value)
{
    recyclePolicy_ = value;
    recyclePolicyIsSet_ = true;
}

bool RecyclePolicyRequestBody::recyclePolicyIsSet() const
{
    return recyclePolicyIsSet_;
}

void RecyclePolicyRequestBody::unsetrecyclePolicy()
{
    recyclePolicyIsSet_ = false;
}

}
}
}
}
}


