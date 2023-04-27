

#include "huaweicloud/lts/v2/model/CreatefavoriteReqbody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreatefavoriteReqbody::CreatefavoriteReqbody()
{
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
}

CreatefavoriteReqbody::~CreatefavoriteReqbody() = default;

void CreatefavoriteReqbody::validate()
{
}

web::json::value CreatefavoriteReqbody::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}

bool CreatefavoriteReqbody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string CreatefavoriteReqbody::getEpsId() const
{
    return epsId_;
}

void CreatefavoriteReqbody::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool CreatefavoriteReqbody::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void CreatefavoriteReqbody::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string CreatefavoriteReqbody::getFavoriteResourceId() const
{
    return favoriteResourceId_;
}

void CreatefavoriteReqbody::setFavoriteResourceId(const std::string& value)
{
    favoriteResourceId_ = value;
    favoriteResourceIdIsSet_ = true;
}

bool CreatefavoriteReqbody::favoriteResourceIdIsSet() const
{
    return favoriteResourceIdIsSet_;
}

void CreatefavoriteReqbody::unsetfavoriteResourceId()
{
    favoriteResourceIdIsSet_ = false;
}

std::string CreatefavoriteReqbody::getFavoriteResourceType() const
{
    return favoriteResourceType_;
}

void CreatefavoriteReqbody::setFavoriteResourceType(const std::string& value)
{
    favoriteResourceType_ = value;
    favoriteResourceTypeIsSet_ = true;
}

bool CreatefavoriteReqbody::favoriteResourceTypeIsSet() const
{
    return favoriteResourceTypeIsSet_;
}

void CreatefavoriteReqbody::unsetfavoriteResourceType()
{
    favoriteResourceTypeIsSet_ = false;
}

std::string CreatefavoriteReqbody::getLogGroupId() const
{
    return logGroupId_;
}

void CreatefavoriteReqbody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreatefavoriteReqbody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreatefavoriteReqbody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreatefavoriteReqbody::getLogGroupName() const
{
    return logGroupName_;
}

void CreatefavoriteReqbody::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool CreatefavoriteReqbody::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void CreatefavoriteReqbody::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string CreatefavoriteReqbody::getLogStreamId() const
{
    return logStreamId_;
}

void CreatefavoriteReqbody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreatefavoriteReqbody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreatefavoriteReqbody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string CreatefavoriteReqbody::getLogStreamName() const
{
    return logStreamName_;
}

void CreatefavoriteReqbody::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool CreatefavoriteReqbody::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void CreatefavoriteReqbody::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


