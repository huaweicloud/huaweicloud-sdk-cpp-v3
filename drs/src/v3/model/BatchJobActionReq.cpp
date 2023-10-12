

#include "huaweicloud/drs/v3/model/BatchJobActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchJobActionReq::BatchJobActionReq()
{
    action_ = "";
    actionIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
}

BatchJobActionReq::~BatchJobActionReq() = default;

void BatchJobActionReq::validate()
{
}

web::json::value BatchJobActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }

    return val;
}
bool BatchJobActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
        }
    }
    return ok;
}


std::string BatchJobActionReq::getAction() const
{
    return action_;
}

void BatchJobActionReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchJobActionReq::actionIsSet() const
{
    return actionIsSet_;
}

void BatchJobActionReq::unsetaction()
{
    actionIsSet_ = false;
}

std::string BatchJobActionReq::getJobId() const
{
    return jobId_;
}

void BatchJobActionReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchJobActionReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchJobActionReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchJobActionReq::getProperty() const
{
    return property_;
}

void BatchJobActionReq::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool BatchJobActionReq::propertyIsSet() const
{
    return propertyIsSet_;
}

void BatchJobActionReq::unsetproperty()
{
    propertyIsSet_ = false;
}

}
}
}
}
}


