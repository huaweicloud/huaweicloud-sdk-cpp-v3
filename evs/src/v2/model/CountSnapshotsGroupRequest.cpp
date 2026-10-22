

#include "huaweicloud/evs/v2/model/CountSnapshotsGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountSnapshotsGroupRequest::CountSnapshotsGroupRequest()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

CountSnapshotsGroupRequest::~CountSnapshotsGroupRequest() = default;

void CountSnapshotsGroupRequest::validate()
{
}

web::json::value CountSnapshotsGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CountSnapshotsGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tag_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKey(refVal);
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
    return ok;
}


std::string CountSnapshotsGroupRequest::getName() const
{
    return name_;
}

void CountSnapshotsGroupRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CountSnapshotsGroupRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CountSnapshotsGroupRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CountSnapshotsGroupRequest::getStatus() const
{
    return status_;
}

void CountSnapshotsGroupRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountSnapshotsGroupRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CountSnapshotsGroupRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CountSnapshotsGroupRequest::getId() const
{
    return id_;
}

void CountSnapshotsGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountSnapshotsGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void CountSnapshotsGroupRequest::unsetid()
{
    idIsSet_ = false;
}

std::string CountSnapshotsGroupRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CountSnapshotsGroupRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CountSnapshotsGroupRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CountSnapshotsGroupRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CountSnapshotsGroupRequest::getTagKey() const
{
    return tagKey_;
}

void CountSnapshotsGroupRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool CountSnapshotsGroupRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void CountSnapshotsGroupRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string CountSnapshotsGroupRequest::getTags() const
{
    return tags_;
}

void CountSnapshotsGroupRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountSnapshotsGroupRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountSnapshotsGroupRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


