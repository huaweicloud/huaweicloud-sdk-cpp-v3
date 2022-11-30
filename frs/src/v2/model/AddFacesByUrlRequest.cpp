

#include "huaweicloud/frs/v2/model/AddFacesByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesByUrlRequest::AddFacesByUrlRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    bodyIsSet_ = false;
}

AddFacesByUrlRequest::~AddFacesByUrlRequest() = default;

void AddFacesByUrlRequest::validate()
{
}

web::json::value AddFacesByUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AddFacesByUrlRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddFacesUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddFacesByUrlRequest::getFaceSetName() const
{
    return faceSetName_;
}

void AddFacesByUrlRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool AddFacesByUrlRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void AddFacesByUrlRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

AddFacesUrlReq AddFacesByUrlRequest::getBody() const
{
    return body_;
}

void AddFacesByUrlRequest::setBody(const AddFacesUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddFacesByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddFacesByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


