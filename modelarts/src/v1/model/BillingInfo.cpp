

#include "huaweicloud/modelarts/v1/model/BillingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BillingInfo::BillingInfo()
{
    code_ = "";
    codeIsSet_ = false;
    unitNum_ = 0;
    unitNumIsSet_ = false;
}

BillingInfo::~BillingInfo() = default;

void BillingInfo::validate()
{
}

web::json::value BillingInfo::toJson() const
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
bool BillingInfo::fromJson(const web::json::value& val)
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


std::string BillingInfo::getCode() const
{
    return code_;
}

void BillingInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BillingInfo::codeIsSet() const
{
    return codeIsSet_;
}

void BillingInfo::unsetcode()
{
    codeIsSet_ = false;
}

int32_t BillingInfo::getUnitNum() const
{
    return unitNum_;
}

void BillingInfo::setUnitNum(int32_t value)
{
    unitNum_ = value;
    unitNumIsSet_ = true;
}

bool BillingInfo::unitNumIsSet() const
{
    return unitNumIsSet_;
}

void BillingInfo::unsetunitNum()
{
    unitNumIsSet_ = false;
}

}
}
}
}
}


