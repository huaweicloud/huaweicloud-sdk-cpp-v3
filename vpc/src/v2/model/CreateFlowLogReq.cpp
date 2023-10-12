

#include "huaweicloud/vpc/v2/model/CreateFlowLogReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateFlowLogReq::CreateFlowLogReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    trafficType_ = "";
    trafficTypeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logTopicId_ = "";
    logTopicIdIsSet_ = false;
    indexEnabled_ = false;
    indexEnabledIsSet_ = false;
}

CreateFlowLogReq::~CreateFlowLogReq() = default;

void CreateFlowLogReq::validate()
{
}

web::json::value CreateFlowLogReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(trafficTypeIsSet_) {
        val[utility::conversions::to_string_t("traffic_type")] = ModelBase::toJson(trafficType_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logTopicIdIsSet_) {
        val[utility::conversions::to_string_t("log_topic_id")] = ModelBase::toJson(logTopicId_);
    }
    if(indexEnabledIsSet_) {
        val[utility::conversions::to_string_t("index_enabled")] = ModelBase::toJson(indexEnabled_);
    }

    return val;
}
bool CreateFlowLogReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexEnabled(refVal);
        }
    }
    return ok;
}


std::string CreateFlowLogReq::getName() const
{
    return name_;
}

void CreateFlowLogReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateFlowLogReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateFlowLogReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateFlowLogReq::getDescription() const
{
    return description_;
}

void CreateFlowLogReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateFlowLogReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateFlowLogReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateFlowLogReq::getResourceType() const
{
    return resourceType_;
}

void CreateFlowLogReq::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateFlowLogReq::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateFlowLogReq::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CreateFlowLogReq::getResourceId() const
{
    return resourceId_;
}

void CreateFlowLogReq::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateFlowLogReq::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateFlowLogReq::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CreateFlowLogReq::getTrafficType() const
{
    return trafficType_;
}

void CreateFlowLogReq::setTrafficType(const std::string& value)
{
    trafficType_ = value;
    trafficTypeIsSet_ = true;
}

bool CreateFlowLogReq::trafficTypeIsSet() const
{
    return trafficTypeIsSet_;
}

void CreateFlowLogReq::unsettrafficType()
{
    trafficTypeIsSet_ = false;
}

std::string CreateFlowLogReq::getLogGroupId() const
{
    return logGroupId_;
}

void CreateFlowLogReq::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateFlowLogReq::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateFlowLogReq::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateFlowLogReq::getLogTopicId() const
{
    return logTopicId_;
}

void CreateFlowLogReq::setLogTopicId(const std::string& value)
{
    logTopicId_ = value;
    logTopicIdIsSet_ = true;
}

bool CreateFlowLogReq::logTopicIdIsSet() const
{
    return logTopicIdIsSet_;
}

void CreateFlowLogReq::unsetlogTopicId()
{
    logTopicIdIsSet_ = false;
}

bool CreateFlowLogReq::isIndexEnabled() const
{
    return indexEnabled_;
}

void CreateFlowLogReq::setIndexEnabled(bool value)
{
    indexEnabled_ = value;
    indexEnabledIsSet_ = true;
}

bool CreateFlowLogReq::indexEnabledIsSet() const
{
    return indexEnabledIsSet_;
}

void CreateFlowLogReq::unsetindexEnabled()
{
    indexEnabledIsSet_ = false;
}

}
}
}
}
}


