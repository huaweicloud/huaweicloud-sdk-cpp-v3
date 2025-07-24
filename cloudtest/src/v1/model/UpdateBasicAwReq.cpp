

#include "huaweicloud/cloudtest/v1/model/UpdateBasicAwReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateBasicAwReq::UpdateBasicAwReq()
{
    description_ = "";
    descriptionIsSet_ = false;
    dftCheckPointListIsSet_ = false;
    dftCustomHeaderIsSet_ = false;
    dftRetryInterval_ = "";
    dftRetryIntervalIsSet_ = false;
    dftRetryTimes_ = "";
    dftRetryTimesIsSet_ = false;
    dftVariableListIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    paramTypeAndDftValueIsSet_ = false;
}

UpdateBasicAwReq::~UpdateBasicAwReq() = default;

void UpdateBasicAwReq::validate()
{
}

web::json::value UpdateBasicAwReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dftCheckPointListIsSet_) {
        val[utility::conversions::to_string_t("dft_check_point_list")] = ModelBase::toJson(dftCheckPointList_);
    }
    if(dftCustomHeaderIsSet_) {
        val[utility::conversions::to_string_t("dft_custom_header")] = ModelBase::toJson(dftCustomHeader_);
    }
    if(dftRetryIntervalIsSet_) {
        val[utility::conversions::to_string_t("dft_retry_interval")] = ModelBase::toJson(dftRetryInterval_);
    }
    if(dftRetryTimesIsSet_) {
        val[utility::conversions::to_string_t("dft_retry_times")] = ModelBase::toJson(dftRetryTimes_);
    }
    if(dftVariableListIsSet_) {
        val[utility::conversions::to_string_t("dft_variable_list")] = ModelBase::toJson(dftVariableList_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramTypeAndDftValueIsSet_) {
        val[utility::conversions::to_string_t("param_type_and_dft_value")] = ModelBase::toJson(paramTypeAndDftValue_);
    }

    return val;
}
bool UpdateBasicAwReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_check_point_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_check_point_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckPoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCheckPointList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_custom_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_custom_header"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCustomHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_retry_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_retry_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftRetryInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_retry_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_retry_times"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftRetryTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_variable_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_variable_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftVariableList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("param_type_and_dft_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type_and_dft_value"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamTypeAndDftValue(refVal);
        }
    }
    return ok;
}


std::string UpdateBasicAwReq::getDescription() const
{
    return description_;
}

void UpdateBasicAwReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateBasicAwReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateBasicAwReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<CheckPoint>& UpdateBasicAwReq::getDftCheckPointList()
{
    return dftCheckPointList_;
}

void UpdateBasicAwReq::setDftCheckPointList(const std::vector<CheckPoint>& value)
{
    dftCheckPointList_ = value;
    dftCheckPointListIsSet_ = true;
}

bool UpdateBasicAwReq::dftCheckPointListIsSet() const
{
    return dftCheckPointListIsSet_;
}

void UpdateBasicAwReq::unsetdftCheckPointList()
{
    dftCheckPointListIsSet_ = false;
}

std::vector<AwParam>& UpdateBasicAwReq::getDftCustomHeader()
{
    return dftCustomHeader_;
}

void UpdateBasicAwReq::setDftCustomHeader(const std::vector<AwParam>& value)
{
    dftCustomHeader_ = value;
    dftCustomHeaderIsSet_ = true;
}

bool UpdateBasicAwReq::dftCustomHeaderIsSet() const
{
    return dftCustomHeaderIsSet_;
}

void UpdateBasicAwReq::unsetdftCustomHeader()
{
    dftCustomHeaderIsSet_ = false;
}

std::string UpdateBasicAwReq::getDftRetryInterval() const
{
    return dftRetryInterval_;
}

void UpdateBasicAwReq::setDftRetryInterval(const std::string& value)
{
    dftRetryInterval_ = value;
    dftRetryIntervalIsSet_ = true;
}

bool UpdateBasicAwReq::dftRetryIntervalIsSet() const
{
    return dftRetryIntervalIsSet_;
}

void UpdateBasicAwReq::unsetdftRetryInterval()
{
    dftRetryIntervalIsSet_ = false;
}

std::string UpdateBasicAwReq::getDftRetryTimes() const
{
    return dftRetryTimes_;
}

void UpdateBasicAwReq::setDftRetryTimes(const std::string& value)
{
    dftRetryTimes_ = value;
    dftRetryTimesIsSet_ = true;
}

bool UpdateBasicAwReq::dftRetryTimesIsSet() const
{
    return dftRetryTimesIsSet_;
}

void UpdateBasicAwReq::unsetdftRetryTimes()
{
    dftRetryTimesIsSet_ = false;
}

std::vector<AwVariable>& UpdateBasicAwReq::getDftVariableList()
{
    return dftVariableList_;
}

void UpdateBasicAwReq::setDftVariableList(const std::vector<AwVariable>& value)
{
    dftVariableList_ = value;
    dftVariableListIsSet_ = true;
}

bool UpdateBasicAwReq::dftVariableListIsSet() const
{
    return dftVariableListIsSet_;
}

void UpdateBasicAwReq::unsetdftVariableList()
{
    dftVariableListIsSet_ = false;
}

std::string UpdateBasicAwReq::getName() const
{
    return name_;
}

void UpdateBasicAwReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateBasicAwReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateBasicAwReq::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AwParam>& UpdateBasicAwReq::getParamTypeAndDftValue()
{
    return paramTypeAndDftValue_;
}

void UpdateBasicAwReq::setParamTypeAndDftValue(const std::vector<AwParam>& value)
{
    paramTypeAndDftValue_ = value;
    paramTypeAndDftValueIsSet_ = true;
}

bool UpdateBasicAwReq::paramTypeAndDftValueIsSet() const
{
    return paramTypeAndDftValueIsSet_;
}

void UpdateBasicAwReq::unsetparamTypeAndDftValue()
{
    paramTypeAndDftValueIsSet_ = false;
}

}
}
}
}
}


