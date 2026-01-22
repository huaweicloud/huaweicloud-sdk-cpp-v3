

#include "huaweicloud/cfw/v1/model/ScheduleInfoDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ScheduleInfoDTO::ScheduleInfoDTO()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    periodicIsSet_ = false;
    absoluteIsSet_ = false;
}

ScheduleInfoDTO::~ScheduleInfoDTO() = default;

void ScheduleInfoDTO::validate()
{
}

web::json::value ScheduleInfoDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(periodicIsSet_) {
        val[utility::conversions::to_string_t("periodic")] = ModelBase::toJson(periodic_);
    }
    if(absoluteIsSet_) {
        val[utility::conversions::to_string_t("absolute")] = ModelBase::toJson(absolute_);
    }

    return val;
}
bool ScheduleInfoDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodic"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleInfoDTO_periodic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("absolute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("absolute"));
        if(!fieldValue.is_null())
        {
            ScheduleInfoDTO_absolute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbsolute(refVal);
        }
    }
    return ok;
}


std::string ScheduleInfoDTO::getObjectId() const
{
    return objectId_;
}

void ScheduleInfoDTO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ScheduleInfoDTO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ScheduleInfoDTO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ScheduleInfoDTO::getName() const
{
    return name_;
}

void ScheduleInfoDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScheduleInfoDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ScheduleInfoDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string ScheduleInfoDTO::getDescription() const
{
    return description_;
}

void ScheduleInfoDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ScheduleInfoDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ScheduleInfoDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<ScheduleInfoDTO_periodic>& ScheduleInfoDTO::getPeriodic()
{
    return periodic_;
}

void ScheduleInfoDTO::setPeriodic(const std::vector<ScheduleInfoDTO_periodic>& value)
{
    periodic_ = value;
    periodicIsSet_ = true;
}

bool ScheduleInfoDTO::periodicIsSet() const
{
    return periodicIsSet_;
}

void ScheduleInfoDTO::unsetperiodic()
{
    periodicIsSet_ = false;
}

ScheduleInfoDTO_absolute ScheduleInfoDTO::getAbsolute() const
{
    return absolute_;
}

void ScheduleInfoDTO::setAbsolute(const ScheduleInfoDTO_absolute& value)
{
    absolute_ = value;
    absoluteIsSet_ = true;
}

bool ScheduleInfoDTO::absoluteIsSet() const
{
    return absoluteIsSet_;
}

void ScheduleInfoDTO::unsetabsolute()
{
    absoluteIsSet_ = false;
}

}
}
}
}
}


