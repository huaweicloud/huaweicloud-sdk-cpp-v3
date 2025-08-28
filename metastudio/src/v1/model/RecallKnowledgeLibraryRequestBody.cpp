

#include "huaweicloud/metastudio/v1/model/RecallKnowledgeLibraryRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RecallKnowledgeLibraryRequestBody::RecallKnowledgeLibraryRequestBody()
{
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    knowledgeTypeIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    topk_ = 0;
    topkIsSet_ = false;
    score_ = 0.0;
    scoreIsSet_ = false;
}

RecallKnowledgeLibraryRequestBody::~RecallKnowledgeLibraryRequestBody() = default;

void RecallKnowledgeLibraryRequestBody::validate()
{
}

web::json::value RecallKnowledgeLibraryRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(knowledgeTypeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_type")] = ModelBase::toJson(knowledgeType_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(topkIsSet_) {
        val[utility::conversions::to_string_t("topk")] = ModelBase::toJson(topk_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }

    return val;
}
bool RecallKnowledgeLibraryRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_type"));
        if(!fieldValue.is_null())
        {
            KnowledgeTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    return ok;
}


std::string RecallKnowledgeLibraryRequestBody::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void RecallKnowledgeLibraryRequestBody::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool RecallKnowledgeLibraryRequestBody::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void RecallKnowledgeLibraryRequestBody::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

KnowledgeTypeEnum RecallKnowledgeLibraryRequestBody::getKnowledgeType() const
{
    return knowledgeType_;
}

void RecallKnowledgeLibraryRequestBody::setKnowledgeType(const KnowledgeTypeEnum& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool RecallKnowledgeLibraryRequestBody::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void RecallKnowledgeLibraryRequestBody::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

std::string RecallKnowledgeLibraryRequestBody::getQuery() const
{
    return query_;
}

void RecallKnowledgeLibraryRequestBody::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool RecallKnowledgeLibraryRequestBody::queryIsSet() const
{
    return queryIsSet_;
}

void RecallKnowledgeLibraryRequestBody::unsetquery()
{
    queryIsSet_ = false;
}

int32_t RecallKnowledgeLibraryRequestBody::getTopk() const
{
    return topk_;
}

void RecallKnowledgeLibraryRequestBody::setTopk(int32_t value)
{
    topk_ = value;
    topkIsSet_ = true;
}

bool RecallKnowledgeLibraryRequestBody::topkIsSet() const
{
    return topkIsSet_;
}

void RecallKnowledgeLibraryRequestBody::unsettopk()
{
    topkIsSet_ = false;
}

double RecallKnowledgeLibraryRequestBody::getScore() const
{
    return score_;
}

void RecallKnowledgeLibraryRequestBody::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool RecallKnowledgeLibraryRequestBody::scoreIsSet() const
{
    return scoreIsSet_;
}

void RecallKnowledgeLibraryRequestBody::unsetscore()
{
    scoreIsSet_ = false;
}

}
}
}
}
}


