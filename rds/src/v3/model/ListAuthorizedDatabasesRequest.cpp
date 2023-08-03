

#include "huaweicloud/rds/v3/model/ListAuthorizedDatabasesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAuthorizedDatabasesRequest::ListAuthorizedDatabasesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAuthorizedDatabasesRequest::~ListAuthorizedDatabasesRequest() = default;

void ListAuthorizedDatabasesRequest::validate()
{
}

web::json::value ListAuthorizedDatabasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user-name")] = ModelBase::toJson(userName_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListAuthorizedDatabasesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user-name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user-name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
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

std::string ListAuthorizedDatabasesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAuthorizedDatabasesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAuthorizedDatabasesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAuthorizedDatabasesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAuthorizedDatabasesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuthorizedDatabasesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuthorizedDatabasesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuthorizedDatabasesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuthorizedDatabasesRequest::getUserName() const
{
    return userName_;
}

void ListAuthorizedDatabasesRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListAuthorizedDatabasesRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListAuthorizedDatabasesRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ListAuthorizedDatabasesRequest::getPage() const
{
    return page_;
}

void ListAuthorizedDatabasesRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAuthorizedDatabasesRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListAuthorizedDatabasesRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListAuthorizedDatabasesRequest::getLimit() const
{
    return limit_;
}

void ListAuthorizedDatabasesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuthorizedDatabasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuthorizedDatabasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


