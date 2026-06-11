

#include "huaweicloud/rds/v3/model/CreateDrsTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDrsTaskReq::CreateDrsTaskReq()
{
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    targetUserName_ = "";
    targetUserNameIsSet_ = false;
    targetUserPassword_ = "";
    targetUserPasswordIsSet_ = false;
    sourceUserName_ = "";
    sourceUserNameIsSet_ = false;
    sourceUserPassword_ = "";
    sourceUserPasswordIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    drsNodeType_ = "";
    drsNodeTypeIsSet_ = false;
    databaseListIsSet_ = false;
}

CreateDrsTaskReq::~CreateDrsTaskReq() = default;

void CreateDrsTaskReq::validate()
{
}

web::json::value CreateDrsTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(targetUserNameIsSet_) {
        val[utility::conversions::to_string_t("target_user_name")] = ModelBase::toJson(targetUserName_);
    }
    if(targetUserPasswordIsSet_) {
        val[utility::conversions::to_string_t("target_user_password")] = ModelBase::toJson(targetUserPassword_);
    }
    if(sourceUserNameIsSet_) {
        val[utility::conversions::to_string_t("source_user_name")] = ModelBase::toJson(sourceUserName_);
    }
    if(sourceUserPasswordIsSet_) {
        val[utility::conversions::to_string_t("source_user_password")] = ModelBase::toJson(sourceUserPassword_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(drsNodeTypeIsSet_) {
        val[utility::conversions::to_string_t("drs_node_type")] = ModelBase::toJson(drsNodeType_);
    }
    if(databaseListIsSet_) {
        val[utility::conversions::to_string_t("database_list")] = ModelBase::toJson(databaseList_);
    }

    return val;
}
bool CreateDrsTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_user_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_user_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetUserPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_user_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_user_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUserPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drs_node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drs_node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrsNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseList(refVal);
        }
    }
    return ok;
}


std::string CreateDrsTaskReq::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void CreateDrsTaskReq::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool CreateDrsTaskReq::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void CreateDrsTaskReq::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string CreateDrsTaskReq::getTargetUserName() const
{
    return targetUserName_;
}

void CreateDrsTaskReq::setTargetUserName(const std::string& value)
{
    targetUserName_ = value;
    targetUserNameIsSet_ = true;
}

bool CreateDrsTaskReq::targetUserNameIsSet() const
{
    return targetUserNameIsSet_;
}

void CreateDrsTaskReq::unsettargetUserName()
{
    targetUserNameIsSet_ = false;
}

std::string CreateDrsTaskReq::getTargetUserPassword() const
{
    return targetUserPassword_;
}

void CreateDrsTaskReq::setTargetUserPassword(const std::string& value)
{
    targetUserPassword_ = value;
    targetUserPasswordIsSet_ = true;
}

bool CreateDrsTaskReq::targetUserPasswordIsSet() const
{
    return targetUserPasswordIsSet_;
}

void CreateDrsTaskReq::unsettargetUserPassword()
{
    targetUserPasswordIsSet_ = false;
}

std::string CreateDrsTaskReq::getSourceUserName() const
{
    return sourceUserName_;
}

void CreateDrsTaskReq::setSourceUserName(const std::string& value)
{
    sourceUserName_ = value;
    sourceUserNameIsSet_ = true;
}

bool CreateDrsTaskReq::sourceUserNameIsSet() const
{
    return sourceUserNameIsSet_;
}

void CreateDrsTaskReq::unsetsourceUserName()
{
    sourceUserNameIsSet_ = false;
}

std::string CreateDrsTaskReq::getSourceUserPassword() const
{
    return sourceUserPassword_;
}

void CreateDrsTaskReq::setSourceUserPassword(const std::string& value)
{
    sourceUserPassword_ = value;
    sourceUserPasswordIsSet_ = true;
}

bool CreateDrsTaskReq::sourceUserPasswordIsSet() const
{
    return sourceUserPasswordIsSet_;
}

void CreateDrsTaskReq::unsetsourceUserPassword()
{
    sourceUserPasswordIsSet_ = false;
}

std::string CreateDrsTaskReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateDrsTaskReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateDrsTaskReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateDrsTaskReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateDrsTaskReq::getDrsNodeType() const
{
    return drsNodeType_;
}

void CreateDrsTaskReq::setDrsNodeType(const std::string& value)
{
    drsNodeType_ = value;
    drsNodeTypeIsSet_ = true;
}

bool CreateDrsTaskReq::drsNodeTypeIsSet() const
{
    return drsNodeTypeIsSet_;
}

void CreateDrsTaskReq::unsetdrsNodeType()
{
    drsNodeTypeIsSet_ = false;
}

std::vector<std::string>& CreateDrsTaskReq::getDatabaseList()
{
    return databaseList_;
}

void CreateDrsTaskReq::setDatabaseList(const std::vector<std::string>& value)
{
    databaseList_ = value;
    databaseListIsSet_ = true;
}

bool CreateDrsTaskReq::databaseListIsSet() const
{
    return databaseListIsSet_;
}

void CreateDrsTaskReq::unsetdatabaseList()
{
    databaseListIsSet_ = false;
}

}
}
}
}
}


