

#include "huaweicloud/gaussdb/v3/model/ShowStarrocksParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarrocksParamsRequest::ShowStarrocksParamsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowStarrocksParamsRequest::~ShowStarrocksParamsRequest() = default;

void ShowStarrocksParamsRequest::validate()
{
}

web::json::value ShowStarrocksParamsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowStarrocksParamsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowStarrocksParamsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowStarrocksParamsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowStarrocksParamsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowStarrocksParamsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowStarrocksParamsRequest::getNodeType() const
{
    return nodeType_;
}

void ShowStarrocksParamsRequest::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool ShowStarrocksParamsRequest::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void ShowStarrocksParamsRequest::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

int32_t ShowStarrocksParamsRequest::getOffset() const
{
    return offset_;
}

void ShowStarrocksParamsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowStarrocksParamsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowStarrocksParamsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowStarrocksParamsRequest::getLimit() const
{
    return limit_;
}

void ShowStarrocksParamsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowStarrocksParamsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowStarrocksParamsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowStarrocksParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowStarrocksParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowStarrocksParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowStarrocksParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


