

#include "huaweicloud/modelarts/v1/model/UpdateInferDeploymentScale.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferDeploymentScale::UpdateInferDeploymentScale()
{
    count_ = 0;
    countIsSet_ = false;
}

UpdateInferDeploymentScale::~UpdateInferDeploymentScale() = default;

void UpdateInferDeploymentScale::validate()
{
}

web::json::value UpdateInferDeploymentScale::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool UpdateInferDeploymentScale::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t UpdateInferDeploymentScale::getCount() const
{
    return count_;
}

void UpdateInferDeploymentScale::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool UpdateInferDeploymentScale::countIsSet() const
{
    return countIsSet_;
}

void UpdateInferDeploymentScale::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


