

#include "huaweicloud/codeartspipeline/v2/model/EndpointProxyParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




EndpointProxyParam::EndpointProxyParam()
{
    authorizationIsSet_ = false;
    dataIsSet_ = false;
    datasourceName_ = "";
    datasourceNameIsSet_ = false;
    endpointUuid_ = "";
    endpointUuidIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    isInner_ = false;
    isInnerIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
}

EndpointProxyParam::~EndpointProxyParam() = default;

void EndpointProxyParam::validate()
{
}

web::json::value EndpointProxyParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("authorization")] = ModelBase::toJson(authorization_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(datasourceNameIsSet_) {
        val[utility::conversions::to_string_t("datasource_name")] = ModelBase::toJson(datasourceName_);
    }
    if(endpointUuidIsSet_) {
        val[utility::conversions::to_string_t("endpoint_uuid")] = ModelBase::toJson(endpointUuid_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(isInnerIsSet_) {
        val[utility::conversions::to_string_t("is_inner")] = ModelBase::toJson(isInner_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }

    return val;
}
bool EndpointProxyParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization"));
        if(!fieldValue.is_null())
        {
            EndpointAuthorizationBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datasource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datasource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_inner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_inner"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsInner(refVal);
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
    return ok;
}


EndpointAuthorizationBody EndpointProxyParam::getAuthorization() const
{
    return authorization_;
}

void EndpointProxyParam::setAuthorization(const EndpointAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool EndpointProxyParam::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void EndpointProxyParam::unsetauthorization()
{
    authorizationIsSet_ = false;
}

Object EndpointProxyParam::getData() const
{
    return data_;
}

void EndpointProxyParam::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool EndpointProxyParam::dataIsSet() const
{
    return dataIsSet_;
}

void EndpointProxyParam::unsetdata()
{
    dataIsSet_ = false;
}

std::string EndpointProxyParam::getDatasourceName() const
{
    return datasourceName_;
}

void EndpointProxyParam::setDatasourceName(const std::string& value)
{
    datasourceName_ = value;
    datasourceNameIsSet_ = true;
}

bool EndpointProxyParam::datasourceNameIsSet() const
{
    return datasourceNameIsSet_;
}

void EndpointProxyParam::unsetdatasourceName()
{
    datasourceNameIsSet_ = false;
}

std::string EndpointProxyParam::getEndpointUuid() const
{
    return endpointUuid_;
}

void EndpointProxyParam::setEndpointUuid(const std::string& value)
{
    endpointUuid_ = value;
    endpointUuidIsSet_ = true;
}

bool EndpointProxyParam::endpointUuidIsSet() const
{
    return endpointUuidIsSet_;
}

void EndpointProxyParam::unsetendpointUuid()
{
    endpointUuidIsSet_ = false;
}

std::string EndpointProxyParam::getModuleId() const
{
    return moduleId_;
}

void EndpointProxyParam::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool EndpointProxyParam::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void EndpointProxyParam::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string EndpointProxyParam::getUrl() const
{
    return url_;
}

void EndpointProxyParam::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool EndpointProxyParam::urlIsSet() const
{
    return urlIsSet_;
}

void EndpointProxyParam::unseturl()
{
    urlIsSet_ = false;
}

bool EndpointProxyParam::isIsInner() const
{
    return isInner_;
}

void EndpointProxyParam::setIsInner(bool value)
{
    isInner_ = value;
    isInnerIsSet_ = true;
}

bool EndpointProxyParam::isInnerIsSet() const
{
    return isInnerIsSet_;
}

void EndpointProxyParam::unsetisInner()
{
    isInnerIsSet_ = false;
}

std::string EndpointProxyParam::getProjectUuid() const
{
    return projectUuid_;
}

void EndpointProxyParam::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool EndpointProxyParam::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void EndpointProxyParam::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string EndpointProxyParam::getRegionName() const
{
    return regionName_;
}

void EndpointProxyParam::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool EndpointProxyParam::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void EndpointProxyParam::unsetregionName()
{
    regionNameIsSet_ = false;
}

}
}
}
}
}


