

#include "huaweicloud/codeartsbuild/v3/model/ShowDockerfileTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDockerfileTemplateRequest::ShowDockerfileTemplateRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

ShowDockerfileTemplateRequest::~ShowDockerfileTemplateRequest() = default;

void ShowDockerfileTemplateRequest::validate()
{
}

web::json::value ShowDockerfileTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}
bool ShowDockerfileTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    return ok;
}


std::string ShowDockerfileTemplateRequest::getImageId() const
{
    return imageId_;
}

void ShowDockerfileTemplateRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ShowDockerfileTemplateRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ShowDockerfileTemplateRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


