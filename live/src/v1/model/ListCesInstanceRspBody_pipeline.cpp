

#include "huaweicloud/live/v1/model/ListCesInstanceRspBody_pipeline.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRspBody_pipeline::ListCesInstanceRspBody_pipeline()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListCesInstanceRspBody_pipeline::~ListCesInstanceRspBody_pipeline() = default;

void ListCesInstanceRspBody_pipeline::validate()
{
}

web::json::value ListCesInstanceRspBody_pipeline::toJson() const
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
bool ListCesInstanceRspBody_pipeline::fromJson(const web::json::value& val)
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


std::string ListCesInstanceRspBody_pipeline::getId() const
{
    return id_;
}

void ListCesInstanceRspBody_pipeline::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListCesInstanceRspBody_pipeline::idIsSet() const
{
    return idIsSet_;
}

void ListCesInstanceRspBody_pipeline::unsetid()
{
    idIsSet_ = false;
}

std::string ListCesInstanceRspBody_pipeline::getName() const
{
    return name_;
}

void ListCesInstanceRspBody_pipeline::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCesInstanceRspBody_pipeline::nameIsSet() const
{
    return nameIsSet_;
}

void ListCesInstanceRspBody_pipeline::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


