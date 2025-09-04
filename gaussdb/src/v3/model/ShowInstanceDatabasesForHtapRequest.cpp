

#include "huaweicloud/gaussdb/v3/model/ShowInstanceDatabasesForHtapRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceDatabasesForHtapRequest::ShowInstanceDatabasesForHtapRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ShowInstanceDatabasesForHtapRequest::~ShowInstanceDatabasesForHtapRequest() = default;

void ShowInstanceDatabasesForHtapRequest::validate()
{
}

web::json::value ShowInstanceDatabasesForHtapRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowInstanceDatabasesForHtapRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryDataBaseRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceDatabasesForHtapRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceDatabasesForHtapRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceDatabasesForHtapRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceDatabasesForHtapRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceDatabasesForHtapRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceDatabasesForHtapRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceDatabasesForHtapRequest::getLimit() const
{
    return limit_;
}

void ShowInstanceDatabasesForHtapRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowInstanceDatabasesForHtapRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowInstanceDatabasesForHtapRequest::getOffset() const
{
    return offset_;
}

void ShowInstanceDatabasesForHtapRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowInstanceDatabasesForHtapRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

QueryDataBaseRequestV3 ShowInstanceDatabasesForHtapRequest::getBody() const
{
    return body_;
}

void ShowInstanceDatabasesForHtapRequest::setBody(const QueryDataBaseRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowInstanceDatabasesForHtapRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


