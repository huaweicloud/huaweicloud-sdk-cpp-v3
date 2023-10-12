

#include "huaweicloud/frs/v2/model/ShowFacesByLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowFacesByLimitRequest::ShowFacesByLimitRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowFacesByLimitRequest::~ShowFacesByLimitRequest() = default;

void ShowFacesByLimitRequest::validate()
{
}

web::json::value ShowFacesByLimitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowFacesByLimitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowFacesByLimitRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowFacesByLimitRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowFacesByLimitRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowFacesByLimitRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowFacesByLimitRequest::getFaceSetName() const
{
    return faceSetName_;
}

void ShowFacesByLimitRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool ShowFacesByLimitRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void ShowFacesByLimitRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

int32_t ShowFacesByLimitRequest::getOffset() const
{
    return offset_;
}

void ShowFacesByLimitRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowFacesByLimitRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowFacesByLimitRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowFacesByLimitRequest::getLimit() const
{
    return limit_;
}

void ShowFacesByLimitRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowFacesByLimitRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowFacesByLimitRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


