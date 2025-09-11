

#include "huaweicloud/functiongraph/v2/model/Resources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




Resources::Resources()
{
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

Resources::~Resources() = default;

void Resources::validate()
{
}

web::json::value Resources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool Resources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


int32_t Resources::getQuota() const
{
    return quota_;
}

void Resources::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool Resources::quotaIsSet() const
{
    return quotaIsSet_;
}

void Resources::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t Resources::getUsed() const
{
    return used_;
}

void Resources::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool Resources::usedIsSet() const
{
    return usedIsSet_;
}

void Resources::unsetused()
{
    usedIsSet_ = false;
}

std::string Resources::getType() const
{
    return type_;
}

void Resources::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Resources::typeIsSet() const
{
    return typeIsSet_;
}

void Resources::unsettype()
{
    typeIsSet_ = false;
}

std::string Resources::getUnit() const
{
    return unit_;
}

void Resources::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool Resources::unitIsSet() const
{
    return unitIsSet_;
}

void Resources::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


