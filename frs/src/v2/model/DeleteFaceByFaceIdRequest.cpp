

#include "huaweicloud/frs/v2/model/DeleteFaceByFaceIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DeleteFaceByFaceIdRequest::DeleteFaceByFaceIdRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    faceId_ = "";
    faceIdIsSet_ = false;
}

DeleteFaceByFaceIdRequest::~DeleteFaceByFaceIdRequest() = default;

void DeleteFaceByFaceIdRequest::validate()
{
}

web::json::value DeleteFaceByFaceIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(faceIdIsSet_) {
        val[utility::conversions::to_string_t("face_id")] = ModelBase::toJson(faceId_);
    }

    return val;
}

bool DeleteFaceByFaceIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceId(refVal);
        }
    }
    return ok;
}


std::string DeleteFaceByFaceIdRequest::getFaceSetName() const
{
    return faceSetName_;
}

void DeleteFaceByFaceIdRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool DeleteFaceByFaceIdRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void DeleteFaceByFaceIdRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string DeleteFaceByFaceIdRequest::getFaceId() const
{
    return faceId_;
}

void DeleteFaceByFaceIdRequest::setFaceId(const std::string& value)
{
    faceId_ = value;
    faceIdIsSet_ = true;
}

bool DeleteFaceByFaceIdRequest::faceIdIsSet() const
{
    return faceIdIsSet_;
}

void DeleteFaceByFaceIdRequest::unsetfaceId()
{
    faceIdIsSet_ = false;
}

}
}
}
}
}


