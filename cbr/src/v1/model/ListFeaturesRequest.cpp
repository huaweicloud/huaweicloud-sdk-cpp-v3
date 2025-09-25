

#include "huaweicloud/cbr/v1/model/ListFeaturesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListFeaturesRequest::ListFeaturesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListFeaturesRequest::~ListFeaturesRequest() = default;

void ListFeaturesRequest::validate()
{
}

web::json::value ListFeaturesRequest::toJson() const
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
bool ListFeaturesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListFeaturesRequest::getLimit() const
{
    return limit_;
}

void ListFeaturesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFeaturesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFeaturesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFeaturesRequest::getOffset() const
{
    return offset_;
}

void ListFeaturesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFeaturesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFeaturesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


