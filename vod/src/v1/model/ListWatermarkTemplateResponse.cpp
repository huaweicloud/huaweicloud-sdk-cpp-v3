

#include "huaweicloud/vod/v1/model/ListWatermarkTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListWatermarkTemplateResponse::ListWatermarkTemplateResponse()
{
    templatesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListWatermarkTemplateResponse::~ListWatermarkTemplateResponse() = default;

void ListWatermarkTemplateResponse::validate()
{
}

web::json::value ListWatermarkTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListWatermarkTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<WatermarkTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
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


std::vector<WatermarkTemplate>& ListWatermarkTemplateResponse::getTemplates()
{
    return templates_;
}

void ListWatermarkTemplateResponse::setTemplates(const std::vector<WatermarkTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListWatermarkTemplateResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListWatermarkTemplateResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

int32_t ListWatermarkTemplateResponse::getTotal() const
{
    return total_;
}

void ListWatermarkTemplateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWatermarkTemplateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWatermarkTemplateResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


