

#include "huaweicloud/projectman/v4/model/UploadIssueImgResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadIssueImgResponse::UploadIssueImgResponse()
{
    imgId_ = "";
    imgIdIsSet_ = false;
    imgUrl_ = "";
    imgUrlIsSet_ = false;
}

UploadIssueImgResponse::~UploadIssueImgResponse() = default;

void UploadIssueImgResponse::validate()
{
}

web::json::value UploadIssueImgResponse::toJson() const
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
bool UploadIssueImgResponse::fromJson(const web::json::value& val)
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


std::string UploadIssueImgResponse::getImgId() const
{
    return imgId_;
}

void UploadIssueImgResponse::setImgId(const std::string& value)
{
    imgId_ = value;
    imgIdIsSet_ = true;
}

bool UploadIssueImgResponse::imgIdIsSet() const
{
    return imgIdIsSet_;
}

void UploadIssueImgResponse::unsetimgId()
{
    imgIdIsSet_ = false;
}

std::string UploadIssueImgResponse::getImgUrl() const
{
    return imgUrl_;
}

void UploadIssueImgResponse::setImgUrl(const std::string& value)
{
    imgUrl_ = value;
    imgUrlIsSet_ = true;
}

bool UploadIssueImgResponse::imgUrlIsSet() const
{
    return imgUrlIsSet_;
}

void UploadIssueImgResponse::unsetimgUrl()
{
    imgUrlIsSet_ = false;
}

}
}
}
}
}


