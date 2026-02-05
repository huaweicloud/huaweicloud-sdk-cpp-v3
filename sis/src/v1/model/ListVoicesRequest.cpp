

#include "huaweicloud/sis/v1/model/ListVoicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ListVoicesRequest::ListVoicesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

ListVoicesRequest::~ListVoicesRequest() = default;

void ListVoicesRequest::validate()
{
}

web::json::value ListVoicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListVoicesRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


int32_t ListVoicesRequest::getLimit() const
{
    return limit_;
}

void ListVoicesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVoicesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVoicesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVoicesRequest::getOffset() const
{
    return offset_;
}

void ListVoicesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVoicesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVoicesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


