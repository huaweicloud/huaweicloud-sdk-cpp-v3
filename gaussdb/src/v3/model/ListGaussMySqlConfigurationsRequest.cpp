

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlConfigurationsRequest::ListGaussMySqlConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGaussMySqlConfigurationsRequest::~ListGaussMySqlConfigurationsRequest() = default;

void ListGaussMySqlConfigurationsRequest::validate()
{
}

web::json::value ListGaussMySqlConfigurationsRequest::toJson() const
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

    return val;
}
bool ListGaussMySqlConfigurationsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListGaussMySqlConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListGaussMySqlConfigurationsRequest::getOffset() const
{
    return offset_;
}

void ListGaussMySqlConfigurationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGaussMySqlConfigurationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGaussMySqlConfigurationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGaussMySqlConfigurationsRequest::getLimit() const
{
    return limit_;
}

void ListGaussMySqlConfigurationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGaussMySqlConfigurationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGaussMySqlConfigurationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


