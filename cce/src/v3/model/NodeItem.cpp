

#include "huaweicloud/cce/v3/model/NodeItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeItem::NodeItem()
{
    uid_ = "";
    uidIsSet_ = false;
}

NodeItem::~NodeItem() = default;

void NodeItem::validate()
{
}

web::json::value NodeItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }

    return val;
}
bool NodeItem::fromJson(const web::json::value& val)
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


std::string NodeItem::getUid() const
{
    return uid_;
}

void NodeItem::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool NodeItem::uidIsSet() const
{
    return uidIsSet_;
}

void NodeItem::unsetuid()
{
    uidIsSet_ = false;
}

}
}
}
}
}


