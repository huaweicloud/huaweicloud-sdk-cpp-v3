
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListReservedInstanceConfigsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListReservedInstanceConfigsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ReservedInstanceConfigs.h>
#include <vector>
#include <huaweicloud/functiongraph/v2/model/PageInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListReservedInstanceConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReservedInstanceConfigsResponse();
    virtual ~ListReservedInstanceConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReservedInstanceConfigsResponse members

    /// <summary>
    /// 函数预留实例列表
    /// </summary>

    std::vector<ReservedInstanceConfigs>& getReservedInstances();
    bool reservedInstancesIsSet() const;
    void unsetreservedInstances();
    void setReservedInstances(const std::vector<ReservedInstanceConfigs>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);

    /// <summary>
    /// 函数个数
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<ReservedInstanceConfigs> reservedInstances_;
    bool reservedInstancesIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListReservedInstanceConfigsResponse_H_
