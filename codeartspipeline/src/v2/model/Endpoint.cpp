

#include "huaweicloud/codeartspipeline/v2/model/Endpoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Endpoint::Endpoint()
{
    createdByIsSet_ = false;
    dataIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
}

Endpoint::~Endpoint() = default;

void Endpoint::validate()
{
}

web::json::value Endpoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool Endpoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            EndpointCreatorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    return ok;
}


EndpointCreatorInfo Endpoint::getCreatedBy() const
{
    return createdBy_;
}

void Endpoint::setCreatedBy(const EndpointCreatorInfo& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool Endpoint::createdByIsSet() const
{
    return createdByIsSet_;
}

void Endpoint::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

Object Endpoint::getData() const
{
    return data_;
}

void Endpoint::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool Endpoint::dataIsSet() const
{
    return dataIsSet_;
}

void Endpoint::unsetdata()
{
    dataIsSet_ = false;
}

std::string Endpoint::getModuleId() const
{
    return moduleId_;
}

void Endpoint::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool Endpoint::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void Endpoint::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string Endpoint::getName() const
{
    return name_;
}

void Endpoint::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Endpoint::nameIsSet() const
{
    return nameIsSet_;
}

void Endpoint::unsetname()
{
    nameIsSet_ = false;
}

std::string Endpoint::getProjectUuid() const
{
    return projectUuid_;
}

void Endpoint::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool Endpoint::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void Endpoint::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string Endpoint::getRegionName() const
{
    return regionName_;
}

void Endpoint::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool Endpoint::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void Endpoint::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string Endpoint::getUrl() const
{
    return url_;
}

void Endpoint::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Endpoint::urlIsSet() const
{
    return urlIsSet_;
}

void Endpoint::unseturl()
{
    urlIsSet_ = false;
}

std::string Endpoint::getUuid() const
{
    return uuid_;
}

void Endpoint::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool Endpoint::uuidIsSet() const
{
    return uuidIsSet_;
}

void Endpoint::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


