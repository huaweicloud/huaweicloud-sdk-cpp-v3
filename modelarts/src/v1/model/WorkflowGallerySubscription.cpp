

#include "huaweicloud/modelarts/v1/model/WorkflowGallerySubscription.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowGallerySubscription::WorkflowGallerySubscription()
{
    contentId_ = "";
    contentIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    expiredAt_ = "";
    expiredAtIsSet_ = false;
}

WorkflowGallerySubscription::~WorkflowGallerySubscription() = default;

void WorkflowGallerySubscription::validate()
{
}

web::json::value WorkflowGallerySubscription::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIdIsSet_) {
        val[utility::conversions::to_string_t("content_id")] = ModelBase::toJson(contentId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(expiredAtIsSet_) {
        val[utility::conversions::to_string_t("expired_at")] = ModelBase::toJson(expiredAt_);
    }

    return val;
}
bool WorkflowGallerySubscription::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredAt(refVal);
        }
    }
    return ok;
}


std::string WorkflowGallerySubscription::getContentId() const
{
    return contentId_;
}

void WorkflowGallerySubscription::setContentId(const std::string& value)
{
    contentId_ = value;
    contentIdIsSet_ = true;
}

bool WorkflowGallerySubscription::contentIdIsSet() const
{
    return contentIdIsSet_;
}

void WorkflowGallerySubscription::unsetcontentId()
{
    contentIdIsSet_ = false;
}

std::string WorkflowGallerySubscription::getVersionId() const
{
    return versionId_;
}

void WorkflowGallerySubscription::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool WorkflowGallerySubscription::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void WorkflowGallerySubscription::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string WorkflowGallerySubscription::getExpiredAt() const
{
    return expiredAt_;
}

void WorkflowGallerySubscription::setExpiredAt(const std::string& value)
{
    expiredAt_ = value;
    expiredAtIsSet_ = true;
}

bool WorkflowGallerySubscription::expiredAtIsSet() const
{
    return expiredAtIsSet_;
}

void WorkflowGallerySubscription::unsetexpiredAt()
{
    expiredAtIsSet_ = false;
}

}
}
}
}
}


