
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHarvestTaskResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHarvestTaskResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/HarvestTaskCreateSucRsp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListHarvestTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHarvestTaskResponse();
    virtual ~ListHarvestTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHarvestTaskResponse members

    /// <summary>
    /// 总任务数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 任务信息
    /// </summary>

    std::vector<HarvestTaskCreateSucRsp>& getHarvestTasks();
    bool harvestTasksIsSet() const;
    void unsetharvestTasks();
    void setHarvestTasks(const std::vector<HarvestTaskCreateSucRsp>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<HarvestTaskCreateSucRsp> harvestTasks_;
    bool harvestTasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHarvestTaskResponse_H_
