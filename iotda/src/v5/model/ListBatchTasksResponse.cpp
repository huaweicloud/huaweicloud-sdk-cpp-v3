

#include "huaweicloud/iotda/v5/model/ListBatchTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListBatchTasksResponse::ListBatchTasksResponse()
{
    batchtasksIsSet_ = false;
    pageIsSet_ = false;
}

ListBatchTasksResponse::~ListBatchTasksResponse() = default;

void ListBatchTasksResponse::validate()
{
}

web::json::value ListBatchTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchtasksIsSet_) {
        val[utility::conversions::to_string_t("batchtasks")] = ModelBase::toJson(batchtasks_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListBatchTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batchtasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batchtasks"));
        if(!fieldValue.is_null())
        {
            std::vector<Task> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchtasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<Task>& ListBatchTasksResponse::getBatchtasks()
{
    return batchtasks_;
}

void ListBatchTasksResponse::setBatchtasks(const std::vector<Task>& value)
{
    batchtasks_ = value;
    batchtasksIsSet_ = true;
}

bool ListBatchTasksResponse::batchtasksIsSet() const
{
    return batchtasksIsSet_;
}

void ListBatchTasksResponse::unsetbatchtasks()
{
    batchtasksIsSet_ = false;
}

Page ListBatchTasksResponse::getPage() const
{
    return page_;
}

void ListBatchTasksResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListBatchTasksResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListBatchTasksResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


