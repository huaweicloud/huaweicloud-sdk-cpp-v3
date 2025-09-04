

#include "huaweicloud/codeartsbuild/v3/model/EndPointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




EndPointResponse::EndPointResponse()
{
    authorizationIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    dataIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    createdByIsSet_ = false;
}

EndPointResponse::~EndPointResponse() = default;

void EndPointResponse::validate()
{
}

web::json::value EndPointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("authorization")] = ModelBase::toJson(authorization_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
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
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }

    return val;
}
bool EndPointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization"));
        if(!fieldValue.is_null())
        {
            EndPointResponse_authorization refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            EndPointResponse_created_by refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    return ok;
}


EndPointResponse_authorization EndPointResponse::getAuthorization() const
{
    return authorization_;
}

void EndPointResponse::setAuthorization(const EndPointResponse_authorization& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool EndPointResponse::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void EndPointResponse::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string EndPointResponse::getUuid() const
{
    return uuid_;
}

void EndPointResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool EndPointResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void EndPointResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string EndPointResponse::getUrl() const
{
    return url_;
}

void EndPointResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool EndPointResponse::urlIsSet() const
{
    return urlIsSet_;
}

void EndPointResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string EndPointResponse::getName() const
{
    return name_;
}

void EndPointResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EndPointResponse::nameIsSet() const
{
    return nameIsSet_;
}

void EndPointResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string EndPointResponse::getProjectUuid() const
{
    return projectUuid_;
}

void EndPointResponse::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool EndPointResponse::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void EndPointResponse::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string EndPointResponse::getRegionName() const
{
    return regionName_;
}

void EndPointResponse::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool EndPointResponse::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void EndPointResponse::unsetregionName()
{
    regionNameIsSet_ = false;
}

Object EndPointResponse::getData() const
{
    return data_;
}

void EndPointResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool EndPointResponse::dataIsSet() const
{
    return dataIsSet_;
}

void EndPointResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string EndPointResponse::getModuleId() const
{
    return moduleId_;
}

void EndPointResponse::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool EndPointResponse::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void EndPointResponse::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

EndPointResponse_created_by EndPointResponse::getCreatedBy() const
{
    return createdBy_;
}

void EndPointResponse::setCreatedBy(const EndPointResponse_created_by& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool EndPointResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void EndPointResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

}
}
}
}
}


