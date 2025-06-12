

#include "huaweicloud/metastudio/v1/model/ListVideoScriptsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListVideoScriptsRequest::ListVideoScriptsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    scriptCatalog_ = "";
    scriptCatalogIsSet_ = false;
    viewMode_ = "";
    viewModeIsSet_ = false;
}

ListVideoScriptsRequest::~ListVideoScriptsRequest() = default;

void ListVideoScriptsRequest::validate()
{
}

web::json::value ListVideoScriptsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(scriptCatalogIsSet_) {
        val[utility::conversions::to_string_t("script_catalog")] = ModelBase::toJson(scriptCatalog_);
    }
    if(viewModeIsSet_) {
        val[utility::conversions::to_string_t("view_mode")] = ModelBase::toJson(viewMode_);
    }

    return val;
}
bool ListVideoScriptsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("script_catalog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_catalog"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptCatalog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewMode(refVal);
        }
    }
    return ok;
}


std::string ListVideoScriptsRequest::getAuthorization() const
{
    return authorization_;
}

void ListVideoScriptsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListVideoScriptsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListVideoScriptsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListVideoScriptsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListVideoScriptsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListVideoScriptsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListVideoScriptsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListVideoScriptsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListVideoScriptsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListVideoScriptsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListVideoScriptsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListVideoScriptsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListVideoScriptsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListVideoScriptsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListVideoScriptsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListVideoScriptsRequest::getOffset() const
{
    return offset_;
}

void ListVideoScriptsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVideoScriptsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVideoScriptsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListVideoScriptsRequest::getLimit() const
{
    return limit_;
}

void ListVideoScriptsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVideoScriptsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVideoScriptsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVideoScriptsRequest::getName() const
{
    return name_;
}

void ListVideoScriptsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVideoScriptsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListVideoScriptsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListVideoScriptsRequest::getScriptCatalog() const
{
    return scriptCatalog_;
}

void ListVideoScriptsRequest::setScriptCatalog(const std::string& value)
{
    scriptCatalog_ = value;
    scriptCatalogIsSet_ = true;
}

bool ListVideoScriptsRequest::scriptCatalogIsSet() const
{
    return scriptCatalogIsSet_;
}

void ListVideoScriptsRequest::unsetscriptCatalog()
{
    scriptCatalogIsSet_ = false;
}

std::string ListVideoScriptsRequest::getViewMode() const
{
    return viewMode_;
}

void ListVideoScriptsRequest::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool ListVideoScriptsRequest::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void ListVideoScriptsRequest::unsetviewMode()
{
    viewModeIsSet_ = false;
}

}
}
}
}
}


