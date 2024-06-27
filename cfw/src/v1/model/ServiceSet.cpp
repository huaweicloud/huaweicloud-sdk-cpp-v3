

#include "huaweicloud/cfw/v1/model/ServiceSet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceSet::ServiceSet()
{
    setId_ = "";
    setIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    serviceSetType_ = 0;
    serviceSetTypeIsSet_ = false;
    refCount_ = 0;
    refCountIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    protocolsIsSet_ = false;
}

ServiceSet::~ServiceSet() = default;

void ServiceSet::validate()
{
}

web::json::value ServiceSet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(serviceSetTypeIsSet_) {
        val[utility::conversions::to_string_t("service_set_type")] = ModelBase::toJson(serviceSetType_);
    }
    if(refCountIsSet_) {
        val[utility::conversions::to_string_t("ref_count")] = ModelBase::toJson(refCount_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(protocolsIsSet_) {
        val[utility::conversions::to_string_t("protocols")] = ModelBase::toJson(protocols_);
    }

    return val;
}
bool ServiceSet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocols"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocols"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocols(refVal);
        }
    }
    return ok;
}


std::string ServiceSet::getSetId() const
{
    return setId_;
}

void ServiceSet::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ServiceSet::setIdIsSet() const
{
    return setIdIsSet_;
}

void ServiceSet::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ServiceSet::getName() const
{
    return name_;
}

void ServiceSet::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceSet::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceSet::unsetname()
{
    nameIsSet_ = false;
}

std::string ServiceSet::getDescription() const
{
    return description_;
}

void ServiceSet::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceSet::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceSet::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ServiceSet::getServiceSetType() const
{
    return serviceSetType_;
}

void ServiceSet::setServiceSetType(int32_t value)
{
    serviceSetType_ = value;
    serviceSetTypeIsSet_ = true;
}

bool ServiceSet::serviceSetTypeIsSet() const
{
    return serviceSetTypeIsSet_;
}

void ServiceSet::unsetserviceSetType()
{
    serviceSetTypeIsSet_ = false;
}

int32_t ServiceSet::getRefCount() const
{
    return refCount_;
}

void ServiceSet::setRefCount(int32_t value)
{
    refCount_ = value;
    refCountIsSet_ = true;
}

bool ServiceSet::refCountIsSet() const
{
    return refCountIsSet_;
}

void ServiceSet::unsetrefCount()
{
    refCountIsSet_ = false;
}

std::string ServiceSet::getProjectId() const
{
    return projectId_;
}

void ServiceSet::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ServiceSet::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ServiceSet::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<int32_t>& ServiceSet::getProtocols()
{
    return protocols_;
}

void ServiceSet::setProtocols(std::vector<int32_t> value)
{
    protocols_ = value;
    protocolsIsSet_ = true;
}

bool ServiceSet::protocolsIsSet() const
{
    return protocolsIsSet_;
}

void ServiceSet::unsetprotocols()
{
    protocolsIsSet_ = false;
}

}
}
}
}
}


