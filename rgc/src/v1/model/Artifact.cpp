

#include "huaweicloud/rgc/v1/model/Artifact.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




Artifact::Artifact()
{
    contentIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

Artifact::~Artifact() = default;

void Artifact::validate()
{
}

web::json::value Artifact::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool Artifact::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            Content refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


Content Artifact::getContent() const
{
    return content_;
}

void Artifact::setContent(const Content& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool Artifact::contentIsSet() const
{
    return contentIsSet_;
}

void Artifact::unsetcontent()
{
    contentIsSet_ = false;
}

std::string Artifact::getType() const
{
    return type_;
}

void Artifact::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Artifact::typeIsSet() const
{
    return typeIsSet_;
}

void Artifact::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


