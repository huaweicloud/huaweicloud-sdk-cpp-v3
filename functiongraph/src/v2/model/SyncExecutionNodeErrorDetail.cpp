

#include "huaweicloud/functiongraph/v2/model/SyncExecutionNodeErrorDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




SyncExecutionNodeErrorDetail::SyncExecutionNodeErrorDetail()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

SyncExecutionNodeErrorDetail::~SyncExecutionNodeErrorDetail() = default;

void SyncExecutionNodeErrorDetail::validate()
{
}

web::json::value SyncExecutionNodeErrorDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool SyncExecutionNodeErrorDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    return ok;
}


std::string SyncExecutionNodeErrorDetail::getNodeId() const
{
    return nodeId_;
}

void SyncExecutionNodeErrorDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SyncExecutionNodeErrorDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SyncExecutionNodeErrorDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SyncExecutionNodeErrorDetail::getErrorMessage() const
{
    return errorMessage_;
}

void SyncExecutionNodeErrorDetail::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool SyncExecutionNodeErrorDetail::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void SyncExecutionNodeErrorDetail::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

std::string SyncExecutionNodeErrorDetail::getBeginTime() const
{
    return beginTime_;
}

void SyncExecutionNodeErrorDetail::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SyncExecutionNodeErrorDetail::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SyncExecutionNodeErrorDetail::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SyncExecutionNodeErrorDetail::getEndTime() const
{
    return endTime_;
}

void SyncExecutionNodeErrorDetail::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SyncExecutionNodeErrorDetail::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SyncExecutionNodeErrorDetail::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


