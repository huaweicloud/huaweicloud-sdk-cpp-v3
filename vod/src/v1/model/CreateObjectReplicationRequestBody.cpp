

#include "huaweicloud/vod/v1/model/CreateObjectReplicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectReplicationRequestBody::CreateObjectReplicationRequestBody()
{
    srcInfoIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    destInfoIsSet_ = false;
    categoryIdIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

CreateObjectReplicationRequestBody::~CreateObjectReplicationRequestBody() = default;

void CreateObjectReplicationRequestBody::validate()
{
}

web::json::value CreateObjectReplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(srcInfoIsSet_) {
        val[utility::conversions::to_string_t("src_info")] = ModelBase::toJson(srcInfo_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(destInfoIsSet_) {
        val[utility::conversions::to_string_t("dest_info")] = ModelBase::toJson(destInfo_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool CreateObjectReplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("src_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    return ok;
}


ObsInfo CreateObjectReplicationRequestBody::getSrcInfo() const
{
    return srcInfo_;
}

void CreateObjectReplicationRequestBody::setSrcInfo(const ObsInfo& value)
{
    srcInfo_ = value;
    srcInfoIsSet_ = true;
}

bool CreateObjectReplicationRequestBody::srcInfoIsSet() const
{
    return srcInfoIsSet_;
}

void CreateObjectReplicationRequestBody::unsetsrcInfo()
{
    srcInfoIsSet_ = false;
}

std::string CreateObjectReplicationRequestBody::getFileType() const
{
    return fileType_;
}

void CreateObjectReplicationRequestBody::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool CreateObjectReplicationRequestBody::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void CreateObjectReplicationRequestBody::unsetfileType()
{
    fileTypeIsSet_ = false;
}

ObsInfo CreateObjectReplicationRequestBody::getDestInfo() const
{
    return destInfo_;
}

void CreateObjectReplicationRequestBody::setDestInfo(const ObsInfo& value)
{
    destInfo_ = value;
    destInfoIsSet_ = true;
}

bool CreateObjectReplicationRequestBody::destInfoIsSet() const
{
    return destInfoIsSet_;
}

void CreateObjectReplicationRequestBody::unsetdestInfo()
{
    destInfoIsSet_ = false;
}

Object CreateObjectReplicationRequestBody::getCategoryId() const
{
    return categoryId_;
}

void CreateObjectReplicationRequestBody::setCategoryId(const Object& value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool CreateObjectReplicationRequestBody::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void CreateObjectReplicationRequestBody::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string CreateObjectReplicationRequestBody::getCallbackUrl() const
{
    return callbackUrl_;
}

void CreateObjectReplicationRequestBody::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool CreateObjectReplicationRequestBody::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void CreateObjectReplicationRequestBody::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string CreateObjectReplicationRequestBody::getSessionContext() const
{
    return sessionContext_;
}

void CreateObjectReplicationRequestBody::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool CreateObjectReplicationRequestBody::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void CreateObjectReplicationRequestBody::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


