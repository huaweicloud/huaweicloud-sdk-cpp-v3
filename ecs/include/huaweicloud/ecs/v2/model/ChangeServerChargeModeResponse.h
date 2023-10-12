
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModeResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModeResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerChargeModeResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeServerChargeModeResponse();
    virtual ~ChangeServerChargeModeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeServerChargeModeResponse members

    /// <summary>
    /// 按需转包提交后返回的订单ID，用户可以使用该ID对订单结果进行查询。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModeResponse_H_
