

#include "huaweicloud/lts/v2/model/GetQuerySearchCriteriasBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetQuerySearchCriteriasBody::GetQuerySearchCriteriasBody()
{
    criteria_ = "";
    criteriaIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
}

GetQuerySearchCriteriasBody::~GetQuerySearchCriteriasBody() = default;

void GetQuerySearchCriteriasBody::validate()
{
}

web::json::value GetQuerySearchCriteriasBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criteriaIsSet_) {
        val[utility::conversions::to_string_t("criteria")] = ModelBase::toJson(criteria_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }

    return val;
}

bool GetQuerySearchCriteriasBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("criteria"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("criteria"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriteria(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    return ok;
}


std::string GetQuerySearchCriteriasBody::getCriteria() const
{
    return criteria_;
}

void GetQuerySearchCriteriasBody::setCriteria(const std::string& value)
{
    criteria_ = value;
    criteriaIsSet_ = true;
}

bool GetQuerySearchCriteriasBody::criteriaIsSet() const
{
    return criteriaIsSet_;
}

void GetQuerySearchCriteriasBody::unsetcriteria()
{
    criteriaIsSet_ = false;
}

std::string GetQuerySearchCriteriasBody::getName() const
{
    return name_;
}

void GetQuerySearchCriteriasBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetQuerySearchCriteriasBody::nameIsSet() const
{
    return nameIsSet_;
}

void GetQuerySearchCriteriasBody::unsetname()
{
    nameIsSet_ = false;
}

std::string GetQuerySearchCriteriasBody::getId() const
{
    return id_;
}

void GetQuerySearchCriteriasBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetQuerySearchCriteriasBody::idIsSet() const
{
    return idIsSet_;
}

void GetQuerySearchCriteriasBody::unsetid()
{
    idIsSet_ = false;
}

std::string GetQuerySearchCriteriasBody::getSearchType() const
{
    return searchType_;
}

void GetQuerySearchCriteriasBody::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool GetQuerySearchCriteriasBody::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void GetQuerySearchCriteriasBody::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

}
}
}
}
}


