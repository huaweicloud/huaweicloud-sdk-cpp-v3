

#include "huaweicloud/gaussdbfornosql/v3/model/ListDbUsersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDbUsersRequest::ListDbUsersRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDbUsersRequest::~ListDbUsersRequest() = default;

void ListDbUsersRequest::validate()
{
}

web::json::value ListDbUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListDbUsersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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

std::string ListDbUsersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDbUsersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDbUsersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDbUsersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDbUsersRequest::getName() const
{
    return name_;
}

void ListDbUsersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDbUsersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDbUsersRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListDbUsersRequest::getOffset() const
{
    return offset_;
}

void ListDbUsersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbUsersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbUsersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbUsersRequest::getLimit() const
{
    return limit_;
}

void ListDbUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


