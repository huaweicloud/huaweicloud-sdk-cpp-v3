

#include "huaweicloud/modelarts/v1/model/BillingResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BillingResource::BillingResource()
{
    code_ = "";
    codeIsSet_ = false;
    unitNum_ = 0;
    unitNumIsSet_ = false;
}

BillingResource::~BillingResource() = default;

void BillingResource::validate()
{
}

web::json::value BillingResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(unitNumIsSet_) {
        val[utility::conversions::to_string_t("unit_num")] = ModelBase::toJson(unitNum_);
    }

    return val;
}
bool BillingResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitNum(refVal);
        }
    }
    return ok;
}


std::string BillingResource::getCode() const
{
    return code_;
}

void BillingResource::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BillingResource::codeIsSet() const
{
    return codeIsSet_;
}

void BillingResource::unsetcode()
{
    codeIsSet_ = false;
}

int32_t BillingResource::getUnitNum() const
{
    return unitNum_;
}

void BillingResource::setUnitNum(int32_t value)
{
    unitNum_ = value;
    unitNumIsSet_ = true;
}

bool BillingResource::unitNumIsSet() const
{
    return unitNumIsSet_;
}

void BillingResource::unsetunitNum()
{
    unitNumIsSet_ = false;
}

}
}
}
}
}


