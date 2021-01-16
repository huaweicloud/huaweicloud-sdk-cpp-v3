

#include "huaweicloud/ecs/v2/model/SimpleFlavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




SimpleFlavor::SimpleFlavor()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
}

SimpleFlavor::~SimpleFlavor() = default;

void SimpleFlavor::validate()
{
}

web::json::value SimpleFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}

bool SimpleFlavor::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}


std::string SimpleFlavor::getId() const
{
    return id_;
}

void SimpleFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SimpleFlavor::idIsSet() const
{
    return idIsSet_;
}

void SimpleFlavor::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& SimpleFlavor::getLinks()
{
    return links_;
}

void SimpleFlavor::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool SimpleFlavor::linksIsSet() const
{
    return linksIsSet_;
}

void SimpleFlavor::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


