
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcOrderChange_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcOrderChange_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/CbcProductInfoOrderChange.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CbcOrderChange
    : public ModelBase
{
public:
    CbcOrderChange();
    virtual ~CbcOrderChange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CbcOrderChange members

    /// <summary>
    /// 云服务ConsoleURL。订单支付完成后，客户可以通过此URL跳转到云服务Console页面查看信息
    /// </summary>

    std::string getCloudServiceConsoleUrl() const;
    bool cloudServiceConsoleUrlIsSet() const;
    void unsetcloudServiceConsoleUrl();
    void setCloudServiceConsoleUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CbcProductInfoOrderChange getProductInfo() const;
    bool productInfoIsSet() const;
    void unsetproductInfo();
    void setProductInfo(const CbcProductInfoOrderChange& value);

    /// <summary>
    /// 待变更的资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 是否自动支付，默认非自动支付：false
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// 购买折扣
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);


protected:
    std::string cloudServiceConsoleUrl_;
    bool cloudServiceConsoleUrlIsSet_;
    CbcProductInfoOrderChange productInfo_;
    bool productInfoIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    std::string promotionInfo_;
    bool promotionInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcOrderChange_H_
