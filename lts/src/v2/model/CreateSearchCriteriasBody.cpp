

#include "huaweicloud/lts/v2/model/CreateSearchCriteriasBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSearchCriteriasBody::CreateSearchCriteriasBody()
{
    criteria_ = "";
    criteriaIsSet_ = false;
    epsId_ = "";
    epsIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
}

CreateSearchCriteriasBody::~CreateSearchCriteriasBody() = default;

void CreateSearchCriteriasBody::validate()
{
}

web::json::value CreateSearchCriteriasBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criteriaIsSet_) {
        val[utility::conversions::to_string_t("criteria")] = ModelBase::toJson(criteria_);
    }
    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }

    return val;
}

bool CreateSearchCriteriasBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
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

std::string CreateSearchCriteriasBody::getCriteria() const
{
    return criteria_;
}

void CreateSearchCriteriasBody::setCriteria(const std::string& value)
{
    criteria_ = value;
    criteriaIsSet_ = true;
}

bool CreateSearchCriteriasBody::criteriaIsSet() const
{
    return criteriaIsSet_;
}

void CreateSearchCriteriasBody::unsetcriteria()
{
    criteriaIsSet_ = false;
}

std::string CreateSearchCriteriasBody::getEpsId() const
{
    return epsId_;
}

void CreateSearchCriteriasBody::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool CreateSearchCriteriasBody::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void CreateSearchCriteriasBody::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string CreateSearchCriteriasBody::getName() const
{
    return name_;
}

void CreateSearchCriteriasBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSearchCriteriasBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSearchCriteriasBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateSearchCriteriasBody::getSearchType() const
{
    return searchType_;
}

void CreateSearchCriteriasBody::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool CreateSearchCriteriasBody::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void CreateSearchCriteriasBody::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

}
}
}
}
}


