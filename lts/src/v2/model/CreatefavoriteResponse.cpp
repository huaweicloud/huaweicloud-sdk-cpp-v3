

#include "huaweicloud/lts/v2/model/CreatefavoriteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreatefavoriteResponse::CreatefavoriteResponse()
{
    createTime_ = 0L;
    createTimeIsSet_ = false;
    epsId_ = "";
    epsIdIsSet_ = false;
    favoriteResourceId_ = "";
    favoriteResourceIdIsSet_ = false;
    favoriteResourceType_ = "";
    favoriteResourceTypeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

CreatefavoriteResponse::~CreatefavoriteResponse() = default;

void CreatefavoriteResponse::validate()
{
}

web::json::value CreatefavoriteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(favoriteResourceIdIsSet_) {
        val[utility::conversions::to_string_t("favorite_resource_id")] = ModelBase::toJson(favoriteResourceId_);
    }
    if(favoriteResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("favorite_resource_type")] = ModelBase::toJson(favoriteResourceType_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}

bool CreatefavoriteResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorite_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favorite_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavoriteResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorite_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favorite_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavoriteResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
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
    return ok;
}


int64_t CreatefavoriteResponse::getCreateTime() const
{
    return createTime_;
}

void CreatefavoriteResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreatefavoriteResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreatefavoriteResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreatefavoriteResponse::getEpsId() const
{
    return epsId_;
}

void CreatefavoriteResponse::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool CreatefavoriteResponse::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void CreatefavoriteResponse::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string CreatefavoriteResponse::getFavoriteResourceId() const
{
    return favoriteResourceId_;
}

void CreatefavoriteResponse::setFavoriteResourceId(const std::string& value)
{
    favoriteResourceId_ = value;
    favoriteResourceIdIsSet_ = true;
}

bool CreatefavoriteResponse::favoriteResourceIdIsSet() const
{
    return favoriteResourceIdIsSet_;
}

void CreatefavoriteResponse::unsetfavoriteResourceId()
{
    favoriteResourceIdIsSet_ = false;
}

std::string CreatefavoriteResponse::getFavoriteResourceType() const
{
    return favoriteResourceType_;
}

void CreatefavoriteResponse::setFavoriteResourceType(const std::string& value)
{
    favoriteResourceType_ = value;
    favoriteResourceTypeIsSet_ = true;
}

bool CreatefavoriteResponse::favoriteResourceTypeIsSet() const
{
    return favoriteResourceTypeIsSet_;
}

void CreatefavoriteResponse::unsetfavoriteResourceType()
{
    favoriteResourceTypeIsSet_ = false;
}

std::string CreatefavoriteResponse::getLogGroupId() const
{
    return logGroupId_;
}

void CreatefavoriteResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreatefavoriteResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreatefavoriteResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreatefavoriteResponse::getLogGroupName() const
{
    return logGroupName_;
}

void CreatefavoriteResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool CreatefavoriteResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void CreatefavoriteResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string CreatefavoriteResponse::getLogStreamId() const
{
    return logStreamId_;
}

void CreatefavoriteResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreatefavoriteResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreatefavoriteResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string CreatefavoriteResponse::getLogStreamName() const
{
    return logStreamName_;
}

void CreatefavoriteResponse::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool CreatefavoriteResponse::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void CreatefavoriteResponse::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string CreatefavoriteResponse::getProjectId() const
{
    return projectId_;
}

void CreatefavoriteResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatefavoriteResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatefavoriteResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


