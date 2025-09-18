

#include "huaweicloud/projectman/v4/model/CreateIterationRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIterationRequestV4::CreateIterationRequestV4()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateIterationRequestV4::~CreateIterationRequestV4() = default;

void CreateIterationRequestV4::validate()
{
}

web::json::value CreateIterationRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool CreateIterationRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string CreateIterationRequestV4::getBeginTime() const
{
    return beginTime_;
}

void CreateIterationRequestV4::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool CreateIterationRequestV4::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void CreateIterationRequestV4::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string CreateIterationRequestV4::getDescription() const
{
    return description_;
}

void CreateIterationRequestV4::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateIterationRequestV4::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateIterationRequestV4::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateIterationRequestV4::getEndTime() const
{
    return endTime_;
}

void CreateIterationRequestV4::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateIterationRequestV4::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateIterationRequestV4::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateIterationRequestV4::getName() const
{
    return name_;
}

void CreateIterationRequestV4::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateIterationRequestV4::nameIsSet() const
{
    return nameIsSet_;
}

void CreateIterationRequestV4::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


