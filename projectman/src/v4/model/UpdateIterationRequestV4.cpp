

#include "huaweicloud/projectman/v4/model/UpdateIterationRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIterationRequestV4::UpdateIterationRequestV4()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    overType_ = "";
    overTypeIsSet_ = false;
}

UpdateIterationRequestV4::~UpdateIterationRequestV4() = default;

void UpdateIterationRequestV4::validate()
{
}

web::json::value UpdateIterationRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(overTypeIsSet_) {
        val[utility::conversions::to_string_t("over_type")] = ModelBase::toJson(overType_);
    }

    return val;
}
bool UpdateIterationRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("over_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("over_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverType(refVal);
        }
    }
    return ok;
}


std::string UpdateIterationRequestV4::getBeginTime() const
{
    return beginTime_;
}

void UpdateIterationRequestV4::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool UpdateIterationRequestV4::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void UpdateIterationRequestV4::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string UpdateIterationRequestV4::getDescription() const
{
    return description_;
}

void UpdateIterationRequestV4::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateIterationRequestV4::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateIterationRequestV4::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateIterationRequestV4::getEndTime() const
{
    return endTime_;
}

void UpdateIterationRequestV4::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateIterationRequestV4::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateIterationRequestV4::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string UpdateIterationRequestV4::getName() const
{
    return name_;
}

void UpdateIterationRequestV4::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateIterationRequestV4::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateIterationRequestV4::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateIterationRequestV4::getStatus() const
{
    return status_;
}

void UpdateIterationRequestV4::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateIterationRequestV4::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateIterationRequestV4::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateIterationRequestV4::getOverType() const
{
    return overType_;
}

void UpdateIterationRequestV4::setOverType(const std::string& value)
{
    overType_ = value;
    overTypeIsSet_ = true;
}

bool UpdateIterationRequestV4::overTypeIsSet() const
{
    return overTypeIsSet_;
}

void UpdateIterationRequestV4::unsetoverType()
{
    overTypeIsSet_ = false;
}

}
}
}
}
}


