

#include "huaweicloud/rds/v3/model/ListRecycleInstancesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRecycleInstancesRequest::ListRecycleInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRecycleInstancesRequest::~ListRecycleInstancesRequest() = default;

void ListRecycleInstancesRequest::validate()
{
}

web::json::value ListRecycleInstancesRequest::toJson() const
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

bool ListRecycleInstancesRequest::fromJson(const web::json::value& val)
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

std::string ListRecycleInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRecycleInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRecycleInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRecycleInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListRecycleInstancesRequest::getOffset() const
{
    return offset_;
}

void ListRecycleInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRecycleInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRecycleInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRecycleInstancesRequest::getLimit() const
{
    return limit_;
}

void ListRecycleInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecycleInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecycleInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


