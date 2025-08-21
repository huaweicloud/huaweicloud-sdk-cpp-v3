

#include "huaweicloud/live/v1/model/ListCesInstanceRspBody_medialive_mpc.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRspBody_medialive_mpc::ListCesInstanceRspBody_medialive_mpc()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListCesInstanceRspBody_medialive_mpc::~ListCesInstanceRspBody_medialive_mpc() = default;

void ListCesInstanceRspBody_medialive_mpc::validate()
{
}

web::json::value ListCesInstanceRspBody_medialive_mpc::toJson() const
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
bool ListCesInstanceRspBody_medialive_mpc::fromJson(const web::json::value& val)
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


std::string ListCesInstanceRspBody_medialive_mpc::getId() const
{
    return id_;
}

void ListCesInstanceRspBody_medialive_mpc::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListCesInstanceRspBody_medialive_mpc::idIsSet() const
{
    return idIsSet_;
}

void ListCesInstanceRspBody_medialive_mpc::unsetid()
{
    idIsSet_ = false;
}

std::string ListCesInstanceRspBody_medialive_mpc::getName() const
{
    return name_;
}

void ListCesInstanceRspBody_medialive_mpc::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCesInstanceRspBody_medialive_mpc::nameIsSet() const
{
    return nameIsSet_;
}

void ListCesInstanceRspBody_medialive_mpc::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


