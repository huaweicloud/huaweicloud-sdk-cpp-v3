

#include "huaweicloud/gaussdbfornosql/v3/model/ShowResourcesDetailResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowResourcesDetailResponseBody::ShowResourcesDetailResponseBody()
{
    type_ = "";
    typeIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

ShowResourcesDetailResponseBody::~ShowResourcesDetailResponseBody() = default;

void ShowResourcesDetailResponseBody::validate()
{
}

web::json::value ShowResourcesDetailResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}

bool ShowResourcesDetailResponseBody::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ShowResourcesDetailResponseBody::getType() const
{
    return type_;
}

void ShowResourcesDetailResponseBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowResourcesDetailResponseBody::typeIsSet() const
{
    return typeIsSet_;
}

void ShowResourcesDetailResponseBody::unsettype()
{
    typeIsSet_ = false;
}

int32_t ShowResourcesDetailResponseBody::getQuota() const
{
    return quota_;
}

void ShowResourcesDetailResponseBody::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ShowResourcesDetailResponseBody::quotaIsSet() const
{
    return quotaIsSet_;
}

void ShowResourcesDetailResponseBody::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t ShowResourcesDetailResponseBody::getUsed() const
{
    return used_;
}

void ShowResourcesDetailResponseBody::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ShowResourcesDetailResponseBody::usedIsSet() const
{
    return usedIsSet_;
}

void ShowResourcesDetailResponseBody::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


