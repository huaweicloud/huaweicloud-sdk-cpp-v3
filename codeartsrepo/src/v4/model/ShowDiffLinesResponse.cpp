

#include "huaweicloud/codeartsrepo/v4/model/ShowDiffLinesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowDiffLinesResponse::ShowDiffLinesResponse()
{
    text_ = "";
    textIsSet_ = false;
}

ShowDiffLinesResponse::~ShowDiffLinesResponse() = default;

void ShowDiffLinesResponse::validate()
{
}

web::json::value ShowDiffLinesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool ShowDiffLinesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    return ok;
}


std::string ShowDiffLinesResponse::getText() const
{
    return text_;
}

void ShowDiffLinesResponse::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool ShowDiffLinesResponse::textIsSet() const
{
    return textIsSet_;
}

void ShowDiffLinesResponse::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


