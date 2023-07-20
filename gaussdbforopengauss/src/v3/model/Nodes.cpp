

#include "huaweicloud/gaussdbforopengauss/v3/model/Nodes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Nodes::Nodes()
{
    id_ = "";
    idIsSet_ = false;
    componentsIsSet_ = false;
}

Nodes::~Nodes() = default;

void Nodes::validate()
{
}

web::json::value Nodes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(componentsIsSet_) {
        val[utility::conversions::to_string_t("components")] = ModelBase::toJson(components_);
    }

    return val;
}

bool Nodes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("components"));
        if(!fieldValue.is_null())
        {
            std::vector<Components> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponents(refVal);
        }
    }
    return ok;
}

std::string Nodes::getId() const
{
    return id_;
}

void Nodes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Nodes::idIsSet() const
{
    return idIsSet_;
}

void Nodes::unsetid()
{
    idIsSet_ = false;
}

std::vector<Components>& Nodes::getComponents()
{
    return components_;
}

void Nodes::setComponents(const std::vector<Components>& value)
{
    components_ = value;
    componentsIsSet_ = true;
}

bool Nodes::componentsIsSet() const
{
    return componentsIsSet_;
}

void Nodes::unsetcomponents()
{
    componentsIsSet_ = false;
}

}
}
}
}
}


