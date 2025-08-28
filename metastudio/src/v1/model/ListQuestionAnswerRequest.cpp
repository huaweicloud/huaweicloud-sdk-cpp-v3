

#include "huaweicloud/metastudio/v1/model/ListQuestionAnswerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListQuestionAnswerRequest::ListQuestionAnswerRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    question_ = "";
    questionIsSet_ = false;
}

ListQuestionAnswerRequest::~ListQuestionAnswerRequest() = default;

void ListQuestionAnswerRequest::validate()
{
}

web::json::value ListQuestionAnswerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }

    return val;
}
bool ListQuestionAnswerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("question"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestion(refVal);
        }
    }
    return ok;
}


std::string ListQuestionAnswerRequest::getAuthorization() const
{
    return authorization_;
}

void ListQuestionAnswerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListQuestionAnswerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListQuestionAnswerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListQuestionAnswerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListQuestionAnswerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListQuestionAnswerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListQuestionAnswerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListQuestionAnswerRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListQuestionAnswerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListQuestionAnswerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListQuestionAnswerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListQuestionAnswerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListQuestionAnswerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListQuestionAnswerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListQuestionAnswerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListQuestionAnswerRequest::getOffset() const
{
    return offset_;
}

void ListQuestionAnswerRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListQuestionAnswerRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListQuestionAnswerRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListQuestionAnswerRequest::getLimit() const
{
    return limit_;
}

void ListQuestionAnswerRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListQuestionAnswerRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListQuestionAnswerRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListQuestionAnswerRequest::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void ListQuestionAnswerRequest::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool ListQuestionAnswerRequest::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void ListQuestionAnswerRequest::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string ListQuestionAnswerRequest::getQuestion() const
{
    return question_;
}

void ListQuestionAnswerRequest::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool ListQuestionAnswerRequest::questionIsSet() const
{
    return questionIsSet_;
}

void ListQuestionAnswerRequest::unsetquestion()
{
    questionIsSet_ = false;
}

}
}
}
}
}


