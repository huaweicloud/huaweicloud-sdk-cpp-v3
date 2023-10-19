

#include "huaweicloud/frs/v2/model/DeleteFaceSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DeleteFaceSetResponse::DeleteFaceSetResponse()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteFaceSetResponse::~DeleteFaceSetResponse() = default;

void DeleteFaceSetResponse::validate()
{
}

web::json::value DeleteFaceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteFaceSetResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteFaceSetResponse::getFaceSetName() const
{
    return faceSetName_;
}

void DeleteFaceSetResponse::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool DeleteFaceSetResponse::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void DeleteFaceSetResponse::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string DeleteFaceSetResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteFaceSetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteFaceSetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteFaceSetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


