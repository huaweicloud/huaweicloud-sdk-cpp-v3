

#include "huaweicloud/cpcs/v1/model/AddClusterPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AddClusterPortResponse::AddClusterPortResponse()
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

AddClusterPortResponse::~AddClusterPortResponse() = default;

void AddClusterPortResponse::validate()
{
}

web::json::value AddClusterPortResponse::toJson() const
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
bool AddClusterPortResponse::fromJson(const web::json::value& val)
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


std::string AddClusterPortResponse::getId() const
{
    return id_;
}

void AddClusterPortResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddClusterPortResponse::idIsSet() const
{
    return idIsSet_;
}

void AddClusterPortResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AddClusterPortResponse::getClusterId() const
{
    return clusterId_;
}

void AddClusterPortResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AddClusterPortResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AddClusterPortResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string AddClusterPortResponse::getElbId() const
{
    return elbId_;
}

void AddClusterPortResponse::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool AddClusterPortResponse::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void AddClusterPortResponse::unsetelbId()
{
    elbIdIsSet_ = false;
}

std::string AddClusterPortResponse::getElbIp() const
{
    return elbIp_;
}

void AddClusterPortResponse::setElbIp(const std::string& value)
{
    elbIp_ = value;
    elbIpIsSet_ = true;
}

bool AddClusterPortResponse::elbIpIsSet() const
{
    return elbIpIsSet_;
}

void AddClusterPortResponse::unsetelbIp()
{
    elbIpIsSet_ = false;
}

std::string AddClusterPortResponse::getMode() const
{
    return mode_;
}

void AddClusterPortResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AddClusterPortResponse::modeIsSet() const
{
    return modeIsSet_;
}

void AddClusterPortResponse::unsetmode()
{
    modeIsSet_ = false;
}

int32_t AddClusterPortResponse::getListenerPort() const
{
    return listenerPort_;
}

void AddClusterPortResponse::setListenerPort(int32_t value)
{
    listenerPort_ = value;
    listenerPortIsSet_ = true;
}

bool AddClusterPortResponse::listenerPortIsSet() const
{
    return listenerPortIsSet_;
}

void AddClusterPortResponse::unsetlistenerPort()
{
    listenerPortIsSet_ = false;
}

std::string AddClusterPortResponse::getListenerId() const
{
    return listenerId_;
}

void AddClusterPortResponse::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool AddClusterPortResponse::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void AddClusterPortResponse::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

int32_t AddClusterPortResponse::getServerGroupPort() const
{
    return serverGroupPort_;
}

void AddClusterPortResponse::setServerGroupPort(int32_t value)
{
    serverGroupPort_ = value;
    serverGroupPortIsSet_ = true;
}

bool AddClusterPortResponse::serverGroupPortIsSet() const
{
    return serverGroupPortIsSet_;
}

void AddClusterPortResponse::unsetserverGroupPort()
{
    serverGroupPortIsSet_ = false;
}

std::string AddClusterPortResponse::getServerGroupId() const
{
    return serverGroupId_;
}

void AddClusterPortResponse::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool AddClusterPortResponse::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void AddClusterPortResponse::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string AddClusterPortResponse::getProjectId() const
{
    return projectId_;
}

void AddClusterPortResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddClusterPortResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddClusterPortResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AddClusterPortResponse::getValidateTime() const
{
    return validateTime_;
}

void AddClusterPortResponse::setValidateTime(const std::string& value)
{
    validateTime_ = value;
    validateTimeIsSet_ = true;
}

bool AddClusterPortResponse::validateTimeIsSet() const
{
    return validateTimeIsSet_;
}

void AddClusterPortResponse::unsetvalidateTime()
{
    validateTimeIsSet_ = false;
}

bool AddClusterPortResponse::isWrong() const
{
    return wrong_;
}

void AddClusterPortResponse::setWrong(bool value)
{
    wrong_ = value;
    wrongIsSet_ = true;
}

bool AddClusterPortResponse::wrongIsSet() const
{
    return wrongIsSet_;
}

void AddClusterPortResponse::unsetwrong()
{
    wrongIsSet_ = false;
}

std::string AddClusterPortResponse::getWrongMsg() const
{
    return wrongMsg_;
}

void AddClusterPortResponse::setWrongMsg(const std::string& value)
{
    wrongMsg_ = value;
    wrongMsgIsSet_ = true;
}

bool AddClusterPortResponse::wrongMsgIsSet() const
{
    return wrongMsgIsSet_;
}

void AddClusterPortResponse::unsetwrongMsg()
{
    wrongMsgIsSet_ = false;
}

}
}
}
}
}


