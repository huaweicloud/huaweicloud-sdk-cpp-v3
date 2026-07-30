

#include "huaweicloud/modelarts/v1/model/NodePoolMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodePoolMetadata::NodePoolMetadata()
{
    name_ = "";
    nameIsSet_ = false;
}

NodePoolMetadata::~NodePoolMetadata() = default;

void NodePoolMetadata::validate()
{
}

web::json::value NodePoolMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NodePoolMetadata::fromJson(const web::json::value& val)
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


std::string NodePoolMetadata::getName() const
{
    return name_;
}

void NodePoolMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodePoolMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void NodePoolMetadata::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


