

#include "huaweicloud/rds/v3/model/CompareConfigurationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CompareConfigurationRequestBody::CompareConfigurationRequestBody()
{
    sourceId_ = "";
    sourceIdIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
}

CompareConfigurationRequestBody::~CompareConfigurationRequestBody() = default;

void CompareConfigurationRequestBody::validate()
{
}

web::json::value CompareConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }

    return val;
}
bool CompareConfigurationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    return ok;
}


std::string CompareConfigurationRequestBody::getSourceId() const
{
    return sourceId_;
}

void CompareConfigurationRequestBody::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool CompareConfigurationRequestBody::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void CompareConfigurationRequestBody::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string CompareConfigurationRequestBody::getTargetId() const
{
    return targetId_;
}

void CompareConfigurationRequestBody::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool CompareConfigurationRequestBody::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void CompareConfigurationRequestBody::unsettargetId()
{
    targetIdIsSet_ = false;
}

}
}
}
}
}


