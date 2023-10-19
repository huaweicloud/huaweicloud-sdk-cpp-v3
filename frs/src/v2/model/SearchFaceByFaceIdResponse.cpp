

#include "huaweicloud/frs/v2/model/SearchFaceByFaceIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByFaceIdResponse::SearchFaceByFaceIdResponse()
{
    facesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SearchFaceByFaceIdResponse::~SearchFaceByFaceIdResponse() = default;

void SearchFaceByFaceIdResponse::validate()
{
}

web::json::value SearchFaceByFaceIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SearchFaceByFaceIdResponse::fromJson(const web::json::value& val)
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


std::vector<SearchFace>& SearchFaceByFaceIdResponse::getFaces()
{
    return faces_;
}

void SearchFaceByFaceIdResponse::setFaces(const std::vector<SearchFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool SearchFaceByFaceIdResponse::facesIsSet() const
{
    return facesIsSet_;
}

void SearchFaceByFaceIdResponse::unsetfaces()
{
    facesIsSet_ = false;
}

std::string SearchFaceByFaceIdResponse::getXRequestId() const
{
    return xRequestId_;
}

void SearchFaceByFaceIdResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchFaceByFaceIdResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchFaceByFaceIdResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


