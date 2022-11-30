

#include "huaweicloud/frs/v2/model/CompareFace.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFace::CompareFace()
{
    boundingBoxIsSet_ = false;
}

CompareFace::~CompareFace() = default;

void CompareFace::validate()
{
}

web::json::value CompareFace::toJson() const
{
    web::json::value val = web::json::value::object();

    if(boundingBoxIsSet_) {
        val[utility::conversions::to_string_t("bounding_box")] = ModelBase::toJson(boundingBox_);
    }

    return val;
}

bool CompareFace::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bounding_box"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounding_box"));
        if(!fieldValue.is_null())
        {
            BoundingBox refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoundingBox(refVal);
        }
    }
    return ok;
}


BoundingBox CompareFace::getBoundingBox() const
{
    return boundingBox_;
}

void CompareFace::setBoundingBox(const BoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool CompareFace::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void CompareFace::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

}
}
}
}
}


