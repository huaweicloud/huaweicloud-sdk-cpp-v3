

#include "huaweicloud/metastudio/v1/model/MotionItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




MotionItem::MotionItem()
{
    timestamp_ = 0.0f;
    timestampIsSet_ = false;
    rootIsSet_ = false;
    jointsIsSet_ = false;
    eyesIsSet_ = false;
}

MotionItem::~MotionItem() = default;

void MotionItem::validate()
{
}

web::json::value MotionItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(rootIsSet_) {
        val[utility::conversions::to_string_t("root")] = ModelBase::toJson(root_);
    }
    if(jointsIsSet_) {
        val[utility::conversions::to_string_t("joints")] = ModelBase::toJson(joints_);
    }
    if(eyesIsSet_) {
        val[utility::conversions::to_string_t("eyes")] = ModelBase::toJson(eyes_);
    }

    return val;
}
bool MotionItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root"));
        if(!fieldValue.is_null())
        {
            std::vector<float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("joints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("joints"));
        if(!fieldValue.is_null())
        {
            std::vector<float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eyes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eyes"));
        if(!fieldValue.is_null())
        {
            std::vector<float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEyes(refVal);
        }
    }
    return ok;
}


float MotionItem::getTimestamp() const
{
    return timestamp_;
}

void MotionItem::setTimestamp(float value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool MotionItem::timestampIsSet() const
{
    return timestampIsSet_;
}

void MotionItem::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::vector<float>& MotionItem::getRoot()
{
    return root_;
}

void MotionItem::setRoot(std::vector<float> value)
{
    root_ = value;
    rootIsSet_ = true;
}

bool MotionItem::rootIsSet() const
{
    return rootIsSet_;
}

void MotionItem::unsetroot()
{
    rootIsSet_ = false;
}

std::vector<float>& MotionItem::getJoints()
{
    return joints_;
}

void MotionItem::setJoints(std::vector<float> value)
{
    joints_ = value;
    jointsIsSet_ = true;
}

bool MotionItem::jointsIsSet() const
{
    return jointsIsSet_;
}

void MotionItem::unsetjoints()
{
    jointsIsSet_ = false;
}

std::vector<float>& MotionItem::getEyes()
{
    return eyes_;
}

void MotionItem::setEyes(std::vector<float> value)
{
    eyes_ = value;
    eyesIsSet_ = true;
}

bool MotionItem::eyesIsSet() const
{
    return eyesIsSet_;
}

void MotionItem::unseteyes()
{
    eyesIsSet_ = false;
}

}
}
}
}
}


