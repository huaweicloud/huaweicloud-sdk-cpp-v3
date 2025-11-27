
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListExportTasksResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListExportTasksResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>
#include <huaweicloud/iotda/v5/model/ExportTask.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListExportTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListExportTasksResponse();
    virtual ~ListExportTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExportTasksResponse members

    /// <summary>
    /// 导出任务列表。
    /// </summary>

    std::vector<ExportTask>& getExportTasks();
    bool exportTasksIsSet() const;
    void unsetexportTasks();
    void setExportTasks(const std::vector<ExportTask>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<ExportTask> exportTasks_;
    bool exportTasksIsSet_;
    Page page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListExportTasksResponse_H_
