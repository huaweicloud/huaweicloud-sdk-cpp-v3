

#include "huaweicloud/codeartsbuild/v3/model/Vertices.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Vertices::Vertices()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    buildDuration_ = 0;
    buildDurationIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    buildNo_ = "";
    buildNoIsSet_ = false;
}

Vertices::~Vertices() = default;

void Vertices::validate()
{
}

web::json::value Vertices::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(buildDurationIsSet_) {
        val[utility::conversions::to_string_t("build_duration")] = ModelBase::toJson(buildDuration_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }

    return val;
}
bool Vertices::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    return ok;
}


std::string Vertices::getId() const
{
    return id_;
}

void Vertices::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Vertices::idIsSet() const
{
    return idIsSet_;
}

void Vertices::unsetid()
{
    idIsSet_ = false;
}

std::string Vertices::getStatus() const
{
    return status_;
}

void Vertices::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Vertices::statusIsSet() const
{
    return statusIsSet_;
}

void Vertices::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Vertices::getDisplayName() const
{
    return displayName_;
}

void Vertices::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool Vertices::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void Vertices::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

int32_t Vertices::getBuildDuration() const
{
    return buildDuration_;
}

void Vertices::setBuildDuration(int32_t value)
{
    buildDuration_ = value;
    buildDurationIsSet_ = true;
}

bool Vertices::buildDurationIsSet() const
{
    return buildDurationIsSet_;
}

void Vertices::unsetbuildDuration()
{
    buildDurationIsSet_ = false;
}

std::string Vertices::getStartTime() const
{
    return startTime_;
}

void Vertices::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Vertices::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Vertices::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string Vertices::getFinishTime() const
{
    return finishTime_;
}

void Vertices::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool Vertices::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void Vertices::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string Vertices::getBuildNo() const
{
    return buildNo_;
}

void Vertices::setBuildNo(const std::string& value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool Vertices::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void Vertices::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

}
}
}
}
}


