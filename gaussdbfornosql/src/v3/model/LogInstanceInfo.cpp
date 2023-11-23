

#include "huaweicloud/gaussdbfornosql/v3/model/LogInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




LogInstanceInfo::LogInstanceInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    datastoreIsSet_ = false;
    actionsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

LogInstanceInfo::~LogInstanceInfo() = default;

void LogInstanceInfo::validate()
{
}

web::json::value LogInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool LogInstanceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            InstancesDatastoreResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string LogInstanceInfo::getId() const
{
    return id_;
}

void LogInstanceInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LogInstanceInfo::idIsSet() const
{
    return idIsSet_;
}

void LogInstanceInfo::unsetid()
{
    idIsSet_ = false;
}

std::string LogInstanceInfo::getName() const
{
    return name_;
}

void LogInstanceInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LogInstanceInfo::nameIsSet() const
{
    return nameIsSet_;
}

void LogInstanceInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string LogInstanceInfo::getStatus() const
{
    return status_;
}

void LogInstanceInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LogInstanceInfo::statusIsSet() const
{
    return statusIsSet_;
}

void LogInstanceInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string LogInstanceInfo::getMode() const
{
    return mode_;
}

void LogInstanceInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool LogInstanceInfo::modeIsSet() const
{
    return modeIsSet_;
}

void LogInstanceInfo::unsetmode()
{
    modeIsSet_ = false;
}

InstancesDatastoreResult LogInstanceInfo::getDatastore() const
{
    return datastore_;
}

void LogInstanceInfo::setDatastore(const InstancesDatastoreResult& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool LogInstanceInfo::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void LogInstanceInfo::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::vector<std::string>& LogInstanceInfo::getActions()
{
    return actions_;
}

void LogInstanceInfo::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool LogInstanceInfo::actionsIsSet() const
{
    return actionsIsSet_;
}

void LogInstanceInfo::unsetactions()
{
    actionsIsSet_ = false;
}

std::string LogInstanceInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void LogInstanceInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool LogInstanceInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void LogInstanceInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


