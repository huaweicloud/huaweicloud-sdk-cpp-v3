

#include "huaweicloud/tics/v1/model/ShowOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowOverviewResponse::ShowOverviewResponse()
{
    agentCnt_ = 0L;
    agentCntIsSet_ = false;
    instanceCnt_ = 0L;
    instanceCntIsSet_ = false;
    leagueCnt_ = 0L;
    leagueCntIsSet_ = false;
    noticeToHandleCnt_ = 0L;
    noticeToHandleCntIsSet_ = false;
}

ShowOverviewResponse::~ShowOverviewResponse() = default;

void ShowOverviewResponse::validate()
{
}

web::json::value ShowOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentCntIsSet_) {
        val[utility::conversions::to_string_t("agent_cnt")] = ModelBase::toJson(agentCnt_);
    }
    if(instanceCntIsSet_) {
        val[utility::conversions::to_string_t("instance_cnt")] = ModelBase::toJson(instanceCnt_);
    }
    if(leagueCntIsSet_) {
        val[utility::conversions::to_string_t("league_cnt")] = ModelBase::toJson(leagueCnt_);
    }
    if(noticeToHandleCntIsSet_) {
        val[utility::conversions::to_string_t("notice_to_handle_cnt")] = ModelBase::toJson(noticeToHandleCnt_);
    }

    return val;
}
bool ShowOverviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notice_to_handle_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notice_to_handle_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoticeToHandleCnt(refVal);
        }
    }
    return ok;
}


int64_t ShowOverviewResponse::getAgentCnt() const
{
    return agentCnt_;
}

void ShowOverviewResponse::setAgentCnt(int64_t value)
{
    agentCnt_ = value;
    agentCntIsSet_ = true;
}

bool ShowOverviewResponse::agentCntIsSet() const
{
    return agentCntIsSet_;
}

void ShowOverviewResponse::unsetagentCnt()
{
    agentCntIsSet_ = false;
}

int64_t ShowOverviewResponse::getInstanceCnt() const
{
    return instanceCnt_;
}

void ShowOverviewResponse::setInstanceCnt(int64_t value)
{
    instanceCnt_ = value;
    instanceCntIsSet_ = true;
}

bool ShowOverviewResponse::instanceCntIsSet() const
{
    return instanceCntIsSet_;
}

void ShowOverviewResponse::unsetinstanceCnt()
{
    instanceCntIsSet_ = false;
}

int64_t ShowOverviewResponse::getLeagueCnt() const
{
    return leagueCnt_;
}

void ShowOverviewResponse::setLeagueCnt(int64_t value)
{
    leagueCnt_ = value;
    leagueCntIsSet_ = true;
}

bool ShowOverviewResponse::leagueCntIsSet() const
{
    return leagueCntIsSet_;
}

void ShowOverviewResponse::unsetleagueCnt()
{
    leagueCntIsSet_ = false;
}

int64_t ShowOverviewResponse::getNoticeToHandleCnt() const
{
    return noticeToHandleCnt_;
}

void ShowOverviewResponse::setNoticeToHandleCnt(int64_t value)
{
    noticeToHandleCnt_ = value;
    noticeToHandleCntIsSet_ = true;
}

bool ShowOverviewResponse::noticeToHandleCntIsSet() const
{
    return noticeToHandleCntIsSet_;
}

void ShowOverviewResponse::unsetnoticeToHandleCnt()
{
    noticeToHandleCntIsSet_ = false;
}

}
}
}
}
}


