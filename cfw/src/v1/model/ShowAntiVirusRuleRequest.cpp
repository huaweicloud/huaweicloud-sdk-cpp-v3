

#include "huaweicloud/cfw/v1/model/ShowAntiVirusRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAntiVirusRuleRequest::ShowAntiVirusRuleRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    engineType_ = 0;
    engineTypeIsSet_ = false;
}

ShowAntiVirusRuleRequest::~ShowAntiVirusRuleRequest() = default;

void ShowAntiVirusRuleRequest::validate()
{
}

web::json::value ShowAntiVirusRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }

    return val;
}
bool ShowAntiVirusRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    return ok;
}


std::string ShowAntiVirusRuleRequest::getObjectId() const
{
    return objectId_;
}

void ShowAntiVirusRuleRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ShowAntiVirusRuleRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ShowAntiVirusRuleRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ShowAntiVirusRuleRequest::getLimit() const
{
    return limit_;
}

void ShowAntiVirusRuleRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAntiVirusRuleRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAntiVirusRuleRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAntiVirusRuleRequest::getOffset() const
{
    return offset_;
}

void ShowAntiVirusRuleRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAntiVirusRuleRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAntiVirusRuleRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowAntiVirusRuleRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowAntiVirusRuleRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowAntiVirusRuleRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowAntiVirusRuleRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ShowAntiVirusRuleRequest::getEngineType() const
{
    return engineType_;
}

void ShowAntiVirusRuleRequest::setEngineType(int32_t value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ShowAntiVirusRuleRequest::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ShowAntiVirusRuleRequest::unsetengineType()
{
    engineTypeIsSet_ = false;
}

}
}
}
}
}


