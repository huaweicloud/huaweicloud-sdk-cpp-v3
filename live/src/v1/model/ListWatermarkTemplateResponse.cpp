

#include "huaweicloud/live/v1/model/ListWatermarkTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListWatermarkTemplateResponse::ListWatermarkTemplateResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    templateInfosIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListWatermarkTemplateResponse::~ListWatermarkTemplateResponse() = default;

void ListWatermarkTemplateResponse::validate()
{
}

web::json::value ListWatermarkTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(templateInfosIsSet_) {
        val[utility::conversions::to_string_t("template_infos")] = ModelBase::toJson(templateInfos_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListWatermarkTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<WatermarkTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
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

std::vector<WatermarkTemplate>& ListWatermarkTemplateResponse::getTemplateInfos()
{
    return templateInfos_;
}

void ListWatermarkTemplateResponse::setTemplateInfos(const std::vector<WatermarkTemplate>& value)
{
    templateInfos_ = value;
    templateInfosIsSet_ = true;
}

bool ListWatermarkTemplateResponse::templateInfosIsSet() const
{
    return templateInfosIsSet_;
}

void ListWatermarkTemplateResponse::unsettemplateInfos()
{
    templateInfosIsSet_ = false;
}

std::string ListWatermarkTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListWatermarkTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListWatermarkTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListWatermarkTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


