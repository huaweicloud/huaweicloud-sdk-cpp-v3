
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBatchTasksResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBatchTasksResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/Task.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListBatchTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBatchTasksResponse();
    virtual ~ListBatchTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBatchTasksResponse members

    /// <summary>
    /// 批量任务列表。
    /// </summary>

    std::vector<Task>& getBatchtasks();
    bool batchtasksIsSet() const;
    void unsetbatchtasks();
    void setBatchtasks(const std::vector<Task>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<Task> batchtasks_;
    bool batchtasksIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBatchTasksResponse_H_
