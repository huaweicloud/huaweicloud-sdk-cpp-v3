

#include "huaweicloud/metastudio/v1/model/UpdateHotQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotQuestionReq::UpdateHotQuestionReq()
{
    hotQuestion_ = "";
    hotQuestionIsSet_ = false;
}

UpdateHotQuestionReq::~UpdateHotQuestionReq() = default;

void UpdateHotQuestionReq::validate()
{
}

web::json::value UpdateHotQuestionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotQuestionIsSet_) {
        val[utility::conversions::to_string_t("hot_question")] = ModelBase::toJson(hotQuestion_);
    }

    return val;
}
bool UpdateHotQuestionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hot_question"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_question"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotQuestion(refVal);
        }
    }
    return ok;
}


std::string UpdateHotQuestionReq::getHotQuestion() const
{
    return hotQuestion_;
}

void UpdateHotQuestionReq::setHotQuestion(const std::string& value)
{
    hotQuestion_ = value;
    hotQuestionIsSet_ = true;
}

bool UpdateHotQuestionReq::hotQuestionIsSet() const
{
    return hotQuestionIsSet_;
}

void UpdateHotQuestionReq::unsethotQuestion()
{
    hotQuestionIsSet_ = false;
}

}
}
}
}
}


