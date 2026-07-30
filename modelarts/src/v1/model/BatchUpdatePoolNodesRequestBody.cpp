

#include "huaweicloud/modelarts/v1/model/BatchUpdatePoolNodesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUpdatePoolNodesRequestBody::BatchUpdatePoolNodesRequestBody()
{
    nodeNamesIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    haRedundantEffect_ = "";
    haRedundantEffectIsSet_ = false;
    driverIsSet_ = false;
    tagsIsSet_ = false;
}

BatchUpdatePoolNodesRequestBody::~BatchUpdatePoolNodesRequestBody() = default;

void BatchUpdatePoolNodesRequestBody::validate()
{
}

web::json::value BatchUpdatePoolNodesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("nodeNames")] = ModelBase::toJson(nodeNames_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(haRedundantEffectIsSet_) {
        val[utility::conversions::to_string_t("haRedundantEffect")] = ModelBase::toJson(haRedundantEffect_);
    }
    if(driverIsSet_) {
        val[utility::conversions::to_string_t("driver")] = ModelBase::toJson(driver_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchUpdatePoolNodesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("haRedundantEffect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("haRedundantEffect"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaRedundantEffect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver"));
        if(!fieldValue.is_null())
        {
            NodeDriver refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriver(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdatePoolNodesRequestBody::getNodeNames()
{
    return nodeNames_;
}

void BatchUpdatePoolNodesRequestBody::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool BatchUpdatePoolNodesRequestBody::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void BatchUpdatePoolNodesRequestBody::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

std::string BatchUpdatePoolNodesRequestBody::getAction() const
{
    return action_;
}

void BatchUpdatePoolNodesRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchUpdatePoolNodesRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchUpdatePoolNodesRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string BatchUpdatePoolNodesRequestBody::getHaRedundantEffect() const
{
    return haRedundantEffect_;
}

void BatchUpdatePoolNodesRequestBody::setHaRedundantEffect(const std::string& value)
{
    haRedundantEffect_ = value;
    haRedundantEffectIsSet_ = true;
}

bool BatchUpdatePoolNodesRequestBody::haRedundantEffectIsSet() const
{
    return haRedundantEffectIsSet_;
}

void BatchUpdatePoolNodesRequestBody::unsethaRedundantEffect()
{
    haRedundantEffectIsSet_ = false;
}

NodeDriver BatchUpdatePoolNodesRequestBody::getDriver() const
{
    return driver_;
}

void BatchUpdatePoolNodesRequestBody::setDriver(const NodeDriver& value)
{
    driver_ = value;
    driverIsSet_ = true;
}

bool BatchUpdatePoolNodesRequestBody::driverIsSet() const
{
    return driverIsSet_;
}

void BatchUpdatePoolNodesRequestBody::unsetdriver()
{
    driverIsSet_ = false;
}

std::vector<NodeTag>& BatchUpdatePoolNodesRequestBody::getTags()
{
    return tags_;
}

void BatchUpdatePoolNodesRequestBody::setTags(const std::vector<NodeTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchUpdatePoolNodesRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchUpdatePoolNodesRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


