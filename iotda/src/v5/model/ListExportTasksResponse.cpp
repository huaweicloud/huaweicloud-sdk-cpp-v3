

#include "huaweicloud/iotda/v5/model/ListExportTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListExportTasksResponse::ListExportTasksResponse()
{
    exportTasksIsSet_ = false;
    pageIsSet_ = false;
}

ListExportTasksResponse::~ListExportTasksResponse() = default;

void ListExportTasksResponse::validate()
{
}

web::json::value ListExportTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(exportTasksIsSet_) {
        val[utility::conversions::to_string_t("export_tasks")] = ModelBase::toJson(exportTasks_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListExportTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("export_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ExportTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportTasks(refVal);
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


std::vector<ExportTask>& ListExportTasksResponse::getExportTasks()
{
    return exportTasks_;
}

void ListExportTasksResponse::setExportTasks(const std::vector<ExportTask>& value)
{
    exportTasks_ = value;
    exportTasksIsSet_ = true;
}

bool ListExportTasksResponse::exportTasksIsSet() const
{
    return exportTasksIsSet_;
}

void ListExportTasksResponse::unsetexportTasks()
{
    exportTasksIsSet_ = false;
}

Page ListExportTasksResponse::getPage() const
{
    return page_;
}

void ListExportTasksResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListExportTasksResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListExportTasksResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


