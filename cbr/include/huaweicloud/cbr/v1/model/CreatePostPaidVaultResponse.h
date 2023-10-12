
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreatePostPaidVaultResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreatePostPaidVaultResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CbcOrderResult.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CreatePostPaidVaultResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePostPaidVaultResponse();
    virtual ~CreatePostPaidVaultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePostPaidVaultResponse members

    /// <summary>
    /// 订单详情
    /// </summary>

    std::vector<CbcOrderResult>& getOrders();
    bool ordersIsSet() const;
    void unsetorders();
    void setOrders(const std::vector<CbcOrderResult>& value);

    /// <summary>
    /// 创建结果代码 0：成功
    /// </summary>

    int32_t getRetCode() const;
    bool retCodeIsSet() const;
    void unsetretCode();
    void setRetCode(int32_t value);

    /// <summary>
    /// 创建结果信息
    /// </summary>

    std::string getErrText() const;
    bool errTextIsSet() const;
    void unseterrText();
    void setErrText(const std::string& value);

    /// <summary>
    /// 操作错误码 0：无错误
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::vector<CbcOrderResult> orders_;
    bool ordersIsSet_;
    int32_t retCode_;
    bool retCodeIsSet_;
    std::string errText_;
    bool errTextIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreatePostPaidVaultResponse_H_
