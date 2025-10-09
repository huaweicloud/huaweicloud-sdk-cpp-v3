
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleNodePoolResponse
    : public ModelBase, public HttpResponse
{
public:
    ScaleNodePoolResponse();
    virtual ~ScaleNodePoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleNodePoolResponse members

    /// <summary>
    /// **参数解释**： 订单ID，仅扩容包周期节点时返回 **取值范围**： 不涉及
    /// </summary>

    std::string getOrderID() const;
    bool orderIDIsSet() const;
    void unsetorderID();
    void setOrderID(const std::string& value);


protected:
    std::string orderID_;
    bool orderIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolResponse_H_
