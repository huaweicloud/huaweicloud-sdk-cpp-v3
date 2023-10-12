

#include "huaweicloud/evs/v2/model/JobEntities.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




JobEntities::JobEntities()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    subJobsIsSet_ = false;
}

JobEntities::~JobEntities() = default;

void JobEntities::validate()
{
}

web::json::value JobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(subJobsIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs")] = ModelBase::toJson(subJobs_);
    }

    return val;
}
bool JobEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sub_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SubJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobs(refVal);
        }
    }
    return ok;
}


std::string JobEntities::getVolumeType() const
{
    return volumeType_;
}

void JobEntities::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool JobEntities::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void JobEntities::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t JobEntities::getSize() const
{
    return size_;
}

void JobEntities::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool JobEntities::sizeIsSet() const
{
    return sizeIsSet_;
}

void JobEntities::unsetsize()
{
    sizeIsSet_ = false;
}

std::string JobEntities::getVolumeId() const
{
    return volumeId_;
}

void JobEntities::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool JobEntities::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void JobEntities::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string JobEntities::getName() const
{
    return name_;
}

void JobEntities::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobEntities::nameIsSet() const
{
    return nameIsSet_;
}

void JobEntities::unsetname()
{
    nameIsSet_ = false;
}

std::vector<SubJob>& JobEntities::getSubJobs()
{
    return subJobs_;
}

void JobEntities::setSubJobs(const std::vector<SubJob>& value)
{
    subJobs_ = value;
    subJobsIsSet_ = true;
}

bool JobEntities::subJobsIsSet() const
{
    return subJobsIsSet_;
}

void JobEntities::unsetsubJobs()
{
    subJobsIsSet_ = false;
}

}
}
}
}
}


