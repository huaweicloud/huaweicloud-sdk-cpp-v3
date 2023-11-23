

#include "huaweicloud/drs/v5/model/ListJdbcDriversRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJdbcDriversRequest::ListJdbcDriversRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListJdbcDriversRequest::~ListJdbcDriversRequest() = default;

void ListJdbcDriversRequest::validate()
{
}

web::json::value ListJdbcDriversRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListJdbcDriversRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t ListJdbcDriversRequest::getLimit() const
{
    return limit_;
}

void ListJdbcDriversRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJdbcDriversRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJdbcDriversRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListJdbcDriversRequest::getOffset() const
{
    return offset_;
}

void ListJdbcDriversRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJdbcDriversRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJdbcDriversRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListJdbcDriversRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJdbcDriversRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJdbcDriversRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJdbcDriversRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


