

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterRelationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowCrossCloudDisasterRelationsRequest::ShowCrossCloudDisasterRelationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    drRole_ = "";
    drRoleIsSet_ = false;
    drType_ = "";
    drTypeIsSet_ = false;
    drStatus_ = "";
    drStatusIsSet_ = false;
}

ShowCrossCloudDisasterRelationsRequest::~ShowCrossCloudDisasterRelationsRequest() = default;

void ShowCrossCloudDisasterRelationsRequest::validate()
{
}

web::json::value ShowCrossCloudDisasterRelationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(drRoleIsSet_) {
        val[utility::conversions::to_string_t("dr_role")] = ModelBase::toJson(drRole_);
    }
    if(drTypeIsSet_) {
        val[utility::conversions::to_string_t("dr_type")] = ModelBase::toJson(drType_);
    }
    if(drStatusIsSet_) {
        val[utility::conversions::to_string_t("dr_status")] = ModelBase::toJson(drStatus_);
    }

    return val;
}
bool ShowCrossCloudDisasterRelationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrStatus(refVal);
        }
    }
    return ok;
}


std::string ShowCrossCloudDisasterRelationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowCrossCloudDisasterRelationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowCrossCloudDisasterRelationsRequest::getLimit() const
{
    return limit_;
}

void ShowCrossCloudDisasterRelationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowCrossCloudDisasterRelationsRequest::getOffset() const
{
    return offset_;
}

void ShowCrossCloudDisasterRelationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowCrossCloudDisasterRelationsRequest::getInstanceName() const
{
    return instanceName_;
}

void ShowCrossCloudDisasterRelationsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowCrossCloudDisasterRelationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowCrossCloudDisasterRelationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowCrossCloudDisasterRelationsRequest::getDrRole() const
{
    return drRole_;
}

void ShowCrossCloudDisasterRelationsRequest::setDrRole(const std::string& value)
{
    drRole_ = value;
    drRoleIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::drRoleIsSet() const
{
    return drRoleIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetdrRole()
{
    drRoleIsSet_ = false;
}

std::string ShowCrossCloudDisasterRelationsRequest::getDrType() const
{
    return drType_;
}

void ShowCrossCloudDisasterRelationsRequest::setDrType(const std::string& value)
{
    drType_ = value;
    drTypeIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::drTypeIsSet() const
{
    return drTypeIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetdrType()
{
    drTypeIsSet_ = false;
}

std::string ShowCrossCloudDisasterRelationsRequest::getDrStatus() const
{
    return drStatus_;
}

void ShowCrossCloudDisasterRelationsRequest::setDrStatus(const std::string& value)
{
    drStatus_ = value;
    drStatusIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsRequest::drStatusIsSet() const
{
    return drStatusIsSet_;
}

void ShowCrossCloudDisasterRelationsRequest::unsetdrStatus()
{
    drStatusIsSet_ = false;
}

}
}
}
}
}


