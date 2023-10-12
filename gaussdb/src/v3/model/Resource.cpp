

#include "huaweicloud/gaussdb/v3/model/Resource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




Resource::Resource()
{
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
}

Resource::~Resource() = default;

void Resource::validate()
{
}

web::json::value Resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}
bool Resource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    return ok;
}


std::string Resource::getType() const
{
    return type_;
}

void Resource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Resource::typeIsSet() const
{
    return typeIsSet_;
}

void Resource::unsettype()
{
    typeIsSet_ = false;
}

int32_t Resource::getUsed() const
{
    return used_;
}

void Resource::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool Resource::usedIsSet() const
{
    return usedIsSet_;
}

void Resource::unsetused()
{
    usedIsSet_ = false;
}

int32_t Resource::getQuota() const
{
    return quota_;
}

void Resource::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool Resource::quotaIsSet() const
{
    return quotaIsSet_;
}

void Resource::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


