

#include "huaweicloud/cdn/v2/model/ListExportTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListExportTasksResponse::ListExportTasksResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListExportTasksResponse::~ListExportTasksResponse() = default;

void ListExportTasksResponse::validate()
{
}

web::json::value ListExportTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListExportTasksResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ExportTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListExportTasksResponse::getTotal() const
{
    return total_;
}

void ListExportTasksResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListExportTasksResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListExportTasksResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ExportTask>& ListExportTasksResponse::getData()
{
    return data_;
}

void ListExportTasksResponse::setData(const std::vector<ExportTask>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListExportTasksResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListExportTasksResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


