

#include "huaweicloud/dds/v3/model/AddReadonlyNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AddReadonlyNodeRequestBody::AddReadonlyNodeRequestBody()
{
    specCode_ = "";
    specCodeIsSet_ = false;
    num_ = 0;
    numIsSet_ = false;
    delay_ = 0;
    delayIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

AddReadonlyNodeRequestBody::~AddReadonlyNodeRequestBody() = default;

void AddReadonlyNodeRequestBody::validate()
{
}

web::json::value AddReadonlyNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool AddReadonlyNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::string AddReadonlyNodeRequestBody::getSpecCode() const
{
    return specCode_;
}

void AddReadonlyNodeRequestBody::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool AddReadonlyNodeRequestBody::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void AddReadonlyNodeRequestBody::unsetspecCode()
{
    specCodeIsSet_ = false;
}

int32_t AddReadonlyNodeRequestBody::getNum() const
{
    return num_;
}

void AddReadonlyNodeRequestBody::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool AddReadonlyNodeRequestBody::numIsSet() const
{
    return numIsSet_;
}

void AddReadonlyNodeRequestBody::unsetnum()
{
    numIsSet_ = false;
}

int32_t AddReadonlyNodeRequestBody::getDelay() const
{
    return delay_;
}

void AddReadonlyNodeRequestBody::setDelay(int32_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool AddReadonlyNodeRequestBody::delayIsSet() const
{
    return delayIsSet_;
}

void AddReadonlyNodeRequestBody::unsetdelay()
{
    delayIsSet_ = false;
}

bool AddReadonlyNodeRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void AddReadonlyNodeRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool AddReadonlyNodeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void AddReadonlyNodeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


