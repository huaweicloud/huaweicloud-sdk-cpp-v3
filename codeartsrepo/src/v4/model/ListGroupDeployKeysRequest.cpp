

#include "huaweicloud/codeartsrepo/v4/model/ListGroupDeployKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupDeployKeysRequest::ListGroupDeployKeysRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupDeployKeysRequest::~ListGroupDeployKeysRequest() = default;

void ListGroupDeployKeysRequest::validate()
{
}

web::json::value ListGroupDeployKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListGroupDeployKeysRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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


int32_t ListGroupDeployKeysRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupDeployKeysRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupDeployKeysRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupDeployKeysRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupDeployKeysRequest::getOffset() const
{
    return offset_;
}

void ListGroupDeployKeysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupDeployKeysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupDeployKeysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupDeployKeysRequest::getLimit() const
{
    return limit_;
}

void ListGroupDeployKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupDeployKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupDeployKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


