

#include "huaweicloud/image/v2/model/RecaptureDetectResponse_result_detail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RecaptureDetectResponse_result_detail::RecaptureDetectResponse_result_detail()
{
    label_ = "";
    labelIsSet_ = false;
    confidence_ = "";
    confidenceIsSet_ = false;
}

RecaptureDetectResponse_result_detail::~RecaptureDetectResponse_result_detail() = default;

void RecaptureDetectResponse_result_detail::validate()
{
}

web::json::value RecaptureDetectResponse_result_detail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool RecaptureDetectResponse_result_detail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string RecaptureDetectResponse_result_detail::getLabel() const
{
    return label_;
}

void RecaptureDetectResponse_result_detail::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool RecaptureDetectResponse_result_detail::labelIsSet() const
{
    return labelIsSet_;
}

void RecaptureDetectResponse_result_detail::unsetlabel()
{
    labelIsSet_ = false;
}

std::string RecaptureDetectResponse_result_detail::getConfidence() const
{
    return confidence_;
}

void RecaptureDetectResponse_result_detail::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool RecaptureDetectResponse_result_detail::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void RecaptureDetectResponse_result_detail::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


