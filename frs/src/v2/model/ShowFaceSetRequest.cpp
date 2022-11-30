

#include "huaweicloud/frs/v2/model/ShowFaceSetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowFaceSetRequest::ShowFaceSetRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
}

ShowFaceSetRequest::~ShowFaceSetRequest() = default;

void ShowFaceSetRequest::validate()
{
}

web::json::value ShowFaceSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }

    return val;
}

bool ShowFaceSetRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowFaceSetRequest::getFaceSetName() const
{
    return faceSetName_;
}

void ShowFaceSetRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool ShowFaceSetRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void ShowFaceSetRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

}
}
}
}
}


