

#include "huaweicloud/codeartscheck/v2/model/UpdateCodeGateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateCodeGateRequestBody::UpdateCodeGateRequestBody()
{
    reviewDataIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

UpdateCodeGateRequestBody::~UpdateCodeGateRequestBody() = default;

void UpdateCodeGateRequestBody::validate()
{
}

web::json::value UpdateCodeGateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reviewDataIsSet_) {
        val[utility::conversions::to_string_t("reviewData")] = ModelBase::toJson(reviewData_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateCodeGateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reviewData"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewData"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewDataInfoRequestParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::vector<ReviewDataInfoRequestParam>& UpdateCodeGateRequestBody::getReviewData()
{
    return reviewData_;
}

void UpdateCodeGateRequestBody::setReviewData(const std::vector<ReviewDataInfoRequestParam>& value)
{
    reviewData_ = value;
    reviewDataIsSet_ = true;
}

bool UpdateCodeGateRequestBody::reviewDataIsSet() const
{
    return reviewDataIsSet_;
}

void UpdateCodeGateRequestBody::unsetreviewData()
{
    reviewDataIsSet_ = false;
}

std::string UpdateCodeGateRequestBody::getId() const
{
    return id_;
}

void UpdateCodeGateRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateCodeGateRequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateCodeGateRequestBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


