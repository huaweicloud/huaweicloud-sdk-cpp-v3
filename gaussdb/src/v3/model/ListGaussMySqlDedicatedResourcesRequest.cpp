

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDedicatedResourcesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDedicatedResourcesRequest::ListGaussMySqlDedicatedResourcesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGaussMySqlDedicatedResourcesRequest::~ListGaussMySqlDedicatedResourcesRequest() = default;

void ListGaussMySqlDedicatedResourcesRequest::validate()
{
}

web::json::value ListGaussMySqlDedicatedResourcesRequest::toJson() const
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

bool ListGaussMySqlDedicatedResourcesRequest::fromJson(const web::json::value& val)
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

std::string ListGaussMySqlDedicatedResourcesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlDedicatedResourcesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlDedicatedResourcesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlDedicatedResourcesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListGaussMySqlDedicatedResourcesRequest::getOffset() const
{
    return offset_;
}

void ListGaussMySqlDedicatedResourcesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGaussMySqlDedicatedResourcesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGaussMySqlDedicatedResourcesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGaussMySqlDedicatedResourcesRequest::getLimit() const
{
    return limit_;
}

void ListGaussMySqlDedicatedResourcesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGaussMySqlDedicatedResourcesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGaussMySqlDedicatedResourcesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


