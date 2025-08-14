

#include "huaweicloud/iotda/v5/model/DisForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DisForwarding::DisForwarding()
{
    regionName_ = "";
    regionNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
}

DisForwarding::~DisForwarding() = default;

void DisForwarding::validate()
{
}

web::json::value DisForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }

    return val;
}
bool DisForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
        }
    }
    return ok;
}


std::string DisForwarding::getRegionName() const
{
    return regionName_;
}

void DisForwarding::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool DisForwarding::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void DisForwarding::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string DisForwarding::getProjectId() const
{
    return projectId_;
}

void DisForwarding::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DisForwarding::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DisForwarding::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DisForwarding::getStreamName() const
{
    return streamName_;
}

void DisForwarding::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool DisForwarding::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void DisForwarding::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string DisForwarding::getStreamId() const
{
    return streamId_;
}

void DisForwarding::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool DisForwarding::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void DisForwarding::unsetstreamId()
{
    streamIdIsSet_ = false;
}

}
}
}
}
}


