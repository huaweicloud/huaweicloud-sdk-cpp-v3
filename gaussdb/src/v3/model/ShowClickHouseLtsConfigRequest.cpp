

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseLtsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseLtsConfigRequest::ShowClickHouseLtsConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowClickHouseLtsConfigRequest::~ShowClickHouseLtsConfigRequest() = default;

void ShowClickHouseLtsConfigRequest::validate()
{
}

web::json::value ShowClickHouseLtsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
bool ShowClickHouseLtsConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ShowClickHouseLtsConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowClickHouseLtsConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowClickHouseLtsConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowClickHouseLtsConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowClickHouseLtsConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowClickHouseLtsConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowClickHouseLtsConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowClickHouseLtsConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowClickHouseLtsConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowClickHouseLtsConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowClickHouseLtsConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowClickHouseLtsConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowClickHouseLtsConfigRequest::getInstanceName() const
{
    return instanceName_;
}

void ShowClickHouseLtsConfigRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowClickHouseLtsConfigRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowClickHouseLtsConfigRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int32_t ShowClickHouseLtsConfigRequest::getLimit() const
{
    return limit_;
}

void ShowClickHouseLtsConfigRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowClickHouseLtsConfigRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowClickHouseLtsConfigRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowClickHouseLtsConfigRequest::getOffset() const
{
    return offset_;
}

void ShowClickHouseLtsConfigRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowClickHouseLtsConfigRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowClickHouseLtsConfigRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


