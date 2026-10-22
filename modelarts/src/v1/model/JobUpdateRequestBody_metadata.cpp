

#include "huaweicloud/modelarts/v1/model/JobUpdateRequestBody_metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobUpdateRequestBody_metadata::JobUpdateRequestBody_metadata()
{
    annotationIsSet_ = false;
}

JobUpdateRequestBody_metadata::~JobUpdateRequestBody_metadata() = default;

void JobUpdateRequestBody_metadata::validate()
{
}

web::json::value JobUpdateRequestBody_metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(annotationIsSet_) {
        val[utility::conversions::to_string_t("annotation")] = ModelBase::toJson(annotation_);
    }

    return val;
}
bool JobUpdateRequestBody_metadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("annotation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotation"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotation(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& JobUpdateRequestBody_metadata::getAnnotation()
{
    return annotation_;
}

void JobUpdateRequestBody_metadata::setAnnotation(const std::map<std::string, std::string>& value)
{
    annotation_ = value;
    annotationIsSet_ = true;
}

bool JobUpdateRequestBody_metadata::annotationIsSet() const
{
    return annotationIsSet_;
}

void JobUpdateRequestBody_metadata::unsetannotation()
{
    annotationIsSet_ = false;
}

}
}
}
}
}


