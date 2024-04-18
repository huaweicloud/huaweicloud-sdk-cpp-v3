

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopIoTrafficsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopIoTrafficsRequest::ListTopIoTrafficsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    topIoNum_ = 0;
    topIoNumIsSet_ = false;
    sortCondition_ = "";
    sortConditionIsSet_ = false;
}

ListTopIoTrafficsRequest::~ListTopIoTrafficsRequest() = default;

void ListTopIoTrafficsRequest::validate()
{
}

web::json::value ListTopIoTrafficsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(topIoNumIsSet_) {
        val[utility::conversions::to_string_t("top_io_num")] = ModelBase::toJson(topIoNum_);
    }
    if(sortConditionIsSet_) {
        val[utility::conversions::to_string_t("sort_condition")] = ModelBase::toJson(sortCondition_);
    }

    return val;
}
bool ListTopIoTrafficsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_io_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_io_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopIoNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortCondition(refVal);
        }
    }
    return ok;
}


std::string ListTopIoTrafficsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTopIoTrafficsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTopIoTrafficsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTopIoTrafficsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTopIoTrafficsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTopIoTrafficsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTopIoTrafficsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTopIoTrafficsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTopIoTrafficsRequest::getNodeId() const
{
    return nodeId_;
}

void ListTopIoTrafficsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListTopIoTrafficsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListTopIoTrafficsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListTopIoTrafficsRequest::getComponentId() const
{
    return componentId_;
}

void ListTopIoTrafficsRequest::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ListTopIoTrafficsRequest::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ListTopIoTrafficsRequest::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

int32_t ListTopIoTrafficsRequest::getTopIoNum() const
{
    return topIoNum_;
}

void ListTopIoTrafficsRequest::setTopIoNum(int32_t value)
{
    topIoNum_ = value;
    topIoNumIsSet_ = true;
}

bool ListTopIoTrafficsRequest::topIoNumIsSet() const
{
    return topIoNumIsSet_;
}

void ListTopIoTrafficsRequest::unsettopIoNum()
{
    topIoNumIsSet_ = false;
}

std::string ListTopIoTrafficsRequest::getSortCondition() const
{
    return sortCondition_;
}

void ListTopIoTrafficsRequest::setSortCondition(const std::string& value)
{
    sortCondition_ = value;
    sortConditionIsSet_ = true;
}

bool ListTopIoTrafficsRequest::sortConditionIsSet() const
{
    return sortConditionIsSet_;
}

void ListTopIoTrafficsRequest::unsetsortCondition()
{
    sortConditionIsSet_ = false;
}

}
}
}
}
}


