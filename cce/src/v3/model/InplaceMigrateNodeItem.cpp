

#include "huaweicloud/cce/v3/model/InplaceMigrateNodeItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InplaceMigrateNodeItem::InplaceMigrateNodeItem()
{
    uid_ = "";
    uidIsSet_ = false;
}

InplaceMigrateNodeItem::~InplaceMigrateNodeItem() = default;

void InplaceMigrateNodeItem::validate()
{
}

web::json::value InplaceMigrateNodeItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }

    return val;
}
bool InplaceMigrateNodeItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    return ok;
}


std::string InplaceMigrateNodeItem::getUid() const
{
    return uid_;
}

void InplaceMigrateNodeItem::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool InplaceMigrateNodeItem::uidIsSet() const
{
    return uidIsSet_;
}

void InplaceMigrateNodeItem::unsetuid()
{
    uidIsSet_ = false;
}

}
}
}
}
}


