

#include "huaweicloud/rds/v3/model/ListDistributorInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDistributorInstancesRequest::ListDistributorInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDistributorInstancesRequest::~ListDistributorInstancesRequest() = default;

void ListDistributorInstancesRequest::validate()
{
}

web::json::value ListDistributorInstancesRequest::toJson() const
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

    return val;
}
bool ListDistributorInstancesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListDistributorInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDistributorInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDistributorInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDistributorInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDistributorInstancesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDistributorInstancesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDistributorInstancesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDistributorInstancesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListDistributorInstancesRequest::getOffset() const
{
    return offset_;
}

void ListDistributorInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDistributorInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDistributorInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDistributorInstancesRequest::getLimit() const
{
    return limit_;
}

void ListDistributorInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDistributorInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDistributorInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


