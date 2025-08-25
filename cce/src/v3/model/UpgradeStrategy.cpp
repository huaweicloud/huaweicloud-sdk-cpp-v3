

#include "huaweicloud/cce/v3/model/UpgradeStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeStrategy::UpgradeStrategy()
{
    type_ = "";
    typeIsSet_ = false;
    inPlaceRollingUpdateIsSet_ = false;
}

UpgradeStrategy::~UpgradeStrategy() = default;

void UpgradeStrategy::validate()
{
}

web::json::value UpgradeStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(inPlaceRollingUpdateIsSet_) {
        val[utility::conversions::to_string_t("inPlaceRollingUpdate")] = ModelBase::toJson(inPlaceRollingUpdate_);
    }

    return val;
}
bool UpgradeStrategy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("inPlaceRollingUpdate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inPlaceRollingUpdate"));
        if(!fieldValue.is_null())
        {
            InPlaceRollingUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInPlaceRollingUpdate(refVal);
        }
    }
    return ok;
}


std::string UpgradeStrategy::getType() const
{
    return type_;
}

void UpgradeStrategy::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpgradeStrategy::typeIsSet() const
{
    return typeIsSet_;
}

void UpgradeStrategy::unsettype()
{
    typeIsSet_ = false;
}

InPlaceRollingUpdate UpgradeStrategy::getInPlaceRollingUpdate() const
{
    return inPlaceRollingUpdate_;
}

void UpgradeStrategy::setInPlaceRollingUpdate(const InPlaceRollingUpdate& value)
{
    inPlaceRollingUpdate_ = value;
    inPlaceRollingUpdateIsSet_ = true;
}

bool UpgradeStrategy::inPlaceRollingUpdateIsSet() const
{
    return inPlaceRollingUpdateIsSet_;
}

void UpgradeStrategy::unsetinPlaceRollingUpdate()
{
    inPlaceRollingUpdateIsSet_ = false;
}

}
}
}
}
}


