

#include "huaweicloud/cdn/v2/model/ShowAppliedTemplateRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowAppliedTemplateRecordResponse::ShowAppliedTemplateRecordResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    elementsIsSet_ = false;
}

ShowAppliedTemplateRecordResponse::~ShowAppliedTemplateRecordResponse() = default;

void ShowAppliedTemplateRecordResponse::validate()
{
}

web::json::value ShowAppliedTemplateRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(elementsIsSet_) {
        val[utility::conversions::to_string_t("elements")] = ModelBase::toJson(elements_);
    }

    return val;
}
bool ShowAppliedTemplateRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elements"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplyRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElements(refVal);
        }
    }
    return ok;
}


int32_t ShowAppliedTemplateRecordResponse::getTotal() const
{
    return total_;
}

void ShowAppliedTemplateRecordResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowAppliedTemplateRecordResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowAppliedTemplateRecordResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ApplyRecord>& ShowAppliedTemplateRecordResponse::getElements()
{
    return elements_;
}

void ShowAppliedTemplateRecordResponse::setElements(const std::vector<ApplyRecord>& value)
{
    elements_ = value;
    elementsIsSet_ = true;
}

bool ShowAppliedTemplateRecordResponse::elementsIsSet() const
{
    return elementsIsSet_;
}

void ShowAppliedTemplateRecordResponse::unsetelements()
{
    elementsIsSet_ = false;
}

}
}
}
}
}


