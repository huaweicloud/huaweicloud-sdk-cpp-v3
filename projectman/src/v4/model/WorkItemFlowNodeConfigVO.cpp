

#include "huaweicloud/projectman/v4/model/WorkItemFlowNodeConfigVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowNodeConfigVO::WorkItemFlowNodeConfigVO()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    end_ = false;
    endIsSet_ = false;
    last_ = false;
    lastIsSet_ = false;
    start_ = false;
    startIsSet_ = false;
    enableSuspend_ = false;
    enableSuspendIsSet_ = false;
    extraConfigIsSet_ = false;
    staticRulesIsSet_ = false;
    staticActionsIsSet_ = false;
    anyStatus_ = false;
    anyStatusIsSet_ = false;
    submitCanOperate_ = false;
    submitCanOperateIsSet_ = false;
}

WorkItemFlowNodeConfigVO::~WorkItemFlowNodeConfigVO() = default;

void WorkItemFlowNodeConfigVO::validate()
{
}

web::json::value WorkItemFlowNodeConfigVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }
    if(lastIsSet_) {
        val[utility::conversions::to_string_t("last")] = ModelBase::toJson(last_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(enableSuspendIsSet_) {
        val[utility::conversions::to_string_t("enable_suspend")] = ModelBase::toJson(enableSuspend_);
    }
    if(extraConfigIsSet_) {
        val[utility::conversions::to_string_t("extra_config")] = ModelBase::toJson(extraConfig_);
    }
    if(staticRulesIsSet_) {
        val[utility::conversions::to_string_t("static_rules")] = ModelBase::toJson(staticRules_);
    }
    if(staticActionsIsSet_) {
        val[utility::conversions::to_string_t("static_actions")] = ModelBase::toJson(staticActions_);
    }
    if(anyStatusIsSet_) {
        val[utility::conversions::to_string_t("any_status")] = ModelBase::toJson(anyStatus_);
    }
    if(submitCanOperateIsSet_) {
        val[utility::conversions::to_string_t("submit_can_operate")] = ModelBase::toJson(submitCanOperate_);
    }

    return val;
}
bool WorkItemFlowNodeConfigVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLast(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_suspend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_suspend"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSuspend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_config"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("static_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("static_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStaticRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("static_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("static_actions"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStaticActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("any_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("any_status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnyStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submit_can_operate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submit_can_operate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmitCanOperate(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowNodeConfigVO::getCode() const
{
    return code_;
}

void WorkItemFlowNodeConfigVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::codeIsSet() const
{
    return codeIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string WorkItemFlowNodeConfigVO::getName() const
{
    return name_;
}

void WorkItemFlowNodeConfigVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::nameIsSet() const
{
    return nameIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkItemFlowNodeConfigVO::getDescription() const
{
    return description_;
}

void WorkItemFlowNodeConfigVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool WorkItemFlowNodeConfigVO::isEnd() const
{
    return end_;
}

void WorkItemFlowNodeConfigVO::setEnd(bool value)
{
    end_ = value;
    endIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::endIsSet() const
{
    return endIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetend()
{
    endIsSet_ = false;
}

bool WorkItemFlowNodeConfigVO::isLast() const
{
    return last_;
}

void WorkItemFlowNodeConfigVO::setLast(bool value)
{
    last_ = value;
    lastIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::lastIsSet() const
{
    return lastIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetlast()
{
    lastIsSet_ = false;
}

bool WorkItemFlowNodeConfigVO::isStart() const
{
    return start_;
}

void WorkItemFlowNodeConfigVO::setStart(bool value)
{
    start_ = value;
    startIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::startIsSet() const
{
    return startIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetstart()
{
    startIsSet_ = false;
}

bool WorkItemFlowNodeConfigVO::isEnableSuspend() const
{
    return enableSuspend_;
}

void WorkItemFlowNodeConfigVO::setEnableSuspend(bool value)
{
    enableSuspend_ = value;
    enableSuspendIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::enableSuspendIsSet() const
{
    return enableSuspendIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetenableSuspend()
{
    enableSuspendIsSet_ = false;
}

std::map<std::string, Object>& WorkItemFlowNodeConfigVO::getExtraConfig()
{
    return extraConfig_;
}

void WorkItemFlowNodeConfigVO::setExtraConfig(const std::map<std::string, Object>& value)
{
    extraConfig_ = value;
    extraConfigIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::extraConfigIsSet() const
{
    return extraConfigIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetextraConfig()
{
    extraConfigIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& WorkItemFlowNodeConfigVO::getStaticRules()
{
    return staticRules_;
}

void WorkItemFlowNodeConfigVO::setStaticRules(const std::vector<std::map<std::string, Object>>& value)
{
    staticRules_ = value;
    staticRulesIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::staticRulesIsSet() const
{
    return staticRulesIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetstaticRules()
{
    staticRulesIsSet_ = false;
}

std::map<std::string, Object>& WorkItemFlowNodeConfigVO::getStaticActions()
{
    return staticActions_;
}

void WorkItemFlowNodeConfigVO::setStaticActions(const std::map<std::string, Object>& value)
{
    staticActions_ = value;
    staticActionsIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::staticActionsIsSet() const
{
    return staticActionsIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetstaticActions()
{
    staticActionsIsSet_ = false;
}

bool WorkItemFlowNodeConfigVO::isAnyStatus() const
{
    return anyStatus_;
}

void WorkItemFlowNodeConfigVO::setAnyStatus(bool value)
{
    anyStatus_ = value;
    anyStatusIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::anyStatusIsSet() const
{
    return anyStatusIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetanyStatus()
{
    anyStatusIsSet_ = false;
}

bool WorkItemFlowNodeConfigVO::isSubmitCanOperate() const
{
    return submitCanOperate_;
}

void WorkItemFlowNodeConfigVO::setSubmitCanOperate(bool value)
{
    submitCanOperate_ = value;
    submitCanOperateIsSet_ = true;
}

bool WorkItemFlowNodeConfigVO::submitCanOperateIsSet() const
{
    return submitCanOperateIsSet_;
}

void WorkItemFlowNodeConfigVO::unsetsubmitCanOperate()
{
    submitCanOperateIsSet_ = false;
}

}
}
}
}
}


