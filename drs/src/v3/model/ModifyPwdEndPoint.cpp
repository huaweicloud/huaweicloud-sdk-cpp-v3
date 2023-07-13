

#include "huaweicloud/drs/v3/model/ModifyPwdEndPoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyPwdEndPoint::ModifyPwdEndPoint()
{
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
    endPointType_ = "";
    endPointTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    kerberosIsSet_ = false;
}

ModifyPwdEndPoint::~ModifyPwdEndPoint() = default;

void ModifyPwdEndPoint::validate()
{
}

web::json::value ModifyPwdEndPoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbPasswordIsSet_) {
        val[utility::conversions::to_string_t("db_password")] = ModelBase::toJson(dbPassword_);
    }
    if(endPointTypeIsSet_) {
        val[utility::conversions::to_string_t("end_point_type")] = ModelBase::toJson(endPointType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(kerberosIsSet_) {
        val[utility::conversions::to_string_t("kerberos")] = ModelBase::toJson(kerberos_);
    }

    return val;
}

bool ModifyPwdEndPoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_point_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_point_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndPointType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("kerberos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kerberos"));
        if(!fieldValue.is_null())
        {
            KerberosVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKerberos(refVal);
        }
    }
    return ok;
}

std::string ModifyPwdEndPoint::getDbPassword() const
{
    return dbPassword_;
}

void ModifyPwdEndPoint::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool ModifyPwdEndPoint::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void ModifyPwdEndPoint::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

std::string ModifyPwdEndPoint::getEndPointType() const
{
    return endPointType_;
}

void ModifyPwdEndPoint::setEndPointType(const std::string& value)
{
    endPointType_ = value;
    endPointTypeIsSet_ = true;
}

bool ModifyPwdEndPoint::endPointTypeIsSet() const
{
    return endPointTypeIsSet_;
}

void ModifyPwdEndPoint::unsetendPointType()
{
    endPointTypeIsSet_ = false;
}

std::string ModifyPwdEndPoint::getJobId() const
{
    return jobId_;
}

void ModifyPwdEndPoint::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyPwdEndPoint::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyPwdEndPoint::unsetjobId()
{
    jobIdIsSet_ = false;
}

KerberosVO ModifyPwdEndPoint::getKerberos() const
{
    return kerberos_;
}

void ModifyPwdEndPoint::setKerberos(const KerberosVO& value)
{
    kerberos_ = value;
    kerberosIsSet_ = true;
}

bool ModifyPwdEndPoint::kerberosIsSet() const
{
    return kerberosIsSet_;
}

void ModifyPwdEndPoint::unsetkerberos()
{
    kerberosIsSet_ = false;
}

}
}
}
}
}


