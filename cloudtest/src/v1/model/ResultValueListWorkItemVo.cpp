

#include "huaweicloud/cloudtest/v1/model/ResultValueListWorkItemVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListWorkItemVo::ResultValueListWorkItemVo()
{
    valueIsSet_ = false;
}

ResultValueListWorkItemVo::~ResultValueListWorkItemVo() = default;

void ResultValueListWorkItemVo::validate()
{
}

web::json::value ResultValueListWorkItemVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueListWorkItemVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::vector<WorkItemVo>& ResultValueListWorkItemVo::getValue()
{
    return value_;
}

void ResultValueListWorkItemVo::setValue(const std::vector<WorkItemVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListWorkItemVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListWorkItemVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


