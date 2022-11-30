

#include "huaweicloud/frs/v2/model/DeleteFaceSetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DeleteFaceSetRequest::DeleteFaceSetRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
}

DeleteFaceSetRequest::~DeleteFaceSetRequest() = default;

void DeleteFaceSetRequest::validate()
{
}

web::json::value DeleteFaceSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }

    return val;
}

bool DeleteFaceSetRequest::fromJson(const web::json::value& val)
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


std::string DeleteFaceSetRequest::getFaceSetName() const
{
    return faceSetName_;
}

void DeleteFaceSetRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool DeleteFaceSetRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void DeleteFaceSetRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

}
}
}
}
}


