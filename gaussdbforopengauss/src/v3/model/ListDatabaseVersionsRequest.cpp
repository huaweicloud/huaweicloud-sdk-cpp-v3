

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVersionsRequest::ListDatabaseVersionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDatabaseVersionsRequest::~ListDatabaseVersionsRequest() = default;

void ListDatabaseVersionsRequest::validate()
{
}

web::json::value ListDatabaseVersionsRequest::toJson() const
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
bool ListDatabaseVersionsRequest::fromJson(const web::json::value& val)
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


std::string ListDatabaseVersionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatabaseVersionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatabaseVersionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatabaseVersionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListDatabaseVersionsRequest::getOffset() const
{
    return offset_;
}

void ListDatabaseVersionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDatabaseVersionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDatabaseVersionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDatabaseVersionsRequest::getLimit() const
{
    return limit_;
}

void ListDatabaseVersionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDatabaseVersionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDatabaseVersionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


