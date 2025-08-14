
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRuleActionsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRuleActionsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/RoutingRuleAction.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListRuleActionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRuleActionsResponse();
    virtual ~ListRuleActionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRuleActionsResponse members

    /// <summary>
    /// 规则动作信息列表。
    /// </summary>

    std::vector<RoutingRuleAction>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<RoutingRuleAction>& value);

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
    std::vector<RoutingRuleAction> actions_;
    bool actionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRuleActionsResponse_H_
