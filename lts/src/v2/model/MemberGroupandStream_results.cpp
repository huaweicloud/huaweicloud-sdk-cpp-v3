

#include "huaweicloud/lts/v2/model/MemberGroupandStream_results.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




MemberGroupandStream_results::MemberGroupandStream_results()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamsIsSet_ = false;
}

MemberGroupandStream_results::~MemberGroupandStream_results() = default;

void MemberGroupandStream_results::validate()
{
}

web::json::value MemberGroupandStream_results::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamsIsSet_) {
        val[utility::conversions::to_string_t("log_streams")] = ModelBase::toJson(logStreams_);
    }

    return val;
}

bool MemberGroupandStream_results::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_streams"));
        if(!fieldValue.is_null())
        {
            std::vector<MemberGroupandStream_log_streams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreams(refVal);
        }
    }
    return ok;
}

std::string MemberGroupandStream_results::getLogGroupId() const
{
    return logGroupId_;
}

void MemberGroupandStream_results::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool MemberGroupandStream_results::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void MemberGroupandStream_results::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string MemberGroupandStream_results::getLogGroupName() const
{
    return logGroupName_;
}

void MemberGroupandStream_results::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool MemberGroupandStream_results::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void MemberGroupandStream_results::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::vector<MemberGroupandStream_log_streams>& MemberGroupandStream_results::getLogStreams()
{
    return logStreams_;
}

void MemberGroupandStream_results::setLogStreams(const std::vector<MemberGroupandStream_log_streams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool MemberGroupandStream_results::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void MemberGroupandStream_results::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

}
}
}
}
}


