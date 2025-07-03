
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListFlowsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListFlowsResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ListFlowRespItem.h>
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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListFlowsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFlowsResponse();
    virtual ~ListFlowsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlowsResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 流列表
    /// </summary>

    std::vector<ListFlowRespItem>& getFlows();
    bool flowsIsSet() const;
    void unsetflows();
    void setFlows(const std::vector<ListFlowRespItem>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ListFlowRespItem> flows_;
    bool flowsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListFlowsResponse_H_
