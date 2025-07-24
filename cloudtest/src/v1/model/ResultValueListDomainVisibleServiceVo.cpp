

#include "huaweicloud/cloudtest/v1/model/ResultValueListDomainVisibleServiceVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListDomainVisibleServiceVo::ResultValueListDomainVisibleServiceVo()
{
    valueIsSet_ = false;
}

ResultValueListDomainVisibleServiceVo::~ResultValueListDomainVisibleServiceVo() = default;

void ResultValueListDomainVisibleServiceVo::validate()
{
}

web::json::value ResultValueListDomainVisibleServiceVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueListDomainVisibleServiceVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainVisibleServiceVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::vector<DomainVisibleServiceVo>& ResultValueListDomainVisibleServiceVo::getValue()
{
    return value_;
}

void ResultValueListDomainVisibleServiceVo::setValue(const std::vector<DomainVisibleServiceVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListDomainVisibleServiceVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListDomainVisibleServiceVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


