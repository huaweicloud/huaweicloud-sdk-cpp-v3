

#include "huaweicloud/sdrs/v1/model/RpoStattisticsParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




RpoStattisticsParams::RpoStattisticsParams()
{
    id_ = "";
    idIsSet_ = false;
    pointTime_ = "";
    pointTimeIsSet_ = false;
    resourceNum_ = 0;
    resourceNumIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

RpoStattisticsParams::~RpoStattisticsParams() = default;

void RpoStattisticsParams::validate()
{
}

web::json::value RpoStattisticsParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(pointTimeIsSet_) {
        val[utility::conversions::to_string_t("point_time")] = ModelBase::toJson(pointTime_);
    }
    if(resourceNumIsSet_) {
        val[utility::conversions::to_string_t("resource_num")] = ModelBase::toJson(resourceNum_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool RpoStattisticsParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("point_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("point_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPointTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string RpoStattisticsParams::getId() const
{
    return id_;
}

void RpoStattisticsParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RpoStattisticsParams::idIsSet() const
{
    return idIsSet_;
}

void RpoStattisticsParams::unsetid()
{
    idIsSet_ = false;
}

std::string RpoStattisticsParams::getPointTime() const
{
    return pointTime_;
}

void RpoStattisticsParams::setPointTime(const std::string& value)
{
    pointTime_ = value;
    pointTimeIsSet_ = true;
}

bool RpoStattisticsParams::pointTimeIsSet() const
{
    return pointTimeIsSet_;
}

void RpoStattisticsParams::unsetpointTime()
{
    pointTimeIsSet_ = false;
}

int32_t RpoStattisticsParams::getResourceNum() const
{
    return resourceNum_;
}

void RpoStattisticsParams::setResourceNum(int32_t value)
{
    resourceNum_ = value;
    resourceNumIsSet_ = true;
}

bool RpoStattisticsParams::resourceNumIsSet() const
{
    return resourceNumIsSet_;
}

void RpoStattisticsParams::unsetresourceNum()
{
    resourceNumIsSet_ = false;
}

std::string RpoStattisticsParams::getResourceType() const
{
    return resourceType_;
}

void RpoStattisticsParams::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool RpoStattisticsParams::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void RpoStattisticsParams::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string RpoStattisticsParams::getCreatedAt() const
{
    return createdAt_;
}

void RpoStattisticsParams::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RpoStattisticsParams::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RpoStattisticsParams::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RpoStattisticsParams::getUpdatedAt() const
{
    return updatedAt_;
}

void RpoStattisticsParams::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RpoStattisticsParams::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RpoStattisticsParams::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


