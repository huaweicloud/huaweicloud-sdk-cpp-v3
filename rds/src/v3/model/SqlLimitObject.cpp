

#include "huaweicloud/rds/v3/model/SqlLimitObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlLimitObject::SqlLimitObject()
{
    id_ = "";
    idIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    queryString_ = "";
    queryStringIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    isEffective_ = false;
    isEffectiveIsSet_ = false;
    maxWaiting_ = 0;
    maxWaitingIsSet_ = false;
    searchPath_ = "";
    searchPathIsSet_ = false;
}

SqlLimitObject::~SqlLimitObject() = default;

void SqlLimitObject::validate()
{
}

web::json::value SqlLimitObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(queryStringIsSet_) {
        val[utility::conversions::to_string_t("query_string")] = ModelBase::toJson(queryString_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(isEffectiveIsSet_) {
        val[utility::conversions::to_string_t("is_effective")] = ModelBase::toJson(isEffective_);
    }
    if(maxWaitingIsSet_) {
        val[utility::conversions::to_string_t("max_waiting")] = ModelBase::toJson(maxWaiting_);
    }
    if(searchPathIsSet_) {
        val[utility::conversions::to_string_t("search_path")] = ModelBase::toJson(searchPath_);
    }

    return val;
}
bool SqlLimitObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_effective"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_effective"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEffective(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_waiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_waiting"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxWaiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchPath(refVal);
        }
    }
    return ok;
}


std::string SqlLimitObject::getId() const
{
    return id_;
}

void SqlLimitObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SqlLimitObject::idIsSet() const
{
    return idIsSet_;
}

void SqlLimitObject::unsetid()
{
    idIsSet_ = false;
}

std::string SqlLimitObject::getQueryId() const
{
    return queryId_;
}

void SqlLimitObject::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool SqlLimitObject::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void SqlLimitObject::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string SqlLimitObject::getQueryString() const
{
    return queryString_;
}

void SqlLimitObject::setQueryString(const std::string& value)
{
    queryString_ = value;
    queryStringIsSet_ = true;
}

bool SqlLimitObject::queryStringIsSet() const
{
    return queryStringIsSet_;
}

void SqlLimitObject::unsetqueryString()
{
    queryStringIsSet_ = false;
}

int32_t SqlLimitObject::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void SqlLimitObject::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool SqlLimitObject::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void SqlLimitObject::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

bool SqlLimitObject::isIsEffective() const
{
    return isEffective_;
}

void SqlLimitObject::setIsEffective(bool value)
{
    isEffective_ = value;
    isEffectiveIsSet_ = true;
}

bool SqlLimitObject::isEffectiveIsSet() const
{
    return isEffectiveIsSet_;
}

void SqlLimitObject::unsetisEffective()
{
    isEffectiveIsSet_ = false;
}

int32_t SqlLimitObject::getMaxWaiting() const
{
    return maxWaiting_;
}

void SqlLimitObject::setMaxWaiting(int32_t value)
{
    maxWaiting_ = value;
    maxWaitingIsSet_ = true;
}

bool SqlLimitObject::maxWaitingIsSet() const
{
    return maxWaitingIsSet_;
}

void SqlLimitObject::unsetmaxWaiting()
{
    maxWaitingIsSet_ = false;
}

std::string SqlLimitObject::getSearchPath() const
{
    return searchPath_;
}

void SqlLimitObject::setSearchPath(const std::string& value)
{
    searchPath_ = value;
    searchPathIsSet_ = true;
}

bool SqlLimitObject::searchPathIsSet() const
{
    return searchPathIsSet_;
}

void SqlLimitObject::unsetsearchPath()
{
    searchPathIsSet_ = false;
}

}
}
}
}
}


