

#include "huaweicloud/cpcs/v1/model/ElbClusterPortReponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ElbClusterPortReponseBody::ElbClusterPortReponseBody()
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

ElbClusterPortReponseBody::~ElbClusterPortReponseBody() = default;

void ElbClusterPortReponseBody::validate()
{
}

web::json::value ElbClusterPortReponseBody::toJson() const
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
bool ElbClusterPortReponseBody::fromJson(const web::json::value& val)
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


std::string ElbClusterPortReponseBody::getId() const
{
    return id_;
}

void ElbClusterPortReponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ElbClusterPortReponseBody::idIsSet() const
{
    return idIsSet_;
}

void ElbClusterPortReponseBody::unsetid()
{
    idIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getClusterId() const
{
    return clusterId_;
}

void ElbClusterPortReponseBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ElbClusterPortReponseBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ElbClusterPortReponseBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getElbId() const
{
    return elbId_;
}

void ElbClusterPortReponseBody::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool ElbClusterPortReponseBody::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void ElbClusterPortReponseBody::unsetelbId()
{
    elbIdIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getElbIp() const
{
    return elbIp_;
}

void ElbClusterPortReponseBody::setElbIp(const std::string& value)
{
    elbIp_ = value;
    elbIpIsSet_ = true;
}

bool ElbClusterPortReponseBody::elbIpIsSet() const
{
    return elbIpIsSet_;
}

void ElbClusterPortReponseBody::unsetelbIp()
{
    elbIpIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getMode() const
{
    return mode_;
}

void ElbClusterPortReponseBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ElbClusterPortReponseBody::modeIsSet() const
{
    return modeIsSet_;
}

void ElbClusterPortReponseBody::unsetmode()
{
    modeIsSet_ = false;
}

int32_t ElbClusterPortReponseBody::getListenerPort() const
{
    return listenerPort_;
}

void ElbClusterPortReponseBody::setListenerPort(int32_t value)
{
    listenerPort_ = value;
    listenerPortIsSet_ = true;
}

bool ElbClusterPortReponseBody::listenerPortIsSet() const
{
    return listenerPortIsSet_;
}

void ElbClusterPortReponseBody::unsetlistenerPort()
{
    listenerPortIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getListenerId() const
{
    return listenerId_;
}

void ElbClusterPortReponseBody::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool ElbClusterPortReponseBody::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void ElbClusterPortReponseBody::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

int32_t ElbClusterPortReponseBody::getServerGroupPort() const
{
    return serverGroupPort_;
}

void ElbClusterPortReponseBody::setServerGroupPort(int32_t value)
{
    serverGroupPort_ = value;
    serverGroupPortIsSet_ = true;
}

bool ElbClusterPortReponseBody::serverGroupPortIsSet() const
{
    return serverGroupPortIsSet_;
}

void ElbClusterPortReponseBody::unsetserverGroupPort()
{
    serverGroupPortIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getServerGroupId() const
{
    return serverGroupId_;
}

void ElbClusterPortReponseBody::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ElbClusterPortReponseBody::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ElbClusterPortReponseBody::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getProjectId() const
{
    return projectId_;
}

void ElbClusterPortReponseBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ElbClusterPortReponseBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ElbClusterPortReponseBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getValidateTime() const
{
    return validateTime_;
}

void ElbClusterPortReponseBody::setValidateTime(const std::string& value)
{
    validateTime_ = value;
    validateTimeIsSet_ = true;
}

bool ElbClusterPortReponseBody::validateTimeIsSet() const
{
    return validateTimeIsSet_;
}

void ElbClusterPortReponseBody::unsetvalidateTime()
{
    validateTimeIsSet_ = false;
}

bool ElbClusterPortReponseBody::isWrong() const
{
    return wrong_;
}

void ElbClusterPortReponseBody::setWrong(bool value)
{
    wrong_ = value;
    wrongIsSet_ = true;
}

bool ElbClusterPortReponseBody::wrongIsSet() const
{
    return wrongIsSet_;
}

void ElbClusterPortReponseBody::unsetwrong()
{
    wrongIsSet_ = false;
}

std::string ElbClusterPortReponseBody::getWrongMsg() const
{
    return wrongMsg_;
}

void ElbClusterPortReponseBody::setWrongMsg(const std::string& value)
{
    wrongMsg_ = value;
    wrongMsgIsSet_ = true;
}

bool ElbClusterPortReponseBody::wrongMsgIsSet() const
{
    return wrongMsgIsSet_;
}

void ElbClusterPortReponseBody::unsetwrongMsg()
{
    wrongMsgIsSet_ = false;
}

}
}
}
}
}


