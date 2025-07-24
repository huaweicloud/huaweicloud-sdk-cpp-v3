

#include "huaweicloud/cloudtest/v1/model/ResultValueListProjectTestCaseFieldVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListProjectTestCaseFieldVo::ResultValueListProjectTestCaseFieldVo()
{
    valueIsSet_ = false;
}

ResultValueListProjectTestCaseFieldVo::~ResultValueListProjectTestCaseFieldVo() = default;

void ResultValueListProjectTestCaseFieldVo::validate()
{
}

web::json::value ResultValueListProjectTestCaseFieldVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueListProjectTestCaseFieldVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectTestCaseFieldVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::vector<ProjectTestCaseFieldVo>& ResultValueListProjectTestCaseFieldVo::getValue()
{
    return value_;
}

void ResultValueListProjectTestCaseFieldVo::setValue(const std::vector<ProjectTestCaseFieldVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListProjectTestCaseFieldVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListProjectTestCaseFieldVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


