

#include "huaweicloud/rds/v3/model/ListSqlserverDbUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlserverDbUsersRequest::ListSqlserverDbUsersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSqlserverDbUsersRequest::~ListSqlserverDbUsersRequest() = default;

void ListSqlserverDbUsersRequest::validate()
{
}

web::json::value ListSqlserverDbUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSqlserverDbUsersRequest::fromJson(const web::json::value& val)
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


std::string ListSqlserverDbUsersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlserverDbUsersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlserverDbUsersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlserverDbUsersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSqlserverDbUsersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlserverDbUsersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlserverDbUsersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlserverDbUsersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListSqlserverDbUsersRequest::getPage() const
{
    return page_;
}

void ListSqlserverDbUsersRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListSqlserverDbUsersRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListSqlserverDbUsersRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListSqlserverDbUsersRequest::getLimit() const
{
    return limit_;
}

void ListSqlserverDbUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlserverDbUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlserverDbUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


