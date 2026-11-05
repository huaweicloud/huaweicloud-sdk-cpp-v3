

#include "huaweicloud/rds/v3/model/ListAiApplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAiApplicationsRequest::ListAiApplicationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    managedInstanceId_ = "";
    managedInstanceIdIsSet_ = false;
    managedInstanceName_ = "";
    managedInstanceNameIsSet_ = false;
    enableSsl_ = false;
    enableSslIsSet_ = false;
    startCreatedTime_ = "";
    startCreatedTimeIsSet_ = false;
    endCreatedTime_ = "";
    endCreatedTimeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAiApplicationsRequest::~ListAiApplicationsRequest() = default;

void ListAiApplicationsRequest::validate()
{
}

web::json::value ListAiApplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(managedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("managed_instance_id")] = ModelBase::toJson(managedInstanceId_);
    }
    if(managedInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("managed_instance_name")] = ModelBase::toJson(managedInstanceName_);
    }
    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
    }
    if(startCreatedTimeIsSet_) {
        val[utility::conversions::to_string_t("start_created_time")] = ModelBase::toJson(startCreatedTime_);
    }
    if(endCreatedTimeIsSet_) {
        val[utility::conversions::to_string_t("end_created_time")] = ModelBase::toJson(endCreatedTime_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAiApplicationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("managed_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managed_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndCreatedTime(refVal);
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


std::string ListAiApplicationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAiApplicationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAiApplicationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAiApplicationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAiApplicationsRequest::getName() const
{
    return name_;
}

void ListAiApplicationsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAiApplicationsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAiApplicationsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAiApplicationsRequest::getId() const
{
    return id_;
}

void ListAiApplicationsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAiApplicationsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListAiApplicationsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListAiApplicationsRequest::getType() const
{
    return type_;
}

void ListAiApplicationsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAiApplicationsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAiApplicationsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAiApplicationsRequest::getMode() const
{
    return mode_;
}

void ListAiApplicationsRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListAiApplicationsRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListAiApplicationsRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string ListAiApplicationsRequest::getStatus() const
{
    return status_;
}

void ListAiApplicationsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAiApplicationsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAiApplicationsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAiApplicationsRequest::getManagedInstanceId() const
{
    return managedInstanceId_;
}

void ListAiApplicationsRequest::setManagedInstanceId(const std::string& value)
{
    managedInstanceId_ = value;
    managedInstanceIdIsSet_ = true;
}

bool ListAiApplicationsRequest::managedInstanceIdIsSet() const
{
    return managedInstanceIdIsSet_;
}

void ListAiApplicationsRequest::unsetmanagedInstanceId()
{
    managedInstanceIdIsSet_ = false;
}

std::string ListAiApplicationsRequest::getManagedInstanceName() const
{
    return managedInstanceName_;
}

void ListAiApplicationsRequest::setManagedInstanceName(const std::string& value)
{
    managedInstanceName_ = value;
    managedInstanceNameIsSet_ = true;
}

bool ListAiApplicationsRequest::managedInstanceNameIsSet() const
{
    return managedInstanceNameIsSet_;
}

void ListAiApplicationsRequest::unsetmanagedInstanceName()
{
    managedInstanceNameIsSet_ = false;
}

bool ListAiApplicationsRequest::isEnableSsl() const
{
    return enableSsl_;
}

void ListAiApplicationsRequest::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool ListAiApplicationsRequest::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void ListAiApplicationsRequest::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

std::string ListAiApplicationsRequest::getStartCreatedTime() const
{
    return startCreatedTime_;
}

void ListAiApplicationsRequest::setStartCreatedTime(const std::string& value)
{
    startCreatedTime_ = value;
    startCreatedTimeIsSet_ = true;
}

bool ListAiApplicationsRequest::startCreatedTimeIsSet() const
{
    return startCreatedTimeIsSet_;
}

void ListAiApplicationsRequest::unsetstartCreatedTime()
{
    startCreatedTimeIsSet_ = false;
}

std::string ListAiApplicationsRequest::getEndCreatedTime() const
{
    return endCreatedTime_;
}

void ListAiApplicationsRequest::setEndCreatedTime(const std::string& value)
{
    endCreatedTime_ = value;
    endCreatedTimeIsSet_ = true;
}

bool ListAiApplicationsRequest::endCreatedTimeIsSet() const
{
    return endCreatedTimeIsSet_;
}

void ListAiApplicationsRequest::unsetendCreatedTime()
{
    endCreatedTimeIsSet_ = false;
}

std::string ListAiApplicationsRequest::getSortKey() const
{
    return sortKey_;
}

void ListAiApplicationsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAiApplicationsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAiApplicationsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListAiApplicationsRequest::getSortDir() const
{
    return sortDir_;
}

void ListAiApplicationsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAiApplicationsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAiApplicationsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListAiApplicationsRequest::getOffset() const
{
    return offset_;
}

void ListAiApplicationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAiApplicationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAiApplicationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAiApplicationsRequest::getLimit() const
{
    return limit_;
}

void ListAiApplicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAiApplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAiApplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


