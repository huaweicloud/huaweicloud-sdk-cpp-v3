

#include "huaweicloud/cbr/v1/model/BillingUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BillingUpdate::BillingUpdate()
{
    consistentLevel_ = "";
    consistentLevelIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

BillingUpdate::~BillingUpdate() = default;

void BillingUpdate::validate()
{
}

web::json::value BillingUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(consistentLevelIsSet_) {
        val[utility::conversions::to_string_t("consistent_level")] = ModelBase::toJson(consistentLevel_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool BillingUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("consistent_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistent_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistentLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string BillingUpdate::getConsistentLevel() const
{
    return consistentLevel_;
}

void BillingUpdate::setConsistentLevel(const std::string& value)
{
    consistentLevel_ = value;
    consistentLevelIsSet_ = true;
}

bool BillingUpdate::consistentLevelIsSet() const
{
    return consistentLevelIsSet_;
}

void BillingUpdate::unsetconsistentLevel()
{
    consistentLevelIsSet_ = false;
}

int32_t BillingUpdate::getSize() const
{
    return size_;
}

void BillingUpdate::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BillingUpdate::sizeIsSet() const
{
    return sizeIsSet_;
}

void BillingUpdate::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


