

#include "huaweicloud/metastudio/v1/model/CreatePhotoDetectionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePhotoDetectionReq::CreatePhotoDetectionReq()
{
    humanImage_ = "";
    humanImageIsSet_ = false;
}

CreatePhotoDetectionReq::~CreatePhotoDetectionReq() = default;

void CreatePhotoDetectionReq::validate()
{
}

web::json::value CreatePhotoDetectionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(humanImageIsSet_) {
        val[utility::conversions::to_string_t("human_image")] = ModelBase::toJson(humanImage_);
    }

    return val;
}
bool CreatePhotoDetectionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("human_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanImage(refVal);
        }
    }
    return ok;
}


std::string CreatePhotoDetectionReq::getHumanImage() const
{
    return humanImage_;
}

void CreatePhotoDetectionReq::setHumanImage(const std::string& value)
{
    humanImage_ = value;
    humanImageIsSet_ = true;
}

bool CreatePhotoDetectionReq::humanImageIsSet() const
{
    return humanImageIsSet_;
}

void CreatePhotoDetectionReq::unsethumanImage()
{
    humanImageIsSet_ = false;
}

}
}
}
}
}


