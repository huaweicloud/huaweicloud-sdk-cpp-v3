

#include "huaweicloud/gaussdbforopengauss/v3/model/ListMetricDatasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListMetricDatasRequest::ListMetricDatasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListMetricDatasRequest::~ListMetricDatasRequest() = default;

void ListMetricDatasRequest::validate()
{
}

web::json::value ListMetricDatasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
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
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListMetricDatasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListMetricDatasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListMetricDatasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListMetricDatasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListMetricDatasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListMetricDatasRequest::getOffset() const
{
    return offset_;
}

void ListMetricDatasRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMetricDatasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMetricDatasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMetricDatasRequest::getLimit() const
{
    return limit_;
}

void ListMetricDatasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMetricDatasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMetricDatasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMetricDatasRequest::getName() const
{
    return name_;
}

void ListMetricDatasRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListMetricDatasRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListMetricDatasRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListMetricDatasRequest::getInstanceId() const
{
    return instanceId_;
}

void ListMetricDatasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListMetricDatasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListMetricDatasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


