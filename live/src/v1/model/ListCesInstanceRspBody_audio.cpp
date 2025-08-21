

#include "huaweicloud/live/v1/model/ListCesInstanceRspBody_audio.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRspBody_audio::ListCesInstanceRspBody_audio()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListCesInstanceRspBody_audio::~ListCesInstanceRspBody_audio() = default;

void ListCesInstanceRspBody_audio::validate()
{
}

web::json::value ListCesInstanceRspBody_audio::toJson() const
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
bool ListCesInstanceRspBody_audio::fromJson(const web::json::value& val)
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


std::string ListCesInstanceRspBody_audio::getId() const
{
    return id_;
}

void ListCesInstanceRspBody_audio::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListCesInstanceRspBody_audio::idIsSet() const
{
    return idIsSet_;
}

void ListCesInstanceRspBody_audio::unsetid()
{
    idIsSet_ = false;
}

std::string ListCesInstanceRspBody_audio::getName() const
{
    return name_;
}

void ListCesInstanceRspBody_audio::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCesInstanceRspBody_audio::nameIsSet() const
{
    return nameIsSet_;
}

void ListCesInstanceRspBody_audio::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


