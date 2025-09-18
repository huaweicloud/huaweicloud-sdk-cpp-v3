

#include "huaweicloud/projectman/v4/model/ShowIterationV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIterationV4Request::ShowIterationV4Request()
{
    iterationId_ = 0;
    iterationIdIsSet_ = false;
}

ShowIterationV4Request::~ShowIterationV4Request() = default;

void ShowIterationV4Request::validate()
{
}

web::json::value ShowIterationV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }

    return val;
}
bool ShowIterationV4Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    return ok;
}


int32_t ShowIterationV4Request::getIterationId() const
{
    return iterationId_;
}

void ShowIterationV4Request::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool ShowIterationV4Request::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void ShowIterationV4Request::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

}
}
}
}
}


