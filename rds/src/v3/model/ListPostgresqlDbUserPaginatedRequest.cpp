

#include "huaweicloud/rds/v3/model/ListPostgresqlDbUserPaginatedRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlDbUserPaginatedRequest::ListPostgresqlDbUserPaginatedRequest()
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

ListPostgresqlDbUserPaginatedRequest::~ListPostgresqlDbUserPaginatedRequest() = default;

void ListPostgresqlDbUserPaginatedRequest::validate()
{
}

web::json::value ListPostgresqlDbUserPaginatedRequest::toJson() const
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
bool ListPostgresqlDbUserPaginatedRequest::fromJson(const web::json::value& val)
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


std::string ListPostgresqlDbUserPaginatedRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPostgresqlDbUserPaginatedRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPostgresqlDbUserPaginatedRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPostgresqlDbUserPaginatedRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPostgresqlDbUserPaginatedRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPostgresqlDbUserPaginatedRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPostgresqlDbUserPaginatedRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPostgresqlDbUserPaginatedRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListPostgresqlDbUserPaginatedRequest::getPage() const
{
    return page_;
}

void ListPostgresqlDbUserPaginatedRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListPostgresqlDbUserPaginatedRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListPostgresqlDbUserPaginatedRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListPostgresqlDbUserPaginatedRequest::getLimit() const
{
    return limit_;
}

void ListPostgresqlDbUserPaginatedRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPostgresqlDbUserPaginatedRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPostgresqlDbUserPaginatedRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


