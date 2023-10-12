

#include "huaweicloud/eip/v3/model/EipResourcesAvailableV3RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




EipResourcesAvailableV3RequestBody::EipResourcesAvailableV3RequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

EipResourcesAvailableV3RequestBody::~EipResourcesAvailableV3RequestBody() = default;

void EipResourcesAvailableV3RequestBody::validate()
{
}

web::json::value EipResourcesAvailableV3RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool EipResourcesAvailableV3RequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string EipResourcesAvailableV3RequestBody::getType() const
{
    return type_;
}

void EipResourcesAvailableV3RequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EipResourcesAvailableV3RequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void EipResourcesAvailableV3RequestBody::unsettype()
{
    typeIsSet_ = false;
}

int32_t EipResourcesAvailableV3RequestBody::getLimit() const
{
    return limit_;
}

void EipResourcesAvailableV3RequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool EipResourcesAvailableV3RequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void EipResourcesAvailableV3RequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


