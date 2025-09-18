

#include "huaweicloud/ga/v1/model/UpdateLogtankRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateLogtankRequestBody::UpdateLogtankRequestBody()
{
    logtankIsSet_ = false;
}

UpdateLogtankRequestBody::~UpdateLogtankRequestBody() = default;

void UpdateLogtankRequestBody::validate()
{
}

web::json::value UpdateLogtankRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logtankIsSet_) {
        val[utility::conversions::to_string_t("logtank")] = ModelBase::toJson(logtank_);
    }

    return val;
}
bool UpdateLogtankRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logtank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank"));
        if(!fieldValue.is_null())
        {
            UpdateLogtankOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtank(refVal);
        }
    }
    return ok;
}


UpdateLogtankOption UpdateLogtankRequestBody::getLogtank() const
{
    return logtank_;
}

void UpdateLogtankRequestBody::setLogtank(const UpdateLogtankOption& value)
{
    logtank_ = value;
    logtankIsSet_ = true;
}

bool UpdateLogtankRequestBody::logtankIsSet() const
{
    return logtankIsSet_;
}

void UpdateLogtankRequestBody::unsetlogtank()
{
    logtankIsSet_ = false;
}

}
}
}
}
}


