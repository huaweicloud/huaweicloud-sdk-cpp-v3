

#include "huaweicloud/drs/v5/model/ListConnectionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListConnectionsRequest::ListConnectionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    connectionId_ = "";
    connectionIdIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instId_ = "";
    instIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    fetchAll_ = false;
    fetchAllIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListConnectionsRequest::~ListConnectionsRequest() = default;

void ListConnectionsRequest::validate()
{
}

web::json::value ListConnectionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(connectionIdIsSet_) {
        val[utility::conversions::to_string_t("connection_id")] = ModelBase::toJson(connectionId_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(instIdIsSet_) {
        val[utility::conversions::to_string_t("inst_id")] = ModelBase::toJson(instId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(fetchAllIsSet_) {
        val[utility::conversions::to_string_t("fetch_all")] = ModelBase::toJson(fetchAll_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListConnectionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("connection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("inst_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inst_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fetch_all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fetch_all"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFetchAll(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


std::string ListConnectionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListConnectionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListConnectionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListConnectionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListConnectionsRequest::getConnectionId() const
{
    return connectionId_;
}

void ListConnectionsRequest::setConnectionId(const std::string& value)
{
    connectionId_ = value;
    connectionIdIsSet_ = true;
}

bool ListConnectionsRequest::connectionIdIsSet() const
{
    return connectionIdIsSet_;
}

void ListConnectionsRequest::unsetconnectionId()
{
    connectionIdIsSet_ = false;
}

std::string ListConnectionsRequest::getDbType() const
{
    return dbType_;
}

void ListConnectionsRequest::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ListConnectionsRequest::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ListConnectionsRequest::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string ListConnectionsRequest::getName() const
{
    return name_;
}

void ListConnectionsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListConnectionsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListConnectionsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListConnectionsRequest::getInstId() const
{
    return instId_;
}

void ListConnectionsRequest::setInstId(const std::string& value)
{
    instId_ = value;
    instIdIsSet_ = true;
}

bool ListConnectionsRequest::instIdIsSet() const
{
    return instIdIsSet_;
}

void ListConnectionsRequest::unsetinstId()
{
    instIdIsSet_ = false;
}

std::string ListConnectionsRequest::getIp() const
{
    return ip_;
}

void ListConnectionsRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListConnectionsRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListConnectionsRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListConnectionsRequest::getDescription() const
{
    return description_;
}

void ListConnectionsRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListConnectionsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListConnectionsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListConnectionsRequest::getCreateTime() const
{
    return createTime_;
}

void ListConnectionsRequest::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListConnectionsRequest::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListConnectionsRequest::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListConnectionsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListConnectionsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListConnectionsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListConnectionsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ListConnectionsRequest::getOffset() const
{
    return offset_;
}

void ListConnectionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListConnectionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListConnectionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListConnectionsRequest::getLimit() const
{
    return limit_;
}

void ListConnectionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListConnectionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListConnectionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListConnectionsRequest::isFetchAll() const
{
    return fetchAll_;
}

void ListConnectionsRequest::setFetchAll(bool value)
{
    fetchAll_ = value;
    fetchAllIsSet_ = true;
}

bool ListConnectionsRequest::fetchAllIsSet() const
{
    return fetchAllIsSet_;
}

void ListConnectionsRequest::unsetfetchAll()
{
    fetchAllIsSet_ = false;
}

std::string ListConnectionsRequest::getSortKey() const
{
    return sortKey_;
}

void ListConnectionsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListConnectionsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListConnectionsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListConnectionsRequest::getSortDir() const
{
    return sortDir_;
}

void ListConnectionsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListConnectionsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListConnectionsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


