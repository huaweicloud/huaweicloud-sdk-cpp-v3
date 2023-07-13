

#include "huaweicloud/drs/v5/model/AsyncActionResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncActionResp::AsyncActionResp()
{
    queryId_ = "";
    queryIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AsyncActionResp::~AsyncActionResp() = default;

void AsyncActionResp::validate()
{
}

web::json::value AsyncActionResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool AsyncActionResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
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

std::string AsyncActionResp::getQueryId() const
{
    return queryId_;
}

void AsyncActionResp::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool AsyncActionResp::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void AsyncActionResp::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string AsyncActionResp::getId() const
{
    return id_;
}

void AsyncActionResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AsyncActionResp::idIsSet() const
{
    return idIsSet_;
}

void AsyncActionResp::unsetid()
{
    idIsSet_ = false;
}

std::string AsyncActionResp::getName() const
{
    return name_;
}

void AsyncActionResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AsyncActionResp::nameIsSet() const
{
    return nameIsSet_;
}

void AsyncActionResp::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


