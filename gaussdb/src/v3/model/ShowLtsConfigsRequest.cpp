

#include "huaweicloud/gaussdb/v3/model/ShowLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowLtsConfigsRequest::ShowLtsConfigsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

ShowLtsConfigsRequest::~ShowLtsConfigsRequest() = default;

void ShowLtsConfigsRequest::validate()
{
}

web::json::value ShowLtsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowLtsConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowLtsConfigsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowLtsConfigsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowLtsConfigsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowLtsConfigsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowLtsConfigsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowLtsConfigsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowLtsConfigsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowLtsConfigsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowLtsConfigsRequest::getInstanceName() const
{
    return instanceName_;
}

void ShowLtsConfigsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowLtsConfigsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowLtsConfigsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowLtsConfigsRequest::getLimit() const
{
    return limit_;
}

void ShowLtsConfigsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowLtsConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowLtsConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowLtsConfigsRequest::getOffset() const
{
    return offset_;
}

void ShowLtsConfigsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowLtsConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowLtsConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


