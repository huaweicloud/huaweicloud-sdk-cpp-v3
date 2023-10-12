

#include "huaweicloud/lts/v2/model/DeleteSearchCriterias.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteSearchCriterias::DeleteSearchCriterias()
{
    epsId_ = "";
    epsIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteSearchCriterias::~DeleteSearchCriterias() = default;

void DeleteSearchCriterias::validate()
{
}

web::json::value DeleteSearchCriterias::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteSearchCriterias::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DeleteSearchCriterias::getEpsId() const
{
    return epsId_;
}

void DeleteSearchCriterias::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool DeleteSearchCriterias::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void DeleteSearchCriterias::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string DeleteSearchCriterias::getId() const
{
    return id_;
}

void DeleteSearchCriterias::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteSearchCriterias::idIsSet() const
{
    return idIsSet_;
}

void DeleteSearchCriterias::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


