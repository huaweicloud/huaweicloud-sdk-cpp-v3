

#include "huaweicloud/projectman/v4/model/PutIpdChangeReviewFormV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PutIpdChangeReviewFormV2Request::PutIpdChangeReviewFormV2Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    reviewId_ = "";
    reviewIdIsSet_ = false;
    bodyIsSet_ = false;
}

PutIpdChangeReviewFormV2Request::~PutIpdChangeReviewFormV2Request() = default;

void PutIpdChangeReviewFormV2Request::validate()
{
}

web::json::value PutIpdChangeReviewFormV2Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(reviewIdIsSet_) {
        val[utility::conversions::to_string_t("review_id")] = ModelBase::toJson(reviewId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PutIpdChangeReviewFormV2Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReviewUpdateBodyV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PutIpdChangeReviewFormV2Request::getProjectId() const
{
    return projectId_;
}

void PutIpdChangeReviewFormV2Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PutIpdChangeReviewFormV2Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PutIpdChangeReviewFormV2Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PutIpdChangeReviewFormV2Request::getReviewId() const
{
    return reviewId_;
}

void PutIpdChangeReviewFormV2Request::setReviewId(const std::string& value)
{
    reviewId_ = value;
    reviewIdIsSet_ = true;
}

bool PutIpdChangeReviewFormV2Request::reviewIdIsSet() const
{
    return reviewIdIsSet_;
}

void PutIpdChangeReviewFormV2Request::unsetreviewId()
{
    reviewIdIsSet_ = false;
}

ReviewUpdateBodyV2 PutIpdChangeReviewFormV2Request::getBody() const
{
    return body_;
}

void PutIpdChangeReviewFormV2Request::setBody(const ReviewUpdateBodyV2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PutIpdChangeReviewFormV2Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void PutIpdChangeReviewFormV2Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


