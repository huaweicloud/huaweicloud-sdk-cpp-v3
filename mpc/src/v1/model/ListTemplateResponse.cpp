

#include "huaweicloud/mpc/v1/model/ListTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListTemplateResponse::ListTemplateResponse()
{
    templateArrayIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTemplateResponse::~ListTemplateResponse() = default;

void ListTemplateResponse::validate()
{
}

web::json::value ListTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateArrayIsSet_) {
        val[utility::conversions::to_string_t("template_array")] = ModelBase::toJson(templateArray_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_array"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateArray(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TemplateInfo>& ListTemplateResponse::getTemplateArray()
{
    return templateArray_;
}

void ListTemplateResponse::setTemplateArray(const std::vector<TemplateInfo>& value)
{
    templateArray_ = value;
    templateArrayIsSet_ = true;
}

bool ListTemplateResponse::templateArrayIsSet() const
{
    return templateArrayIsSet_;
}

void ListTemplateResponse::unsettemplateArray()
{
    templateArrayIsSet_ = false;
}

int32_t ListTemplateResponse::getTotal() const
{
    return total_;
}

void ListTemplateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTemplateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTemplateResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


