

#include "huaweicloud/codeartsdeploy/v2/model/EnvExecutionBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvExecutionBody::EnvExecutionBody()
{
    paramsIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
    triggerSource_ = "";
    triggerSourceIsSet_ = false;
}

EnvExecutionBody::~EnvExecutionBody() = default;

void EnvExecutionBody::validate()
{
}

web::json::value EnvExecutionBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(triggerSourceIsSet_) {
        val[utility::conversions::to_string_t("trigger_source")] = ModelBase::toJson(triggerSource_);
    }

    return val;
}

bool EnvExecutionBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<DynamicConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerSource(refVal);
        }
    }
    return ok;
}

std::vector<DynamicConfigInfo>& EnvExecutionBody::getParams()
{
    return params_;
}

void EnvExecutionBody::setParams(const std::vector<DynamicConfigInfo>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool EnvExecutionBody::paramsIsSet() const
{
    return paramsIsSet_;
}

void EnvExecutionBody::unsetparams()
{
    paramsIsSet_ = false;
}

std::string EnvExecutionBody::getRecordId() const
{
    return recordId_;
}

void EnvExecutionBody::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool EnvExecutionBody::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void EnvExecutionBody::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string EnvExecutionBody::getTriggerSource() const
{
    return triggerSource_;
}

void EnvExecutionBody::setTriggerSource(const std::string& value)
{
    triggerSource_ = value;
    triggerSourceIsSet_ = true;
}

bool EnvExecutionBody::triggerSourceIsSet() const
{
    return triggerSourceIsSet_;
}

void EnvExecutionBody::unsettriggerSource()
{
    triggerSourceIsSet_ = false;
}

}
}
}
}
}


