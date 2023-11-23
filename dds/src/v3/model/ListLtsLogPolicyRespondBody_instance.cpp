

#include "huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsLogPolicyRespondBody_instance::ListLtsLogPolicyRespondBody_instance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    datastoreIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    actionsIsSet_ = false;
}

ListLtsLogPolicyRespondBody_instance::~ListLtsLogPolicyRespondBody_instance() = default;

void ListLtsLogPolicyRespondBody_instance::validate()
{
}

web::json::value ListLtsLogPolicyRespondBody_instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool ListLtsLogPolicyRespondBody_instance::fromJson(const web::json::value& val)
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
            ListLtsLogPolicyRespondBody_instance_datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    return ok;
}


std::string ListLtsLogPolicyRespondBody_instance::getId() const
{
    return id_;
}

void ListLtsLogPolicyRespondBody_instance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::idIsSet() const
{
    return idIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetid()
{
    idIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_instance::getName() const
{
    return name_;
}

void ListLtsLogPolicyRespondBody_instance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::nameIsSet() const
{
    return nameIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetname()
{
    nameIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_instance::getMode() const
{
    return mode_;
}

void ListLtsLogPolicyRespondBody_instance::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::modeIsSet() const
{
    return modeIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetmode()
{
    modeIsSet_ = false;
}

ListLtsLogPolicyRespondBody_instance_datastore ListLtsLogPolicyRespondBody_instance::getDatastore() const
{
    return datastore_;
}

void ListLtsLogPolicyRespondBody_instance::setDatastore(const ListLtsLogPolicyRespondBody_instance_datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_instance::getStatus() const
{
    return status_;
}

void ListLtsLogPolicyRespondBody_instance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::statusIsSet() const
{
    return statusIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_instance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListLtsLogPolicyRespondBody_instance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListLtsLogPolicyRespondBody_instance::getActions()
{
    return actions_;
}

void ListLtsLogPolicyRespondBody_instance::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance::actionsIsSet() const
{
    return actionsIsSet_;
}

void ListLtsLogPolicyRespondBody_instance::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


