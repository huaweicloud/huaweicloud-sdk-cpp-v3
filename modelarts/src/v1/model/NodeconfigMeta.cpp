

#include "huaweicloud/modelarts/v1/model/NodeconfigMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigMeta::NodeconfigMeta()
{
    name_ = "";
    nameIsSet_ = false;
}

NodeconfigMeta::~NodeconfigMeta() = default;

void NodeconfigMeta::validate()
{
}

web::json::value NodeconfigMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NodeconfigMeta::fromJson(const web::json::value& val)
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


std::string NodeconfigMeta::getName() const
{
    return name_;
}

void NodeconfigMeta::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeconfigMeta::nameIsSet() const
{
    return nameIsSet_;
}

void NodeconfigMeta::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


