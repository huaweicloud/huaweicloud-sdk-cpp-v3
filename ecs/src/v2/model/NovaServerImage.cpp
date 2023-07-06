

#include "huaweicloud/ecs/v2/model/NovaServerImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerImage::NovaServerImage()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
}

NovaServerImage::~NovaServerImage() = default;

void NovaServerImage::validate()
{
}

web::json::value NovaServerImage::toJson() const
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

bool NovaServerImage::fromJson(const web::json::value& val)
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
            std::vector<NovaLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}

std::string NovaServerImage::getId() const
{
    return id_;
}

void NovaServerImage::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaServerImage::idIsSet() const
{
    return idIsSet_;
}

void NovaServerImage::unsetid()
{
    idIsSet_ = false;
}

std::vector<NovaLink>& NovaServerImage::getLinks()
{
    return links_;
}

void NovaServerImage::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaServerImage::linksIsSet() const
{
    return linksIsSet_;
}

void NovaServerImage::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


