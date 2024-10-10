

#include "huaweicloud/drs/v5/model/ListReplicationJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListReplicationJobsRequest::ListReplicationJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    dbsInstanceIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    completedAt_ = "";
    completedAtIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListReplicationJobsRequest::~ListReplicationJobsRequest() = default;

void ListReplicationJobsRequest::validate()
{
}

web::json::value ListReplicationJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(dbsInstanceIdsIsSet_) {
        val[utility::conversions::to_string_t("dbs_instance_ids")] = ModelBase::toJson(dbsInstanceIds_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(completedAtIsSet_) {
        val[utility::conversions::to_string_t("completed_at")] = ModelBase::toJson(completedAt_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListReplicationJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dbs_instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbs_instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbsInstanceIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::string ListReplicationJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListReplicationJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListReplicationJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListReplicationJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListReplicationJobsRequest::getName() const
{
    return name_;
}

void ListReplicationJobsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListReplicationJobsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListReplicationJobsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListReplicationJobsRequest::getStatus() const
{
    return status_;
}

void ListReplicationJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListReplicationJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListReplicationJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListReplicationJobsRequest::getDbsInstanceIds()
{
    return dbsInstanceIds_;
}

void ListReplicationJobsRequest::setDbsInstanceIds(const std::vector<std::string>& value)
{
    dbsInstanceIds_ = value;
    dbsInstanceIdsIsSet_ = true;
}

bool ListReplicationJobsRequest::dbsInstanceIdsIsSet() const
{
    return dbsInstanceIdsIsSet_;
}

void ListReplicationJobsRequest::unsetdbsInstanceIds()
{
    dbsInstanceIdsIsSet_ = false;
}

std::string ListReplicationJobsRequest::getDescription() const
{
    return description_;
}

void ListReplicationJobsRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListReplicationJobsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListReplicationJobsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListReplicationJobsRequest::getCreateAt() const
{
    return createAt_;
}

void ListReplicationJobsRequest::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ListReplicationJobsRequest::createAtIsSet() const
{
    return createAtIsSet_;
}

void ListReplicationJobsRequest::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ListReplicationJobsRequest::getCompletedAt() const
{
    return completedAt_;
}

void ListReplicationJobsRequest::setCompletedAt(const std::string& value)
{
    completedAt_ = value;
    completedAtIsSet_ = true;
}

bool ListReplicationJobsRequest::completedAtIsSet() const
{
    return completedAtIsSet_;
}

void ListReplicationJobsRequest::unsetcompletedAt()
{
    completedAtIsSet_ = false;
}

std::string ListReplicationJobsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListReplicationJobsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListReplicationJobsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListReplicationJobsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListReplicationJobsRequest::getTags() const
{
    return tags_;
}

void ListReplicationJobsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListReplicationJobsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListReplicationJobsRequest::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ListReplicationJobsRequest::getLimit() const
{
    return limit_;
}

void ListReplicationJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReplicationJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReplicationJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListReplicationJobsRequest::getOffset() const
{
    return offset_;
}

void ListReplicationJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReplicationJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReplicationJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListReplicationJobsRequest::getSortKey() const
{
    return sortKey_;
}

void ListReplicationJobsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListReplicationJobsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListReplicationJobsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListReplicationJobsRequest::getSortDir() const
{
    return sortDir_;
}

void ListReplicationJobsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListReplicationJobsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListReplicationJobsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


