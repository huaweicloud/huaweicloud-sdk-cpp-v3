

#include "huaweicloud/aad/v1/model/UpdateProtectedIpBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateProtectedIpBody::UpdateProtectedIpBody()
{
    id_ = "";
    idIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

UpdateProtectedIpBody::~UpdateProtectedIpBody() = default;

void UpdateProtectedIpBody::validate()
{
}

web::json::value UpdateProtectedIpBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool UpdateProtectedIpBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


std::string UpdateProtectedIpBody::getId() const
{
    return id_;
}

void UpdateProtectedIpBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateProtectedIpBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateProtectedIpBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateProtectedIpBody::getTag() const
{
    return tag_;
}

void UpdateProtectedIpBody::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool UpdateProtectedIpBody::tagIsSet() const
{
    return tagIsSet_;
}

void UpdateProtectedIpBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


