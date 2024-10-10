

#include "huaweicloud/drs/v5/model/DdlAlarmResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DdlAlarmResp::DdlAlarmResp()
{
    seqno_ = 0L;
    seqnoIsSet_ = false;
    checkpoint_ = "";
    checkpointIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    ddlTimestamp_ = 0L;
    ddlTimestampIsSet_ = false;
    ddlText_ = "";
    ddlTextIsSet_ = false;
    exeResult_ = false;
    exeResultIsSet_ = false;
    recordTime_ = 0L;
    recordTimeIsSet_ = false;
    cleanTime_ = 0L;
    cleanTimeIsSet_ = false;
}

DdlAlarmResp::~DdlAlarmResp() = default;

void DdlAlarmResp::validate()
{
}

web::json::value DdlAlarmResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(seqnoIsSet_) {
        val[utility::conversions::to_string_t("seqno")] = ModelBase::toJson(seqno_);
    }
    if(checkpointIsSet_) {
        val[utility::conversions::to_string_t("checkpoint")] = ModelBase::toJson(checkpoint_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ddlTimestampIsSet_) {
        val[utility::conversions::to_string_t("ddl_timestamp")] = ModelBase::toJson(ddlTimestamp_);
    }
    if(ddlTextIsSet_) {
        val[utility::conversions::to_string_t("ddl_text")] = ModelBase::toJson(ddlText_);
    }
    if(exeResultIsSet_) {
        val[utility::conversions::to_string_t("exe_result")] = ModelBase::toJson(exeResult_);
    }
    if(recordTimeIsSet_) {
        val[utility::conversions::to_string_t("record_time")] = ModelBase::toJson(recordTime_);
    }
    if(cleanTimeIsSet_) {
        val[utility::conversions::to_string_t("clean_time")] = ModelBase::toJson(cleanTime_);
    }

    return val;
}
bool DdlAlarmResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("seqno"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seqno"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeqno(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exe_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exe_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExeResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clean_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanTime(refVal);
        }
    }
    return ok;
}


int64_t DdlAlarmResp::getSeqno() const
{
    return seqno_;
}

void DdlAlarmResp::setSeqno(int64_t value)
{
    seqno_ = value;
    seqnoIsSet_ = true;
}

bool DdlAlarmResp::seqnoIsSet() const
{
    return seqnoIsSet_;
}

void DdlAlarmResp::unsetseqno()
{
    seqnoIsSet_ = false;
}

std::string DdlAlarmResp::getCheckpoint() const
{
    return checkpoint_;
}

void DdlAlarmResp::setCheckpoint(const std::string& value)
{
    checkpoint_ = value;
    checkpointIsSet_ = true;
}

bool DdlAlarmResp::checkpointIsSet() const
{
    return checkpointIsSet_;
}

void DdlAlarmResp::unsetcheckpoint()
{
    checkpointIsSet_ = false;
}

int32_t DdlAlarmResp::getStatus() const
{
    return status_;
}

void DdlAlarmResp::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DdlAlarmResp::statusIsSet() const
{
    return statusIsSet_;
}

void DdlAlarmResp::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t DdlAlarmResp::getDdlTimestamp() const
{
    return ddlTimestamp_;
}

void DdlAlarmResp::setDdlTimestamp(int64_t value)
{
    ddlTimestamp_ = value;
    ddlTimestampIsSet_ = true;
}

bool DdlAlarmResp::ddlTimestampIsSet() const
{
    return ddlTimestampIsSet_;
}

void DdlAlarmResp::unsetddlTimestamp()
{
    ddlTimestampIsSet_ = false;
}

std::string DdlAlarmResp::getDdlText() const
{
    return ddlText_;
}

void DdlAlarmResp::setDdlText(const std::string& value)
{
    ddlText_ = value;
    ddlTextIsSet_ = true;
}

bool DdlAlarmResp::ddlTextIsSet() const
{
    return ddlTextIsSet_;
}

void DdlAlarmResp::unsetddlText()
{
    ddlTextIsSet_ = false;
}

bool DdlAlarmResp::isExeResult() const
{
    return exeResult_;
}

void DdlAlarmResp::setExeResult(bool value)
{
    exeResult_ = value;
    exeResultIsSet_ = true;
}

bool DdlAlarmResp::exeResultIsSet() const
{
    return exeResultIsSet_;
}

void DdlAlarmResp::unsetexeResult()
{
    exeResultIsSet_ = false;
}

int64_t DdlAlarmResp::getRecordTime() const
{
    return recordTime_;
}

void DdlAlarmResp::setRecordTime(int64_t value)
{
    recordTime_ = value;
    recordTimeIsSet_ = true;
}

bool DdlAlarmResp::recordTimeIsSet() const
{
    return recordTimeIsSet_;
}

void DdlAlarmResp::unsetrecordTime()
{
    recordTimeIsSet_ = false;
}

int64_t DdlAlarmResp::getCleanTime() const
{
    return cleanTime_;
}

void DdlAlarmResp::setCleanTime(int64_t value)
{
    cleanTime_ = value;
    cleanTimeIsSet_ = true;
}

bool DdlAlarmResp::cleanTimeIsSet() const
{
    return cleanTimeIsSet_;
}

void DdlAlarmResp::unsetcleanTime()
{
    cleanTimeIsSet_ = false;
}

}
}
}
}
}


