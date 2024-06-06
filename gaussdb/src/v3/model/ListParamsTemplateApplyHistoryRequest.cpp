

#include "huaweicloud/gaussdb/v3/model/ListParamsTemplateApplyHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListParamsTemplateApplyHistoryRequest::ListParamsTemplateApplyHistoryRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListParamsTemplateApplyHistoryRequest::~ListParamsTemplateApplyHistoryRequest() = default;

void ListParamsTemplateApplyHistoryRequest::validate()
{
}

web::json::value ListParamsTemplateApplyHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListParamsTemplateApplyHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListParamsTemplateApplyHistoryRequest::getConfigId() const
{
    return configId_;
}

void ListParamsTemplateApplyHistoryRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ListParamsTemplateApplyHistoryRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ListParamsTemplateApplyHistoryRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ListParamsTemplateApplyHistoryRequest::getLimit() const
{
    return limit_;
}

void ListParamsTemplateApplyHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListParamsTemplateApplyHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListParamsTemplateApplyHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListParamsTemplateApplyHistoryRequest::getOffset() const
{
    return offset_;
}

void ListParamsTemplateApplyHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListParamsTemplateApplyHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListParamsTemplateApplyHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


