

#include "huaweicloud/cfw/v1/model/FlowAnalysisVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FlowAnalysisVO::FlowAnalysisVO()
{
    appCount_ = 0L;
    appCountIsSet_ = false;
    bytes_ = 0.0;
    bytesIsSet_ = false;
    dstIpCount_ = 0L;
    dstIpCountIsSet_ = false;
    dstPortCount_ = 0L;
    dstPortCountIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    recordsIsSet_ = false;
    requestByte_ = 0.0;
    requestByteIsSet_ = false;
    responseByte_ = 0.0;
    responseByteIsSet_ = false;
    sessions_ = 0L;
    sessionsIsSet_ = false;
    srcIpCount_ = 0L;
    srcIpCountIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
}

FlowAnalysisVO::~FlowAnalysisVO() = default;

void FlowAnalysisVO::validate()
{
}

web::json::value FlowAnalysisVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appCountIsSet_) {
        val[utility::conversions::to_string_t("app_count")] = ModelBase::toJson(appCount_);
    }
    if(bytesIsSet_) {
        val[utility::conversions::to_string_t("bytes")] = ModelBase::toJson(bytes_);
    }
    if(dstIpCountIsSet_) {
        val[utility::conversions::to_string_t("dst_ip_count")] = ModelBase::toJson(dstIpCount_);
    }
    if(dstPortCountIsSet_) {
        val[utility::conversions::to_string_t("dst_port_count")] = ModelBase::toJson(dstPortCount_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(requestByteIsSet_) {
        val[utility::conversions::to_string_t("request_byte")] = ModelBase::toJson(requestByte_);
    }
    if(responseByteIsSet_) {
        val[utility::conversions::to_string_t("response_byte")] = ModelBase::toJson(responseByte_);
    }
    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }
    if(srcIpCountIsSet_) {
        val[utility::conversions::to_string_t("src_ip_count")] = ModelBase::toJson(srcIpCount_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool FlowAnalysisVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIpCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPortCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<SessionVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_byte"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_byte"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestByte(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_byte"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_byte"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseByte(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessions"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIpCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


int64_t FlowAnalysisVO::getAppCount() const
{
    return appCount_;
}

void FlowAnalysisVO::setAppCount(int64_t value)
{
    appCount_ = value;
    appCountIsSet_ = true;
}

bool FlowAnalysisVO::appCountIsSet() const
{
    return appCountIsSet_;
}

void FlowAnalysisVO::unsetappCount()
{
    appCountIsSet_ = false;
}

double FlowAnalysisVO::getBytes() const
{
    return bytes_;
}

void FlowAnalysisVO::setBytes(double value)
{
    bytes_ = value;
    bytesIsSet_ = true;
}

bool FlowAnalysisVO::bytesIsSet() const
{
    return bytesIsSet_;
}

void FlowAnalysisVO::unsetbytes()
{
    bytesIsSet_ = false;
}

int64_t FlowAnalysisVO::getDstIpCount() const
{
    return dstIpCount_;
}

void FlowAnalysisVO::setDstIpCount(int64_t value)
{
    dstIpCount_ = value;
    dstIpCountIsSet_ = true;
}

bool FlowAnalysisVO::dstIpCountIsSet() const
{
    return dstIpCountIsSet_;
}

void FlowAnalysisVO::unsetdstIpCount()
{
    dstIpCountIsSet_ = false;
}

int64_t FlowAnalysisVO::getDstPortCount() const
{
    return dstPortCount_;
}

void FlowAnalysisVO::setDstPortCount(int64_t value)
{
    dstPortCount_ = value;
    dstPortCountIsSet_ = true;
}

bool FlowAnalysisVO::dstPortCountIsSet() const
{
    return dstPortCountIsSet_;
}

void FlowAnalysisVO::unsetdstPortCount()
{
    dstPortCountIsSet_ = false;
}

int64_t FlowAnalysisVO::getEndTime() const
{
    return endTime_;
}

void FlowAnalysisVO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool FlowAnalysisVO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void FlowAnalysisVO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<SessionVO>& FlowAnalysisVO::getRecords()
{
    return records_;
}

void FlowAnalysisVO::setRecords(const std::vector<SessionVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool FlowAnalysisVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void FlowAnalysisVO::unsetrecords()
{
    recordsIsSet_ = false;
}

double FlowAnalysisVO::getRequestByte() const
{
    return requestByte_;
}

void FlowAnalysisVO::setRequestByte(double value)
{
    requestByte_ = value;
    requestByteIsSet_ = true;
}

bool FlowAnalysisVO::requestByteIsSet() const
{
    return requestByteIsSet_;
}

void FlowAnalysisVO::unsetrequestByte()
{
    requestByteIsSet_ = false;
}

double FlowAnalysisVO::getResponseByte() const
{
    return responseByte_;
}

void FlowAnalysisVO::setResponseByte(double value)
{
    responseByte_ = value;
    responseByteIsSet_ = true;
}

bool FlowAnalysisVO::responseByteIsSet() const
{
    return responseByteIsSet_;
}

void FlowAnalysisVO::unsetresponseByte()
{
    responseByteIsSet_ = false;
}

int64_t FlowAnalysisVO::getSessions() const
{
    return sessions_;
}

void FlowAnalysisVO::setSessions(int64_t value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool FlowAnalysisVO::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void FlowAnalysisVO::unsetsessions()
{
    sessionsIsSet_ = false;
}

int64_t FlowAnalysisVO::getSrcIpCount() const
{
    return srcIpCount_;
}

void FlowAnalysisVO::setSrcIpCount(int64_t value)
{
    srcIpCount_ = value;
    srcIpCountIsSet_ = true;
}

bool FlowAnalysisVO::srcIpCountIsSet() const
{
    return srcIpCountIsSet_;
}

void FlowAnalysisVO::unsetsrcIpCount()
{
    srcIpCountIsSet_ = false;
}

int64_t FlowAnalysisVO::getStartTime() const
{
    return startTime_;
}

void FlowAnalysisVO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool FlowAnalysisVO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void FlowAnalysisVO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


