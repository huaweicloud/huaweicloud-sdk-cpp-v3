

#include "huaweicloud/gaussdbfornosql/v3/model/QueryDBCacheMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QueryDBCacheMappingResponse::QueryDBCacheMappingResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceInstanceName_ = "";
    sourceInstanceNameIsSet_ = false;
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    targetInstanceName_ = "";
    targetInstanceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    ruleCount_ = 0;
    ruleCountIsSet_ = false;
}

QueryDBCacheMappingResponse::~QueryDBCacheMappingResponse() = default;

void QueryDBCacheMappingResponse::validate()
{
}

web::json::value QueryDBCacheMappingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(sourceInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("source_instance_name")] = ModelBase::toJson(sourceInstanceName_);
    }
    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(targetInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("target_instance_name")] = ModelBase::toJson(targetInstanceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(ruleCountIsSet_) {
        val[utility::conversions::to_string_t("rule_count")] = ModelBase::toJson(ruleCount_);
    }

    return val;
}
bool QueryDBCacheMappingResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleCount(refVal);
        }
    }
    return ok;
}


std::string QueryDBCacheMappingResponse::getId() const
{
    return id_;
}

void QueryDBCacheMappingResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryDBCacheMappingResponse::idIsSet() const
{
    return idIsSet_;
}

void QueryDBCacheMappingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getName() const
{
    return name_;
}

void QueryDBCacheMappingResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryDBCacheMappingResponse::nameIsSet() const
{
    return nameIsSet_;
}

void QueryDBCacheMappingResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void QueryDBCacheMappingResponse::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool QueryDBCacheMappingResponse::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void QueryDBCacheMappingResponse::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getSourceInstanceName() const
{
    return sourceInstanceName_;
}

void QueryDBCacheMappingResponse::setSourceInstanceName(const std::string& value)
{
    sourceInstanceName_ = value;
    sourceInstanceNameIsSet_ = true;
}

bool QueryDBCacheMappingResponse::sourceInstanceNameIsSet() const
{
    return sourceInstanceNameIsSet_;
}

void QueryDBCacheMappingResponse::unsetsourceInstanceName()
{
    sourceInstanceNameIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void QueryDBCacheMappingResponse::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool QueryDBCacheMappingResponse::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void QueryDBCacheMappingResponse::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getTargetInstanceName() const
{
    return targetInstanceName_;
}

void QueryDBCacheMappingResponse::setTargetInstanceName(const std::string& value)
{
    targetInstanceName_ = value;
    targetInstanceNameIsSet_ = true;
}

bool QueryDBCacheMappingResponse::targetInstanceNameIsSet() const
{
    return targetInstanceNameIsSet_;
}

void QueryDBCacheMappingResponse::unsettargetInstanceName()
{
    targetInstanceNameIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getStatus() const
{
    return status_;
}

void QueryDBCacheMappingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryDBCacheMappingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void QueryDBCacheMappingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getCreated() const
{
    return created_;
}

void QueryDBCacheMappingResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool QueryDBCacheMappingResponse::createdIsSet() const
{
    return createdIsSet_;
}

void QueryDBCacheMappingResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string QueryDBCacheMappingResponse::getUpdated() const
{
    return updated_;
}

void QueryDBCacheMappingResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool QueryDBCacheMappingResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void QueryDBCacheMappingResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

int32_t QueryDBCacheMappingResponse::getRuleCount() const
{
    return ruleCount_;
}

void QueryDBCacheMappingResponse::setRuleCount(int32_t value)
{
    ruleCount_ = value;
    ruleCountIsSet_ = true;
}

bool QueryDBCacheMappingResponse::ruleCountIsSet() const
{
    return ruleCountIsSet_;
}

void QueryDBCacheMappingResponse::unsetruleCount()
{
    ruleCountIsSet_ = false;
}

}
}
}
}
}


