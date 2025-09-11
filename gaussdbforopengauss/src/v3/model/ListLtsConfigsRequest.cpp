

#include "huaweicloud/gaussdbforopengauss/v3/model/ListLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListLtsConfigsRequest::ListLtsConfigsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLtsConfigsRequest::~ListLtsConfigsRequest() = default;

void ListLtsConfigsRequest::validate()
{
}

web::json::value ListLtsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListLtsConfigsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
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
    return ok;
}


std::string ListLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListLtsConfigsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListLtsConfigsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLtsConfigsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLtsConfigsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListLtsConfigsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListLtsConfigsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListLtsConfigsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListLtsConfigsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ListLtsConfigsRequest::getInstanceMode() const
{
    return instanceMode_;
}

void ListLtsConfigsRequest::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ListLtsConfigsRequest::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ListLtsConfigsRequest::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ListLtsConfigsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListLtsConfigsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListLtsConfigsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListLtsConfigsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ListLtsConfigsRequest::getOffset() const
{
    return offset_;
}

void ListLtsConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLtsConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLtsConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLtsConfigsRequest::getLimit() const
{
    return limit_;
}

void ListLtsConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLtsConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLtsConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


