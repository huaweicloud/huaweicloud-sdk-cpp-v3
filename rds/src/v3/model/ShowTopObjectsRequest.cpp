

#include "huaweicloud/rds/v3/model/ShowTopObjectsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTopObjectsRequest::ShowTopObjectsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    top_ = 0;
    topIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowTopObjectsRequest::~ShowTopObjectsRequest() = default;

void ShowTopObjectsRequest::validate()
{
}

web::json::value ShowTopObjectsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(topIsSet_) {
        val[utility::conversions::to_string_t("top")] = ModelBase::toJson(top_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowTopObjectsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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


std::string ShowTopObjectsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTopObjectsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTopObjectsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTopObjectsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ShowTopObjectsRequest::getTop() const
{
    return top_;
}

void ShowTopObjectsRequest::setTop(int32_t value)
{
    top_ = value;
    topIsSet_ = true;
}

bool ShowTopObjectsRequest::topIsSet() const
{
    return topIsSet_;
}

void ShowTopObjectsRequest::unsettop()
{
    topIsSet_ = false;
}

std::string ShowTopObjectsRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowTopObjectsRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowTopObjectsRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowTopObjectsRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ShowTopObjectsRequest::getOrder() const
{
    return order_;
}

void ShowTopObjectsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowTopObjectsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ShowTopObjectsRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ShowTopObjectsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTopObjectsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTopObjectsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTopObjectsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowTopObjectsRequest::getOffset() const
{
    return offset_;
}

void ShowTopObjectsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTopObjectsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTopObjectsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTopObjectsRequest::getLimit() const
{
    return limit_;
}

void ShowTopObjectsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTopObjectsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTopObjectsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


