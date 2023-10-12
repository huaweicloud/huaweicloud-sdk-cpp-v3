

#include "huaweicloud/gaussdbfornosql/v3/model/ShowPauseResumeStutusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowPauseResumeStutusResponse::ShowPauseResumeStutusResponse()
{
    masterInstanceId_ = "";
    masterInstanceIdIsSet_ = false;
    slaveInstanceId_ = "";
    slaveInstanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    dataSyncIndicatorsIsSet_ = false;
    rtoAndRpoIndicatorsIsSet_ = false;
}

ShowPauseResumeStutusResponse::~ShowPauseResumeStutusResponse() = default;

void ShowPauseResumeStutusResponse::validate()
{
}

web::json::value ShowPauseResumeStutusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(masterInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("master_instance_id")] = ModelBase::toJson(masterInstanceId_);
    }
    if(slaveInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("slave_instance_id")] = ModelBase::toJson(slaveInstanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(dataSyncIndicatorsIsSet_) {
        val[utility::conversions::to_string_t("data_sync_indicators")] = ModelBase::toJson(dataSyncIndicators_);
    }
    if(rtoAndRpoIndicatorsIsSet_) {
        val[utility::conversions::to_string_t("rto_and_rpo_indicators")] = ModelBase::toJson(rtoAndRpoIndicators_);
    }

    return val;
}
bool ShowPauseResumeStutusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("master_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_sync_indicators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_sync_indicators"));
        if(!fieldValue.is_null())
        {
            NoSQLDrDateSyncIndicators refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSyncIndicators(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto_and_rpo_indicators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto_and_rpo_indicators"));
        if(!fieldValue.is_null())
        {
            std::vector<NoSQLDrRpoAndRto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtoAndRpoIndicators(refVal);
        }
    }
    return ok;
}


std::string ShowPauseResumeStutusResponse::getMasterInstanceId() const
{
    return masterInstanceId_;
}

void ShowPauseResumeStutusResponse::setMasterInstanceId(const std::string& value)
{
    masterInstanceId_ = value;
    masterInstanceIdIsSet_ = true;
}

bool ShowPauseResumeStutusResponse::masterInstanceIdIsSet() const
{
    return masterInstanceIdIsSet_;
}

void ShowPauseResumeStutusResponse::unsetmasterInstanceId()
{
    masterInstanceIdIsSet_ = false;
}

std::string ShowPauseResumeStutusResponse::getSlaveInstanceId() const
{
    return slaveInstanceId_;
}

void ShowPauseResumeStutusResponse::setSlaveInstanceId(const std::string& value)
{
    slaveInstanceId_ = value;
    slaveInstanceIdIsSet_ = true;
}

bool ShowPauseResumeStutusResponse::slaveInstanceIdIsSet() const
{
    return slaveInstanceIdIsSet_;
}

void ShowPauseResumeStutusResponse::unsetslaveInstanceId()
{
    slaveInstanceIdIsSet_ = false;
}

std::string ShowPauseResumeStutusResponse::getStatus() const
{
    return status_;
}

void ShowPauseResumeStutusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPauseResumeStutusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPauseResumeStutusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

NoSQLDrDateSyncIndicators ShowPauseResumeStutusResponse::getDataSyncIndicators() const
{
    return dataSyncIndicators_;
}

void ShowPauseResumeStutusResponse::setDataSyncIndicators(const NoSQLDrDateSyncIndicators& value)
{
    dataSyncIndicators_ = value;
    dataSyncIndicatorsIsSet_ = true;
}

bool ShowPauseResumeStutusResponse::dataSyncIndicatorsIsSet() const
{
    return dataSyncIndicatorsIsSet_;
}

void ShowPauseResumeStutusResponse::unsetdataSyncIndicators()
{
    dataSyncIndicatorsIsSet_ = false;
}

std::vector<NoSQLDrRpoAndRto>& ShowPauseResumeStutusResponse::getRtoAndRpoIndicators()
{
    return rtoAndRpoIndicators_;
}

void ShowPauseResumeStutusResponse::setRtoAndRpoIndicators(const std::vector<NoSQLDrRpoAndRto>& value)
{
    rtoAndRpoIndicators_ = value;
    rtoAndRpoIndicatorsIsSet_ = true;
}

bool ShowPauseResumeStutusResponse::rtoAndRpoIndicatorsIsSet() const
{
    return rtoAndRpoIndicatorsIsSet_;
}

void ShowPauseResumeStutusResponse::unsetrtoAndRpoIndicators()
{
    rtoAndRpoIndicatorsIsSet_ = false;
}

}
}
}
}
}


