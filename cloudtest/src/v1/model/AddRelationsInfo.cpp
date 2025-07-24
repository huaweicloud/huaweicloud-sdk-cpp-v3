

#include "huaweicloud/cloudtest/v1/model/AddRelationsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddRelationsInfo::AddRelationsInfo()
{
    relationsIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    addToIterator_ = false;
    addToIteratorIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

AddRelationsInfo::~AddRelationsInfo() = default;

void AddRelationsInfo::validate()
{
}

web::json::value AddRelationsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relationsIsSet_) {
        val[utility::conversions::to_string_t("relations")] = ModelBase::toJson(relations_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(addToIteratorIsSet_) {
        val[utility::conversions::to_string_t("add_to_iterator")] = ModelBase::toJson(addToIterator_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool AddRelationsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("relations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relations"));
        if(!fieldValue.is_null())
        {
            std::vector<RelationInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_to_iterator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_to_iterator"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddToIterator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    return ok;
}


std::vector<RelationInfo>& AddRelationsInfo::getRelations()
{
    return relations_;
}

void AddRelationsInfo::setRelations(const std::vector<RelationInfo>& value)
{
    relations_ = value;
    relationsIsSet_ = true;
}

bool AddRelationsInfo::relationsIsSet() const
{
    return relationsIsSet_;
}

void AddRelationsInfo::unsetrelations()
{
    relationsIsSet_ = false;
}

std::string AddRelationsInfo::getTrackerId() const
{
    return trackerId_;
}

void AddRelationsInfo::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool AddRelationsInfo::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void AddRelationsInfo::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string AddRelationsInfo::getVersionUri() const
{
    return versionUri_;
}

void AddRelationsInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool AddRelationsInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void AddRelationsInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string AddRelationsInfo::getTaskUri() const
{
    return taskUri_;
}

void AddRelationsInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool AddRelationsInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void AddRelationsInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

bool AddRelationsInfo::isAddToIterator() const
{
    return addToIterator_;
}

void AddRelationsInfo::setAddToIterator(bool value)
{
    addToIterator_ = value;
    addToIteratorIsSet_ = true;
}

bool AddRelationsInfo::addToIteratorIsSet() const
{
    return addToIteratorIsSet_;
}

void AddRelationsInfo::unsetaddToIterator()
{
    addToIteratorIsSet_ = false;
}

std::string AddRelationsInfo::getProjectUuid() const
{
    return projectUuid_;
}

void AddRelationsInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool AddRelationsInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void AddRelationsInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


