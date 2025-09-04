

#include "huaweicloud/gaussdb/v3/model/ShowInstanceTablesForHtapRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceTablesForHtapRequest::ShowInstanceTablesForHtapRequest()
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

ShowInstanceTablesForHtapRequest::~ShowInstanceTablesForHtapRequest() = default;

void ShowInstanceTablesForHtapRequest::validate()
{
}

web::json::value ShowInstanceTablesForHtapRequest::toJson() const
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
bool ShowInstanceTablesForHtapRequest::fromJson(const web::json::value& val)
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
            QueryTableRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceTablesForHtapRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceTablesForHtapRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceTablesForHtapRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceTablesForHtapRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceTablesForHtapRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceTablesForHtapRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceTablesForHtapRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceTablesForHtapRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceTablesForHtapRequest::getLimit() const
{
    return limit_;
}

void ShowInstanceTablesForHtapRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowInstanceTablesForHtapRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowInstanceTablesForHtapRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowInstanceTablesForHtapRequest::getOffset() const
{
    return offset_;
}

void ShowInstanceTablesForHtapRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowInstanceTablesForHtapRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowInstanceTablesForHtapRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

QueryTableRequestV3 ShowInstanceTablesForHtapRequest::getBody() const
{
    return body_;
}

void ShowInstanceTablesForHtapRequest::setBody(const QueryTableRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowInstanceTablesForHtapRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowInstanceTablesForHtapRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


