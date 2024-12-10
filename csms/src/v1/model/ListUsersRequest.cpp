

#include "huaweicloud/csms/v1/model/ListUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListUsersRequest::ListUsersRequest()
{
    orgId_ = "";
    orgIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ListUsersRequest::~ListUsersRequest() = default;

void ListUsersRequest::validate()
{
}

web::json::value ListUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orgIdIsSet_) {
        val[utility::conversions::to_string_t("org_id")] = ModelBase::toJson(orgId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ListUsersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("org_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("org_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ListUsersRequest::getOrgId() const
{
    return orgId_;
}

void ListUsersRequest::setOrgId(const std::string& value)
{
    orgId_ = value;
    orgIdIsSet_ = true;
}

bool ListUsersRequest::orgIdIsSet() const
{
    return orgIdIsSet_;
}

void ListUsersRequest::unsetorgId()
{
    orgIdIsSet_ = false;
}

int32_t ListUsersRequest::getOffset() const
{
    return offset_;
}

void ListUsersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUsersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUsersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListUsersRequest::getLimit() const
{
    return limit_;
}

void ListUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListUsersRequest::getUserName() const
{
    return userName_;
}

void ListUsersRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListUsersRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListUsersRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


