

#include "huaweicloud/rds/v3/model/ListLogLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListLogLtsConfigsRequest::ListLogLtsConfigsRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListLogLtsConfigsRequest::~ListLogLtsConfigsRequest() = default;

void ListLogLtsConfigsRequest::validate()
{
}

web::json::value ListLogLtsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
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
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListLogLtsConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListLogLtsConfigsRequest::getEngine() const
{
    return engine_;
}

void ListLogLtsConfigsRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListLogLtsConfigsRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListLogLtsConfigsRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ListLogLtsConfigsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListLogLtsConfigsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListLogLtsConfigsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListLogLtsConfigsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListLogLtsConfigsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListLogLtsConfigsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLogLtsConfigsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLogLtsConfigsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListLogLtsConfigsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListLogLtsConfigsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListLogLtsConfigsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListLogLtsConfigsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int32_t ListLogLtsConfigsRequest::getLimit() const
{
    return limit_;
}

void ListLogLtsConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLogLtsConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLogLtsConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListLogLtsConfigsRequest::getOffset() const
{
    return offset_;
}

void ListLogLtsConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLogLtsConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLogLtsConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListLogLtsConfigsRequest::getSort() const
{
    return sort_;
}

void ListLogLtsConfigsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListLogLtsConfigsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListLogLtsConfigsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListLogLtsConfigsRequest::getInstanceStatus() const
{
    return instanceStatus_;
}

void ListLogLtsConfigsRequest::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ListLogLtsConfigsRequest::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ListLogLtsConfigsRequest::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ListLogLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListLogLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListLogLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListLogLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


