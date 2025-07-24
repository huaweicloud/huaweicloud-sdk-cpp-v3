

#include "huaweicloud/cloudtest/v1/model/StepImageVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




StepImageVo::StepImageVo()
{
    imgId_ = "";
    imgIdIsSet_ = false;
    imgUrl_ = "";
    imgUrlIsSet_ = false;
}

StepImageVo::~StepImageVo() = default;

void StepImageVo::validate()
{
}

web::json::value StepImageVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imgIdIsSet_) {
        val[utility::conversions::to_string_t("img_id")] = ModelBase::toJson(imgId_);
    }
    if(imgUrlIsSet_) {
        val[utility::conversions::to_string_t("img_url")] = ModelBase::toJson(imgUrl_);
    }

    return val;
}
bool StepImageVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("img_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("img_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImgId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("img_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("img_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImgUrl(refVal);
        }
    }
    return ok;
}


std::string StepImageVo::getImgId() const
{
    return imgId_;
}

void StepImageVo::setImgId(const std::string& value)
{
    imgId_ = value;
    imgIdIsSet_ = true;
}

bool StepImageVo::imgIdIsSet() const
{
    return imgIdIsSet_;
}

void StepImageVo::unsetimgId()
{
    imgIdIsSet_ = false;
}

std::string StepImageVo::getImgUrl() const
{
    return imgUrl_;
}

void StepImageVo::setImgUrl(const std::string& value)
{
    imgUrl_ = value;
    imgUrlIsSet_ = true;
}

bool StepImageVo::imgUrlIsSet() const
{
    return imgUrlIsSet_;
}

void StepImageVo::unsetimgUrl()
{
    imgUrlIsSet_ = false;
}

}
}
}
}
}


