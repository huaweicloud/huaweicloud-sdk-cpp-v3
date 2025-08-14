
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowBatchTaskResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowBatchTaskResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/Task.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>
#include <huaweicloud/iotda/v5/model/TaskDetail.h>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowBatchTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBatchTaskResponse();
    virtual ~ShowBatchTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBatchTaskResponse members

    /// <summary>
    /// 
    /// </summary>

    Task getBatchtask() const;
    bool batchtaskIsSet() const;
    void unsetbatchtask();
    void setBatchtask(const Task& value);

    /// <summary>
    /// 子任务详情列表。
    /// </summary>

    std::vector<TaskDetail>& getTaskDetails();
    bool taskDetailsIsSet() const;
    void unsettaskDetails();
    void setTaskDetails(const std::vector<TaskDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    Task batchtask_;
    bool batchtaskIsSet_;
    std::vector<TaskDetail> taskDetails_;
    bool taskDetailsIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowBatchTaskResponse_H_
