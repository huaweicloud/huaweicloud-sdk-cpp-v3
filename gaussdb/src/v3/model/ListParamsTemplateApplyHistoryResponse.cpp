

#include "huaweicloud/gaussdb/v3/model/ListParamsTemplateApplyHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListParamsTemplateApplyHistoryResponse::ListParamsTemplateApplyHistoryResponse()
{
    totalCount_ = "";
    totalCountIsSet_ = false;
    historiesIsSet_ = false;
}

ListParamsTemplateApplyHistoryResponse::~ListParamsTemplateApplyHistoryResponse() = default;

void ListParamsTemplateApplyHistoryResponse::validate()
{
}

web::json::value ListParamsTemplateApplyHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}
bool ListParamsTemplateApplyHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateApplyHistory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


std::string ListParamsTemplateApplyHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ListParamsTemplateApplyHistoryResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListParamsTemplateApplyHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListParamsTemplateApplyHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<TemplateApplyHistory>& ListParamsTemplateApplyHistoryResponse::getHistories()
{
    return histories_;
}

void ListParamsTemplateApplyHistoryResponse::setHistories(const std::vector<TemplateApplyHistory>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListParamsTemplateApplyHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListParamsTemplateApplyHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


