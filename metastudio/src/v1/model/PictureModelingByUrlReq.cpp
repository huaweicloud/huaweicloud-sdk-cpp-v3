

#include "huaweicloud/metastudio/v1/model/PictureModelingByUrlReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PictureModelingByUrlReq::PictureModelingByUrlReq()
{
    pictureUrl_ = "";
    pictureUrlIsSet_ = false;
    styleId_ = "";
    styleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    notifyUrl_ = "";
    notifyUrlIsSet_ = false;
}

PictureModelingByUrlReq::~PictureModelingByUrlReq() = default;

void PictureModelingByUrlReq::validate()
{
}

web::json::value PictureModelingByUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pictureUrlIsSet_) {
        val[utility::conversions::to_string_t("picture_url")] = ModelBase::toJson(pictureUrl_);
    }
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
bool PictureModelingByUrlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("picture_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picture_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPictureUrl(refVal);
        }
    }
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


std::string PictureModelingByUrlReq::getPictureUrl() const
{
    return pictureUrl_;
}

void PictureModelingByUrlReq::setPictureUrl(const std::string& value)
{
    pictureUrl_ = value;
    pictureUrlIsSet_ = true;
}

bool PictureModelingByUrlReq::pictureUrlIsSet() const
{
    return pictureUrlIsSet_;
}

void PictureModelingByUrlReq::unsetpictureUrl()
{
    pictureUrlIsSet_ = false;
}

std::string PictureModelingByUrlReq::getStyleId() const
{
    return styleId_;
}

void PictureModelingByUrlReq::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool PictureModelingByUrlReq::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void PictureModelingByUrlReq::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string PictureModelingByUrlReq::getName() const
{
    return name_;
}

void PictureModelingByUrlReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PictureModelingByUrlReq::nameIsSet() const
{
    return nameIsSet_;
}

void PictureModelingByUrlReq::unsetname()
{
    nameIsSet_ = false;
}

std::string PictureModelingByUrlReq::getNotifyUrl() const
{
    return notifyUrl_;
}

void PictureModelingByUrlReq::setNotifyUrl(const std::string& value)
{
    notifyUrl_ = value;
    notifyUrlIsSet_ = true;
}

bool PictureModelingByUrlReq::notifyUrlIsSet() const
{
    return notifyUrlIsSet_;
}

void PictureModelingByUrlReq::unsetnotifyUrl()
{
    notifyUrlIsSet_ = false;
}

}
}
}
}
}


