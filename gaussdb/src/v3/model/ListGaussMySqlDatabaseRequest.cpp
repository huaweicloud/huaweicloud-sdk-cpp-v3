

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabaseRequest::ListGaussMySqlDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    charset_ = "";
    charsetIsSet_ = false;
}

ListGaussMySqlDatabaseRequest::~ListGaussMySqlDatabaseRequest() = default;

void ListGaussMySqlDatabaseRequest::validate()
{
}

web::json::value ListGaussMySqlDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
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
    if(charsetIsSet_) {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(charset_);
    }

    return val;
}
bool ListGaussMySqlDatabaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("charset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharset(refVal);
        }
    }
    return ok;
}


std::string ListGaussMySqlDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListGaussMySqlDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void ListGaussMySqlDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListGaussMySqlDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListGaussMySqlDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListGaussMySqlDatabaseRequest::getOffset() const
{
    return offset_;
}

void ListGaussMySqlDatabaseRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGaussMySqlDatabaseRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGaussMySqlDatabaseRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGaussMySqlDatabaseRequest::getLimit() const
{
    return limit_;
}

void ListGaussMySqlDatabaseRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGaussMySqlDatabaseRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGaussMySqlDatabaseRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGaussMySqlDatabaseRequest::getName() const
{
    return name_;
}

void ListGaussMySqlDatabaseRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGaussMySqlDatabaseRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListGaussMySqlDatabaseRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGaussMySqlDatabaseRequest::getCharset() const
{
    return charset_;
}

void ListGaussMySqlDatabaseRequest::setCharset(const std::string& value)
{
    charset_ = value;
    charsetIsSet_ = true;
}

bool ListGaussMySqlDatabaseRequest::charsetIsSet() const
{
    return charsetIsSet_;
}

void ListGaussMySqlDatabaseRequest::unsetcharset()
{
    charsetIsSet_ = false;
}

}
}
}
}
}


