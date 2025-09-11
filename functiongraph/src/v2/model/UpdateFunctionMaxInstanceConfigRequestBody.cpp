

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionMaxInstanceConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionMaxInstanceConfigRequestBody::UpdateFunctionMaxInstanceConfigRequestBody()
{
    maxInstanceNum_ = 0;
    maxInstanceNumIsSet_ = false;
}

UpdateFunctionMaxInstanceConfigRequestBody::~UpdateFunctionMaxInstanceConfigRequestBody() = default;

void UpdateFunctionMaxInstanceConfigRequestBody::validate()
{
}

web::json::value UpdateFunctionMaxInstanceConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxInstanceNumIsSet_) {
        val[utility::conversions::to_string_t("max_instance_num")] = ModelBase::toJson(maxInstanceNum_);
    }

    return val;
}
bool UpdateFunctionMaxInstanceConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxInstanceNum(refVal);
        }
    }
    return ok;
}


int32_t UpdateFunctionMaxInstanceConfigRequestBody::getMaxInstanceNum() const
{
    return maxInstanceNum_;
}

void UpdateFunctionMaxInstanceConfigRequestBody::setMaxInstanceNum(int32_t value)
{
    maxInstanceNum_ = value;
    maxInstanceNumIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigRequestBody::maxInstanceNumIsSet() const
{
    return maxInstanceNumIsSet_;
}

void UpdateFunctionMaxInstanceConfigRequestBody::unsetmaxInstanceNum()
{
    maxInstanceNumIsSet_ = false;
}

}
}
}
}
}


