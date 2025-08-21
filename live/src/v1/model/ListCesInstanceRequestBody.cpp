

#include "huaweicloud/live/v1/model/ListCesInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRequestBody::ListCesInstanceRequestBody()
{
    namespace_ = "";
    namespaceIsSet_ = false;
    queryIsSet_ = false;
    start_ = 0;
    startIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListCesInstanceRequestBody::~ListCesInstanceRequestBody() = default;

void ListCesInstanceRequestBody::validate()
{
}

web::json::value ListCesInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListCesInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::vector<ListCesInstanceRequestBody_query> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
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


std::string ListCesInstanceRequestBody::getNamespace() const
{
    return namespace_;
}

void ListCesInstanceRequestBody::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListCesInstanceRequestBody::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListCesInstanceRequestBody::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::vector<ListCesInstanceRequestBody_query>& ListCesInstanceRequestBody::getQuery()
{
    return query_;
}

void ListCesInstanceRequestBody::setQuery(const std::vector<ListCesInstanceRequestBody_query>& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListCesInstanceRequestBody::queryIsSet() const
{
    return queryIsSet_;
}

void ListCesInstanceRequestBody::unsetquery()
{
    queryIsSet_ = false;
}

int32_t ListCesInstanceRequestBody::getStart() const
{
    return start_;
}

void ListCesInstanceRequestBody::setStart(int32_t value)
{
    start_ = value;
    startIsSet_ = true;
}

bool ListCesInstanceRequestBody::startIsSet() const
{
    return startIsSet_;
}

void ListCesInstanceRequestBody::unsetstart()
{
    startIsSet_ = false;
}

int32_t ListCesInstanceRequestBody::getLimit() const
{
    return limit_;
}

void ListCesInstanceRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCesInstanceRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListCesInstanceRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


