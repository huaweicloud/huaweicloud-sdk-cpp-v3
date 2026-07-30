

#include "huaweicloud/modelarts/v1/model/NodeConfigTemplateMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeConfigTemplateMeta::NodeConfigTemplateMeta()
{
    name_ = "";
    nameIsSet_ = false;
}

NodeConfigTemplateMeta::~NodeConfigTemplateMeta() = default;

void NodeConfigTemplateMeta::validate()
{
}

web::json::value NodeConfigTemplateMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NodeConfigTemplateMeta::fromJson(const web::json::value& val)
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


std::string NodeConfigTemplateMeta::getName() const
{
    return name_;
}

void NodeConfigTemplateMeta::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeConfigTemplateMeta::nameIsSet() const
{
    return nameIsSet_;
}

void NodeConfigTemplateMeta::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


