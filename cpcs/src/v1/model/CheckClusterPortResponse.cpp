

#include "huaweicloud/cpcs/v1/model/CheckClusterPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CheckClusterPortResponse::CheckClusterPortResponse()
{
    id_ = "";
    idIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    elbId_ = "";
    elbIdIsSet_ = false;
    elbIp_ = "";
    elbIpIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    listenerPort_ = 0;
    listenerPortIsSet_ = false;
    listenerId_ = "";
    listenerIdIsSet_ = false;
    serverGroupPort_ = 0;
    serverGroupPortIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    validateTime_ = "";
    validateTimeIsSet_ = false;
    wrong_ = false;
    wrongIsSet_ = false;
    wrongMsg_ = "";
    wrongMsgIsSet_ = false;
}

CheckClusterPortResponse::~CheckClusterPortResponse() = default;

void CheckClusterPortResponse::validate()
{
}

web::json::value CheckClusterPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(elbIdIsSet_) {
        val[utility::conversions::to_string_t("elb_id")] = ModelBase::toJson(elbId_);
    }
    if(elbIpIsSet_) {
        val[utility::conversions::to_string_t("elb_ip")] = ModelBase::toJson(elbIp_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(listenerPortIsSet_) {
        val[utility::conversions::to_string_t("listener_port")] = ModelBase::toJson(listenerPort_);
    }
    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }
    if(serverGroupPortIsSet_) {
        val[utility::conversions::to_string_t("server_group_port")] = ModelBase::toJson(serverGroupPort_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(validateTimeIsSet_) {
        val[utility::conversions::to_string_t("validate_time")] = ModelBase::toJson(validateTime_);
    }
    if(wrongIsSet_) {
        val[utility::conversions::to_string_t("wrong")] = ModelBase::toJson(wrong_);
    }
    if(wrongMsgIsSet_) {
        val[utility::conversions::to_string_t("wrong_msg")] = ModelBase::toJson(wrongMsg_);
    }

    return val;
}
bool CheckClusterPortResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elb_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elb_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listener_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenerPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listener_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("validate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wrong"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wrong"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWrong(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wrong_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wrong_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWrongMsg(refVal);
        }
    }
    return ok;
}


std::string CheckClusterPortResponse::getId() const
{
    return id_;
}

void CheckClusterPortResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckClusterPortResponse::idIsSet() const
{
    return idIsSet_;
}

void CheckClusterPortResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CheckClusterPortResponse::getClusterId() const
{
    return clusterId_;
}

void CheckClusterPortResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CheckClusterPortResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CheckClusterPortResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CheckClusterPortResponse::getElbId() const
{
    return elbId_;
}

void CheckClusterPortResponse::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool CheckClusterPortResponse::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void CheckClusterPortResponse::unsetelbId()
{
    elbIdIsSet_ = false;
}

std::string CheckClusterPortResponse::getElbIp() const
{
    return elbIp_;
}

void CheckClusterPortResponse::setElbIp(const std::string& value)
{
    elbIp_ = value;
    elbIpIsSet_ = true;
}

bool CheckClusterPortResponse::elbIpIsSet() const
{
    return elbIpIsSet_;
}

void CheckClusterPortResponse::unsetelbIp()
{
    elbIpIsSet_ = false;
}

std::string CheckClusterPortResponse::getMode() const
{
    return mode_;
}

void CheckClusterPortResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CheckClusterPortResponse::modeIsSet() const
{
    return modeIsSet_;
}

void CheckClusterPortResponse::unsetmode()
{
    modeIsSet_ = false;
}

int32_t CheckClusterPortResponse::getListenerPort() const
{
    return listenerPort_;
}

void CheckClusterPortResponse::setListenerPort(int32_t value)
{
    listenerPort_ = value;
    listenerPortIsSet_ = true;
}

bool CheckClusterPortResponse::listenerPortIsSet() const
{
    return listenerPortIsSet_;
}

void CheckClusterPortResponse::unsetlistenerPort()
{
    listenerPortIsSet_ = false;
}

std::string CheckClusterPortResponse::getListenerId() const
{
    return listenerId_;
}

void CheckClusterPortResponse::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool CheckClusterPortResponse::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void CheckClusterPortResponse::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

int32_t CheckClusterPortResponse::getServerGroupPort() const
{
    return serverGroupPort_;
}

void CheckClusterPortResponse::setServerGroupPort(int32_t value)
{
    serverGroupPort_ = value;
    serverGroupPortIsSet_ = true;
}

bool CheckClusterPortResponse::serverGroupPortIsSet() const
{
    return serverGroupPortIsSet_;
}

void CheckClusterPortResponse::unsetserverGroupPort()
{
    serverGroupPortIsSet_ = false;
}

std::string CheckClusterPortResponse::getServerGroupId() const
{
    return serverGroupId_;
}

void CheckClusterPortResponse::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool CheckClusterPortResponse::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void CheckClusterPortResponse::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string CheckClusterPortResponse::getProjectId() const
{
    return projectId_;
}

void CheckClusterPortResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckClusterPortResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckClusterPortResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckClusterPortResponse::getValidateTime() const
{
    return validateTime_;
}

void CheckClusterPortResponse::setValidateTime(const std::string& value)
{
    validateTime_ = value;
    validateTimeIsSet_ = true;
}

bool CheckClusterPortResponse::validateTimeIsSet() const
{
    return validateTimeIsSet_;
}

void CheckClusterPortResponse::unsetvalidateTime()
{
    validateTimeIsSet_ = false;
}

bool CheckClusterPortResponse::isWrong() const
{
    return wrong_;
}

void CheckClusterPortResponse::setWrong(bool value)
{
    wrong_ = value;
    wrongIsSet_ = true;
}

bool CheckClusterPortResponse::wrongIsSet() const
{
    return wrongIsSet_;
}

void CheckClusterPortResponse::unsetwrong()
{
    wrongIsSet_ = false;
}

std::string CheckClusterPortResponse::getWrongMsg() const
{
    return wrongMsg_;
}

void CheckClusterPortResponse::setWrongMsg(const std::string& value)
{
    wrongMsg_ = value;
    wrongMsgIsSet_ = true;
}

bool CheckClusterPortResponse::wrongMsgIsSet() const
{
    return wrongMsgIsSet_;
}

void CheckClusterPortResponse::unsetwrongMsg()
{
    wrongMsgIsSet_ = false;
}

}
}
}
}
}


