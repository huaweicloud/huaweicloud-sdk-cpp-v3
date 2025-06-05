

#include "huaweicloud/dds/v3/model/QuerySessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




QuerySessionResponse::QuerySessionResponse()
{
    id_ = "";
    idIsSet_ = false;
    active_ = false;
    activeIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    costTime_ = "";
    costTimeIsSet_ = false;
    planSummary_ = "";
    planSummaryIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    client_ = "";
    clientIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    db_ = "";
    dbIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
}

QuerySessionResponse::~QuerySessionResponse() = default;

void QuerySessionResponse::validate()
{
}

web::json::value QuerySessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(costTimeIsSet_) {
        val[utility::conversions::to_string_t("cost_time")] = ModelBase::toJson(costTime_);
    }
    if(planSummaryIsSet_) {
        val[utility::conversions::to_string_t("plan_summary")] = ModelBase::toJson(planSummary_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(clientIsSet_) {
        val[utility::conversions::to_string_t("client")] = ModelBase::toJson(client_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool QuerySessionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_summary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClient(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


std::string QuerySessionResponse::getId() const
{
    return id_;
}

void QuerySessionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QuerySessionResponse::idIsSet() const
{
    return idIsSet_;
}

void QuerySessionResponse::unsetid()
{
    idIsSet_ = false;
}

bool QuerySessionResponse::isActive() const
{
    return active_;
}

void QuerySessionResponse::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool QuerySessionResponse::activeIsSet() const
{
    return activeIsSet_;
}

void QuerySessionResponse::unsetactive()
{
    activeIsSet_ = false;
}

std::string QuerySessionResponse::getOperation() const
{
    return operation_;
}

void QuerySessionResponse::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool QuerySessionResponse::operationIsSet() const
{
    return operationIsSet_;
}

void QuerySessionResponse::unsetoperation()
{
    operationIsSet_ = false;
}

std::string QuerySessionResponse::getType() const
{
    return type_;
}

void QuerySessionResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuerySessionResponse::typeIsSet() const
{
    return typeIsSet_;
}

void QuerySessionResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string QuerySessionResponse::getCostTime() const
{
    return costTime_;
}

void QuerySessionResponse::setCostTime(const std::string& value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool QuerySessionResponse::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void QuerySessionResponse::unsetcostTime()
{
    costTimeIsSet_ = false;
}

std::string QuerySessionResponse::getPlanSummary() const
{
    return planSummary_;
}

void QuerySessionResponse::setPlanSummary(const std::string& value)
{
    planSummary_ = value;
    planSummaryIsSet_ = true;
}

bool QuerySessionResponse::planSummaryIsSet() const
{
    return planSummaryIsSet_;
}

void QuerySessionResponse::unsetplanSummary()
{
    planSummaryIsSet_ = false;
}

std::string QuerySessionResponse::getHost() const
{
    return host_;
}

void QuerySessionResponse::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool QuerySessionResponse::hostIsSet() const
{
    return hostIsSet_;
}

void QuerySessionResponse::unsethost()
{
    hostIsSet_ = false;
}

std::string QuerySessionResponse::getClient() const
{
    return client_;
}

void QuerySessionResponse::setClient(const std::string& value)
{
    client_ = value;
    clientIsSet_ = true;
}

bool QuerySessionResponse::clientIsSet() const
{
    return clientIsSet_;
}

void QuerySessionResponse::unsetclient()
{
    clientIsSet_ = false;
}

std::string QuerySessionResponse::getDescription() const
{
    return description_;
}

void QuerySessionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QuerySessionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QuerySessionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QuerySessionResponse::getNamespace() const
{
    return namespace_;
}

void QuerySessionResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool QuerySessionResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void QuerySessionResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string QuerySessionResponse::getDb() const
{
    return db_;
}

void QuerySessionResponse::setDb(const std::string& value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool QuerySessionResponse::dbIsSet() const
{
    return dbIsSet_;
}

void QuerySessionResponse::unsetdb()
{
    dbIsSet_ = false;
}

std::string QuerySessionResponse::getUser() const
{
    return user_;
}

void QuerySessionResponse::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool QuerySessionResponse::userIsSet() const
{
    return userIsSet_;
}

void QuerySessionResponse::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


