

#include "huaweicloud/metastudio/v1/model/JobState.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



JobState::JobState()
{
}

JobState::~JobState()
{
}

void JobState::validate()
{
}

web::json::value JobState::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eJobState::JobState_CREATING) val = web::json::value::string(U("CREATING"));
    if (value_ == eJobState::JobState_SYSTEM_AUDITING) val = web::json::value::string(U("SYSTEM_AUDITING"));
    if (value_ == eJobState::JobState_AUDITING) val = web::json::value::string(U("AUDITING"));
    if (value_ == eJobState::JobState_WAITING_SPLIT) val = web::json::value::string(U("WAITING_SPLIT"));
    if (value_ == eJobState::JobState_SPLITTING) val = web::json::value::string(U("SPLITTING"));
    if (value_ == eJobState::JobState_SPLIT_FAILED) val = web::json::value::string(U("SPLIT_FAILED"));
    if (value_ == eJobState::JobState_ANNOTATING) val = web::json::value::string(U("ANNOTATING"));
    if (value_ == eJobState::JobState_WAITING) val = web::json::value::string(U("WAITING"));
    if (value_ == eJobState::JobState_PROCESSING) val = web::json::value::string(U("PROCESSING"));
    if (value_ == eJobState::JobState_RESULT_REVIEW) val = web::json::value::string(U("RESULT_REVIEW"));
    if (value_ == eJobState::JobState_AUDIT_FAILED) val = web::json::value::string(U("AUDIT_FAILED"));
    if (value_ == eJobState::JobState_USER_RESULT_REVIEW) val = web::json::value::string(U("USER_RESULT_REVIEW"));
    if (value_ == eJobState::JobState_USER_REVIEW_REJECT) val = web::json::value::string(U("USER_REVIEW_REJECT"));
    if (value_ == eJobState::JobState_UPLOADING) val = web::json::value::string(U("UPLOADING"));
    if (value_ == eJobState::JobState_FAILED) val = web::json::value::string(U("FAILED"));
    if (value_ == eJobState::JobState_SUCCEED) val = web::json::value::string(U("SUCCEED"));

    return val;
}

bool JobState::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("CREATING")) value_ = eJobState::JobState_CREATING;
    if (s == utility::conversions::to_string_t("SYSTEM_AUDITING")) value_ = eJobState::JobState_SYSTEM_AUDITING;
    if (s == utility::conversions::to_string_t("AUDITING")) value_ = eJobState::JobState_AUDITING;
    if (s == utility::conversions::to_string_t("WAITING_SPLIT")) value_ = eJobState::JobState_WAITING_SPLIT;
    if (s == utility::conversions::to_string_t("SPLITTING")) value_ = eJobState::JobState_SPLITTING;
    if (s == utility::conversions::to_string_t("SPLIT_FAILED")) value_ = eJobState::JobState_SPLIT_FAILED;
    if (s == utility::conversions::to_string_t("ANNOTATING")) value_ = eJobState::JobState_ANNOTATING;
    if (s == utility::conversions::to_string_t("WAITING")) value_ = eJobState::JobState_WAITING;
    if (s == utility::conversions::to_string_t("PROCESSING")) value_ = eJobState::JobState_PROCESSING;
    if (s == utility::conversions::to_string_t("RESULT_REVIEW")) value_ = eJobState::JobState_RESULT_REVIEW;
    if (s == utility::conversions::to_string_t("AUDIT_FAILED")) value_ = eJobState::JobState_AUDIT_FAILED;
    if (s == utility::conversions::to_string_t("USER_RESULT_REVIEW")) value_ = eJobState::JobState_USER_RESULT_REVIEW;
    if (s == utility::conversions::to_string_t("USER_REVIEW_REJECT")) value_ = eJobState::JobState_USER_REVIEW_REJECT;
    if (s == utility::conversions::to_string_t("UPLOADING")) value_ = eJobState::JobState_UPLOADING;
    if (s == utility::conversions::to_string_t("FAILED")) value_ = eJobState::JobState_FAILED;
    if (s == utility::conversions::to_string_t("SUCCEED")) value_ = eJobState::JobState_SUCCEED;
    return true;
}

JobState::eJobState JobState::getValue() const
{
   return value_;
}

void JobState::setValue(JobState::eJobState const value)
{
   value_ = value;
}


}
}
}
}
}


