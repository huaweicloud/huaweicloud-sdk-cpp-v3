

#include "huaweicloud/cce/v3/model/NodePoolMetadataUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolMetadataUpdate::NodePoolMetadataUpdate()
{
    name_ = "";
    nameIsSet_ = false;
}

NodePoolMetadataUpdate::~NodePoolMetadataUpdate() = default;

void NodePoolMetadataUpdate::validate()
{
}

web::json::value NodePoolMetadataUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NodePoolMetadataUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string NodePoolMetadataUpdate::getName() const
{
    return name_;
}

void NodePoolMetadataUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodePoolMetadataUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void NodePoolMetadataUpdate::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


