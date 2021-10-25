

#include "huaweicloud/ims/v2/model/JobEntities.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




JobEntities::JobEntities()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    currentTask_ = "";
    currentTaskIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    processPercent_ = 0.0;
    processPercentIsSet_ = false;
}

JobEntities::~JobEntities() = default;

void JobEntities::validate()
{
}

web::json::value JobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(currentTaskIsSet_) {
        val[utility::conversions::to_string_t("current_task")] = ModelBase::toJson(currentTask_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(processPercentIsSet_) {
        val[utility::conversions::to_string_t("process_percent")] = ModelBase::toJson(processPercent_);
    }

    return val;
}

bool JobEntities::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("current_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_percent"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessPercent(refVal);
        }
    }
    return ok;
}


std::string JobEntities::getImageId() const
{
    return imageId_;
}

void JobEntities::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool JobEntities::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void JobEntities::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string JobEntities::getCurrentTask() const
{
    return currentTask_;
}

void JobEntities::setCurrentTask(const std::string& value)
{
    currentTask_ = value;
    currentTaskIsSet_ = true;
}

bool JobEntities::currentTaskIsSet() const
{
    return currentTaskIsSet_;
}

void JobEntities::unsetcurrentTask()
{
    currentTaskIsSet_ = false;
}

std::string JobEntities::getImageName() const
{
    return imageName_;
}

void JobEntities::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool JobEntities::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void JobEntities::unsetimageName()
{
    imageNameIsSet_ = false;
}

double JobEntities::getProcessPercent() const
{
    return processPercent_;
}

void JobEntities::setProcessPercent(double value)
{
    processPercent_ = value;
    processPercentIsSet_ = true;
}

bool JobEntities::processPercentIsSet() const
{
    return processPercentIsSet_;
}

void JobEntities::unsetprocessPercent()
{
    processPercentIsSet_ = false;
}

}
}
}
}
}


