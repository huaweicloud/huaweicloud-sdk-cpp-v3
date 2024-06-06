

#include "huaweicloud/gaussdb/v3/model/SetRecyclePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetRecyclePolicyRequestBody::SetRecyclePolicyRequestBody()
{
    recyclePolicyIsSet_ = false;
}

SetRecyclePolicyRequestBody::~SetRecyclePolicyRequestBody() = default;

void SetRecyclePolicyRequestBody::validate()
{
}

web::json::value SetRecyclePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recyclePolicyIsSet_) {
        val[utility::conversions::to_string_t("recycle_policy")] = ModelBase::toJson(recyclePolicy_);
    }

    return val;
}
bool SetRecyclePolicyRequestBody::fromJson(const web::json::value& val)
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


RecyclePolicy SetRecyclePolicyRequestBody::getRecyclePolicy() const
{
    return recyclePolicy_;
}

void SetRecyclePolicyRequestBody::setRecyclePolicy(const RecyclePolicy& value)
{
    recyclePolicy_ = value;
    recyclePolicyIsSet_ = true;
}

bool SetRecyclePolicyRequestBody::recyclePolicyIsSet() const
{
    return recyclePolicyIsSet_;
}

void SetRecyclePolicyRequestBody::unsetrecyclePolicy()
{
    recyclePolicyIsSet_ = false;
}

}
}
}
}
}


