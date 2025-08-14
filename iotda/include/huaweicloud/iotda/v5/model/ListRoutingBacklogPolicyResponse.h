
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRoutingBacklogPolicyResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRoutingBacklogPolicyResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/BacklogPolicyInfo.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListRoutingBacklogPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRoutingBacklogPolicyResponse();
    virtual ~ListRoutingBacklogPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRoutingBacklogPolicyResponse members

    /// <summary>
    /// 数据流转积压策略列表。
    /// </summary>

    std::vector<BacklogPolicyInfo>& getBacklogPolicies();
    bool backlogPoliciesIsSet() const;
    void unsetbacklogPolicies();
    void setBacklogPolicies(const std::vector<BacklogPolicyInfo>& value);

    /// <summary>
    /// 满足查询条件的记录总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 本次分页查询结果中最后一条记录的ID，可在下一次分页查询时使用。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::vector<BacklogPolicyInfo> backlogPolicies_;
    bool backlogPoliciesIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRoutingBacklogPolicyResponse_H_
