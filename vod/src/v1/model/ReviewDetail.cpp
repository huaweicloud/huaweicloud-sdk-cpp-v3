

#include "huaweicloud/vod/v1/model/ReviewDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ReviewDetail::ReviewDetail()
{
    confidence_ = "";
    confidenceIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
}

ReviewDetail::~ReviewDetail() = default;

void ReviewDetail::validate()
{
}

web::json::value ReviewDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }

    return val;
}
bool ReviewDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    return ok;
}


std::string ReviewDetail::getConfidence() const
{
    return confidence_;
}

void ReviewDetail::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ReviewDetail::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ReviewDetail::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string ReviewDetail::getLabel() const
{
    return label_;
}

void ReviewDetail::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool ReviewDetail::labelIsSet() const
{
    return labelIsSet_;
}

void ReviewDetail::unsetlabel()
{
    labelIsSet_ = false;
}

}
}
}
}
}


