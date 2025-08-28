

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeLibraryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeLibraryReq::UpdateKnowledgeLibraryReq()
{
    name_ = "";
    nameIsSet_ = false;
    topk_ = 0;
    topkIsSet_ = false;
    score_ = 0.0;
    scoreIsSet_ = false;
}

UpdateKnowledgeLibraryReq::~UpdateKnowledgeLibraryReq() = default;

void UpdateKnowledgeLibraryReq::validate()
{
}

web::json::value UpdateKnowledgeLibraryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(topkIsSet_) {
        val[utility::conversions::to_string_t("topk")] = ModelBase::toJson(topk_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }

    return val;
}
bool UpdateKnowledgeLibraryReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string UpdateKnowledgeLibraryReq::getName() const
{
    return name_;
}

void UpdateKnowledgeLibraryReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateKnowledgeLibraryReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateKnowledgeLibraryReq::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateKnowledgeLibraryReq::getTopk() const
{
    return topk_;
}

void UpdateKnowledgeLibraryReq::setTopk(int32_t value)
{
    topk_ = value;
    topkIsSet_ = true;
}

bool UpdateKnowledgeLibraryReq::topkIsSet() const
{
    return topkIsSet_;
}

void UpdateKnowledgeLibraryReq::unsettopk()
{
    topkIsSet_ = false;
}

double UpdateKnowledgeLibraryReq::getScore() const
{
    return score_;
}

void UpdateKnowledgeLibraryReq::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool UpdateKnowledgeLibraryReq::scoreIsSet() const
{
    return scoreIsSet_;
}

void UpdateKnowledgeLibraryReq::unsetscore()
{
    scoreIsSet_ = false;
}

}
}
}
}
}


