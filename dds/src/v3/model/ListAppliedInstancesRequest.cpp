

#include "huaweicloud/dds/v3/model/ListAppliedInstancesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAppliedInstancesRequest::ListAppliedInstancesRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAppliedInstancesRequest::~ListAppliedInstancesRequest() = default;

void ListAppliedInstancesRequest::validate()
{
}

web::json::value ListAppliedInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListAppliedInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
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

std::string ListAppliedInstancesRequest::getConfigId() const
{
    return configId_;
}

void ListAppliedInstancesRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ListAppliedInstancesRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ListAppliedInstancesRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ListAppliedInstancesRequest::getOffset() const
{
    return offset_;
}

void ListAppliedInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAppliedInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAppliedInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAppliedInstancesRequest::getLimit() const
{
    return limit_;
}

void ListAppliedInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAppliedInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAppliedInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


