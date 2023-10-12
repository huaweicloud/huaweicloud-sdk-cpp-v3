

#include "huaweicloud/gaussdbfornosql/v3/model/ExpandInstanceNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ExpandInstanceNodeRequestBody::ExpandInstanceNodeRequestBody()
{
    num_ = 0;
    numIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

ExpandInstanceNodeRequestBody::~ExpandInstanceNodeRequestBody() = default;

void ExpandInstanceNodeRequestBody::validate()
{
}

web::json::value ExpandInstanceNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool ExpandInstanceNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


int32_t ExpandInstanceNodeRequestBody::getNum() const
{
    return num_;
}

void ExpandInstanceNodeRequestBody::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool ExpandInstanceNodeRequestBody::numIsSet() const
{
    return numIsSet_;
}

void ExpandInstanceNodeRequestBody::unsetnum()
{
    numIsSet_ = false;
}

std::string ExpandInstanceNodeRequestBody::getSubnetId() const
{
    return subnetId_;
}

void ExpandInstanceNodeRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ExpandInstanceNodeRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ExpandInstanceNodeRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ExpandInstanceNodeRequestBody::getIsAutoPay() const
{
    return isAutoPay_;
}

void ExpandInstanceNodeRequestBody::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ExpandInstanceNodeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ExpandInstanceNodeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


