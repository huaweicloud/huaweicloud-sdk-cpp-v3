

#include "huaweicloud/functiongraph/v2/model/ListFunctionTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTemplateResponse::ListFunctionTemplateResponse()
{
    funcTemplatesIsSet_ = false;
    nextMarker_ = 0;
    nextMarkerIsSet_ = false;
}

ListFunctionTemplateResponse::~ListFunctionTemplateResponse() = default;

void ListFunctionTemplateResponse::validate()
{
}

web::json::value ListFunctionTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcTemplatesIsSet_) {
        val[utility::conversions::to_string_t("func_templates")] = ModelBase::toJson(funcTemplates_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool ListFunctionTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowFunctionTemplateResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


std::vector<ShowFunctionTemplateResponseBody>& ListFunctionTemplateResponse::getFuncTemplates()
{
    return funcTemplates_;
}

void ListFunctionTemplateResponse::setFuncTemplates(const std::vector<ShowFunctionTemplateResponseBody>& value)
{
    funcTemplates_ = value;
    funcTemplatesIsSet_ = true;
}

bool ListFunctionTemplateResponse::funcTemplatesIsSet() const
{
    return funcTemplatesIsSet_;
}

void ListFunctionTemplateResponse::unsetfuncTemplates()
{
    funcTemplatesIsSet_ = false;
}

int32_t ListFunctionTemplateResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListFunctionTemplateResponse::setNextMarker(int32_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListFunctionTemplateResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListFunctionTemplateResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


