

#include "huaweicloud/modelarts/v1/model/CloudServer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CloudServer::CloudServer()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    hpsId_ = "";
    hpsIdIsSet_ = false;
    hpsEcsId_ = "";
    hpsEcsIdIsSet_ = false;
}

CloudServer::~CloudServer() = default;

void CloudServer::validate()
{
}

web::json::value CloudServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(hpsIdIsSet_) {
        val[utility::conversions::to_string_t("hps_id")] = ModelBase::toJson(hpsId_);
    }
    if(hpsEcsIdIsSet_) {
        val[utility::conversions::to_string_t("hps_ecs_id")] = ModelBase::toJson(hpsEcsId_);
    }

    return val;
}
bool CloudServer::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hps_ecs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hps_ecs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpsEcsId(refVal);
        }
    }
    return ok;
}


std::string CloudServer::getId() const
{
    return id_;
}

void CloudServer::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CloudServer::idIsSet() const
{
    return idIsSet_;
}

void CloudServer::unsetid()
{
    idIsSet_ = false;
}

std::string CloudServer::getType() const
{
    return type_;
}

void CloudServer::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CloudServer::typeIsSet() const
{
    return typeIsSet_;
}

void CloudServer::unsettype()
{
    typeIsSet_ = false;
}

std::string CloudServer::getHpsId() const
{
    return hpsId_;
}

void CloudServer::setHpsId(const std::string& value)
{
    hpsId_ = value;
    hpsIdIsSet_ = true;
}

bool CloudServer::hpsIdIsSet() const
{
    return hpsIdIsSet_;
}

void CloudServer::unsethpsId()
{
    hpsIdIsSet_ = false;
}

std::string CloudServer::getHpsEcsId() const
{
    return hpsEcsId_;
}

void CloudServer::setHpsEcsId(const std::string& value)
{
    hpsEcsId_ = value;
    hpsEcsIdIsSet_ = true;
}

bool CloudServer::hpsEcsIdIsSet() const
{
    return hpsEcsIdIsSet_;
}

void CloudServer::unsethpsEcsId()
{
    hpsEcsIdIsSet_ = false;
}

}
}
}
}
}


