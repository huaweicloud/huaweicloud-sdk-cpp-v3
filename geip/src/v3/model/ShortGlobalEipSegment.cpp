

#include "huaweicloud/geip/v3/model/ShortGlobalEipSegment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShortGlobalEipSegment::ShortGlobalEipSegment()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ShortGlobalEipSegment::~ShortGlobalEipSegment() = default;

void ShortGlobalEipSegment::validate()
{
}

web::json::value ShortGlobalEipSegment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShortGlobalEipSegment::fromJson(const web::json::value& val)
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


std::string ShortGlobalEipSegment::getId() const
{
    return id_;
}

void ShortGlobalEipSegment::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShortGlobalEipSegment::idIsSet() const
{
    return idIsSet_;
}

void ShortGlobalEipSegment::unsetid()
{
    idIsSet_ = false;
}

std::string ShortGlobalEipSegment::getName() const
{
    return name_;
}

void ShortGlobalEipSegment::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShortGlobalEipSegment::nameIsSet() const
{
    return nameIsSet_;
}

void ShortGlobalEipSegment::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


