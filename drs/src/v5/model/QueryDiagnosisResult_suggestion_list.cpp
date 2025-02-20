

#include "huaweicloud/drs/v5/model/QueryDiagnosisResult_suggestion_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDiagnosisResult_suggestion_list::QueryDiagnosisResult_suggestion_list()
{
    content_ = "";
    contentIsSet_ = false;
}

QueryDiagnosisResult_suggestion_list::~QueryDiagnosisResult_suggestion_list() = default;

void QueryDiagnosisResult_suggestion_list::validate()
{
}

web::json::value QueryDiagnosisResult_suggestion_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool QueryDiagnosisResult_suggestion_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string QueryDiagnosisResult_suggestion_list::getContent() const
{
    return content_;
}

void QueryDiagnosisResult_suggestion_list::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool QueryDiagnosisResult_suggestion_list::contentIsSet() const
{
    return contentIsSet_;
}

void QueryDiagnosisResult_suggestion_list::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


