

#include "huaweicloud/codeartsrepo/v4/model/ReqWorkItemBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ReqWorkItemBasicDto::ReqWorkItemBasicDto()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ReqWorkItemBasicDto::~ReqWorkItemBasicDto() = default;

void ReqWorkItemBasicDto::validate()
{
}

web::json::value ReqWorkItemBasicDto::toJson() const
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
bool ReqWorkItemBasicDto::fromJson(const web::json::value& val)
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


std::string ReqWorkItemBasicDto::getId() const
{
    return id_;
}

void ReqWorkItemBasicDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReqWorkItemBasicDto::idIsSet() const
{
    return idIsSet_;
}

void ReqWorkItemBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string ReqWorkItemBasicDto::getName() const
{
    return name_;
}

void ReqWorkItemBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReqWorkItemBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void ReqWorkItemBasicDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


