

#include "huaweicloud/cloudtest/v1/model/SubtaskcaseOverstockDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SubtaskcaseOverstockDto::SubtaskcaseOverstockDto()
{
    dataTime_ = utility::datetime();
    dataTimeIsSet_ = false;
    executorType_ = "";
    executorTypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    locationId_ = "";
    locationIdIsSet_ = false;
    subtaskcaseOverstockCount_ = 0;
    subtaskcaseOverstockCountIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
}

SubtaskcaseOverstockDto::~SubtaskcaseOverstockDto() = default;

void SubtaskcaseOverstockDto::validate()
{
}

web::json::value SubtaskcaseOverstockDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataTimeIsSet_) {
        val[utility::conversions::to_string_t("data_time")] = ModelBase::toJson(dataTime_);
    }
    if(executorTypeIsSet_) {
        val[utility::conversions::to_string_t("executor_type")] = ModelBase::toJson(executorType_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(locationIdIsSet_) {
        val[utility::conversions::to_string_t("location_id")] = ModelBase::toJson(locationId_);
    }
    if(subtaskcaseOverstockCountIsSet_) {
        val[utility::conversions::to_string_t("subtaskcase_overstock_count")] = ModelBase::toJson(subtaskcaseOverstockCount_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("test_service_id")] = ModelBase::toJson(testServiceId_);
    }

    return val;
}
bool SubtaskcaseOverstockDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("location_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtaskcase_overstock_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtaskcase_overstock_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtaskcaseOverstockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
        }
    }
    return ok;
}


utility::datetime SubtaskcaseOverstockDto::getDataTime() const
{
    return dataTime_;
}

void SubtaskcaseOverstockDto::setDataTime(const utility::datetime& value)
{
    dataTime_ = value;
    dataTimeIsSet_ = true;
}

bool SubtaskcaseOverstockDto::dataTimeIsSet() const
{
    return dataTimeIsSet_;
}

void SubtaskcaseOverstockDto::unsetdataTime()
{
    dataTimeIsSet_ = false;
}

std::string SubtaskcaseOverstockDto::getExecutorType() const
{
    return executorType_;
}

void SubtaskcaseOverstockDto::setExecutorType(const std::string& value)
{
    executorType_ = value;
    executorTypeIsSet_ = true;
}

bool SubtaskcaseOverstockDto::executorTypeIsSet() const
{
    return executorTypeIsSet_;
}

void SubtaskcaseOverstockDto::unsetexecutorType()
{
    executorTypeIsSet_ = false;
}

std::string SubtaskcaseOverstockDto::getId() const
{
    return id_;
}

void SubtaskcaseOverstockDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubtaskcaseOverstockDto::idIsSet() const
{
    return idIsSet_;
}

void SubtaskcaseOverstockDto::unsetid()
{
    idIsSet_ = false;
}

std::string SubtaskcaseOverstockDto::getLabel() const
{
    return label_;
}

void SubtaskcaseOverstockDto::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool SubtaskcaseOverstockDto::labelIsSet() const
{
    return labelIsSet_;
}

void SubtaskcaseOverstockDto::unsetlabel()
{
    labelIsSet_ = false;
}

std::string SubtaskcaseOverstockDto::getLocationId() const
{
    return locationId_;
}

void SubtaskcaseOverstockDto::setLocationId(const std::string& value)
{
    locationId_ = value;
    locationIdIsSet_ = true;
}

bool SubtaskcaseOverstockDto::locationIdIsSet() const
{
    return locationIdIsSet_;
}

void SubtaskcaseOverstockDto::unsetlocationId()
{
    locationIdIsSet_ = false;
}

int32_t SubtaskcaseOverstockDto::getSubtaskcaseOverstockCount() const
{
    return subtaskcaseOverstockCount_;
}

void SubtaskcaseOverstockDto::setSubtaskcaseOverstockCount(int32_t value)
{
    subtaskcaseOverstockCount_ = value;
    subtaskcaseOverstockCountIsSet_ = true;
}

bool SubtaskcaseOverstockDto::subtaskcaseOverstockCountIsSet() const
{
    return subtaskcaseOverstockCountIsSet_;
}

void SubtaskcaseOverstockDto::unsetsubtaskcaseOverstockCount()
{
    subtaskcaseOverstockCountIsSet_ = false;
}

std::string SubtaskcaseOverstockDto::getTestServiceId() const
{
    return testServiceId_;
}

void SubtaskcaseOverstockDto::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool SubtaskcaseOverstockDto::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void SubtaskcaseOverstockDto::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

}
}
}
}
}


