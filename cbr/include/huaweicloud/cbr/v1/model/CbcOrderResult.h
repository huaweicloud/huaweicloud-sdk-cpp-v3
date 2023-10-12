
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcOrderResult_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcOrderResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CbcOrderResult
    : public ModelBase
{
public:
    CbcOrderResult();
    virtual ~CbcOrderResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CbcOrderResult members

    /// <summary>
    /// 云服务ID
    /// </summary>

    std::string getCloudServiceId() const;
    bool cloudServiceIdIsSet() const;
    void unsetcloudServiceId();
    void setCloudServiceId(const std::string& value);

    /// <summary>
    /// 订单ID
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 订购结果，1：成功；0：失败
    /// </summary>

    int32_t getSubscribeResult() const;
    bool subscribeResultIsSet() const;
    void unsetsubscribeResult();
    void setSubscribeResult(int32_t value);

    /// <summary>
    /// 包周期资源预生成资源id。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string cloudServiceId_;
    bool cloudServiceIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    int32_t subscribeResult_;
    bool subscribeResultIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcOrderResult_H_
