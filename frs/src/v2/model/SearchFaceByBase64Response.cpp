

#include "huaweicloud/frs/v2/model/SearchFaceByBase64Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByBase64Response::SearchFaceByBase64Response()
{
    facesIsSet_ = false;
}

SearchFaceByBase64Response::~SearchFaceByBase64Response() = default;

void SearchFaceByBase64Response::validate()
{
}

web::json::value SearchFaceByBase64Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }

    return val;
}
bool SearchFaceByBase64Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("faces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faces"));
        if(!fieldValue.is_null())
        {
            std::vector<SearchFace> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaces(refVal);
        }
    }
    return ok;
}


std::vector<SearchFace>& SearchFaceByBase64Response::getFaces()
{
    return faces_;
}

void SearchFaceByBase64Response::setFaces(const std::vector<SearchFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool SearchFaceByBase64Response::facesIsSet() const
{
    return facesIsSet_;
}

void SearchFaceByBase64Response::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


