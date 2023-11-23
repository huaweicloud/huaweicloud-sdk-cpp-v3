

#include "huaweicloud/gaussdbfornosql/v3/model/SaveLtsConfigsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SaveLtsConfigsRequestBody::SaveLtsConfigsRequestBody()
{
    instanceIdsIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
}

SaveLtsConfigsRequestBody::~SaveLtsConfigsRequestBody() = default;

void SaveLtsConfigsRequestBody::validate()
{
}

web::json::value SaveLtsConfigsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_stream_id")] = ModelBase::toJson(ltsStreamId_);
    }

    return val;
}
bool SaveLtsConfigsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStreamId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SaveLtsConfigsRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void SaveLtsConfigsRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool SaveLtsConfigsRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void SaveLtsConfigsRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string SaveLtsConfigsRequestBody::getLogType() const
{
    return logType_;
}

void SaveLtsConfigsRequestBody::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool SaveLtsConfigsRequestBody::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void SaveLtsConfigsRequestBody::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string SaveLtsConfigsRequestBody::getLtsGroupId() const
{
    return ltsGroupId_;
}

void SaveLtsConfigsRequestBody::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool SaveLtsConfigsRequestBody::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void SaveLtsConfigsRequestBody::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string SaveLtsConfigsRequestBody::getLtsStreamId() const
{
    return ltsStreamId_;
}

void SaveLtsConfigsRequestBody::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool SaveLtsConfigsRequestBody::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void SaveLtsConfigsRequestBody::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

}
}
}
}
}


