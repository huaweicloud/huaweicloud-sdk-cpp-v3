

#include "huaweicloud/gaussdb/v3/model/HtapLTSConfigResponse_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapLTSConfigResponse_instance::HtapLTSConfigResponse_instance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
}

HtapLTSConfigResponse_instance::~HtapLTSConfigResponse_instance() = default;

void HtapLTSConfigResponse_instance::validate()
{
}

web::json::value HtapLTSConfigResponse_instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }

    return val;
}
bool HtapLTSConfigResponse_instance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    return ok;
}


std::string HtapLTSConfigResponse_instance::getId() const
{
    return id_;
}

void HtapLTSConfigResponse_instance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::idIsSet() const
{
    return idIsSet_;
}

void HtapLTSConfigResponse_instance::unsetid()
{
    idIsSet_ = false;
}

std::string HtapLTSConfigResponse_instance::getName() const
{
    return name_;
}

void HtapLTSConfigResponse_instance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::nameIsSet() const
{
    return nameIsSet_;
}

void HtapLTSConfigResponse_instance::unsetname()
{
    nameIsSet_ = false;
}

std::string HtapLTSConfigResponse_instance::getEngineName() const
{
    return engineName_;
}

void HtapLTSConfigResponse_instance::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void HtapLTSConfigResponse_instance::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string HtapLTSConfigResponse_instance::getEngineVersion() const
{
    return engineVersion_;
}

void HtapLTSConfigResponse_instance::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void HtapLTSConfigResponse_instance::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string HtapLTSConfigResponse_instance::getStatus() const
{
    return status_;
}

void HtapLTSConfigResponse_instance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::statusIsSet() const
{
    return statusIsSet_;
}

void HtapLTSConfigResponse_instance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string HtapLTSConfigResponse_instance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void HtapLTSConfigResponse_instance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void HtapLTSConfigResponse_instance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string HtapLTSConfigResponse_instance::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void HtapLTSConfigResponse_instance::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool HtapLTSConfigResponse_instance::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void HtapLTSConfigResponse_instance::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

}
}
}
}
}


