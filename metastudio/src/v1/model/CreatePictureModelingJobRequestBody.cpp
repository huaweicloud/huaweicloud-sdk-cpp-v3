

#include "huaweicloud/metastudio/v1/model/CreatePictureModelingJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePictureModelingJobRequestBody::CreatePictureModelingJobRequestBody()
{
    fileIsSet_ = false;
    styleId_ = "";
    styleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    notifyUrl_ = "";
    notifyUrlIsSet_ = false;
}

CreatePictureModelingJobRequestBody::~CreatePictureModelingJobRequestBody() = default;

void CreatePictureModelingJobRequestBody::validate()
{
}

web::json::value CreatePictureModelingJobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(notifyUrlIsSet_) {
        val[utility::conversions::to_string_t("notify_url")] = ModelBase::toJson(notifyUrl_);
    }

    return val;
}
bool CreatePictureModelingJobRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("notify_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyUrl(refVal);
        }
    }
    return ok;
}


HttpContent CreatePictureModelingJobRequestBody::getFile() const
{
    return file_;
}

void CreatePictureModelingJobRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool CreatePictureModelingJobRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void CreatePictureModelingJobRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

std::string CreatePictureModelingJobRequestBody::getStyleId() const
{
    return styleId_;
}

void CreatePictureModelingJobRequestBody::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool CreatePictureModelingJobRequestBody::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void CreatePictureModelingJobRequestBody::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string CreatePictureModelingJobRequestBody::getName() const
{
    return name_;
}

void CreatePictureModelingJobRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePictureModelingJobRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePictureModelingJobRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePictureModelingJobRequestBody::getNotifyUrl() const
{
    return notifyUrl_;
}

void CreatePictureModelingJobRequestBody::setNotifyUrl(const std::string& value)
{
    notifyUrl_ = value;
    notifyUrlIsSet_ = true;
}

bool CreatePictureModelingJobRequestBody::notifyUrlIsSet() const
{
    return notifyUrlIsSet_;
}

void CreatePictureModelingJobRequestBody::unsetnotifyUrl()
{
    notifyUrlIsSet_ = false;
}

}
}
}
}
}


