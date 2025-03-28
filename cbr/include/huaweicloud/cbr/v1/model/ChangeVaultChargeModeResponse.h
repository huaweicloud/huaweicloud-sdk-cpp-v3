
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeVaultChargeModeResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeVaultChargeModeResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ChangeVaultChargeModeResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeVaultChargeModeResponse();
    virtual ~ChangeVaultChargeModeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeVaultChargeModeResponse members

    /// <summary>
    /// 订单ID
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 变更状态码
    /// </summary>

    double getRetCode() const;
    bool retCodeIsSet() const;
    void unsetretCode();
    void setRetCode(double value);

    /// <summary>
    /// 变更信息
    /// </summary>

    std::string getRetMsg() const;
    bool retMsgIsSet() const;
    void unsetretMsg();
    void setRetMsg(const std::string& value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;
    double retCode_;
    bool retCodeIsSet_;
    std::string retMsg_;
    bool retMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeVaultChargeModeResponse_H_
