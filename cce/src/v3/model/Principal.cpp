

#include "huaweicloud/cce/v3/model/Principal.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Principal::Principal()
{
    type_ = "";
    typeIsSet_ = false;
    idsIsSet_ = false;
}

Principal::~Principal() = default;

void Principal::validate()
{
}

web::json::value Principal::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool Principal::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::string Principal::getType() const
{
    return type_;
}

void Principal::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Principal::typeIsSet() const
{
    return typeIsSet_;
}

void Principal::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& Principal::getIds()
{
    return ids_;
}

void Principal::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool Principal::idsIsSet() const
{
    return idsIsSet_;
}

void Principal::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


