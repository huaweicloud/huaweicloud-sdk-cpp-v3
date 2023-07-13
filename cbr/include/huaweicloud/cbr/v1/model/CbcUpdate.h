
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcUpdate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcUpdate_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/CbcProductInfoUpdate.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CbcUpdate
    : public ModelBase
{
public:
    CbcUpdate();
    virtual ~CbcUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CbcUpdate members

    /// <summary>
    /// 云服务ConsoleURL。订单支付完成后，客户可以通过此URL跳转到云服务Console页面查看信息
    /// </summary>

    std::string getCloudServiceConsoleURL() const;
    bool cloudServiceConsoleURLIsSet() const;
    void unsetcloudServiceConsoleURL();
    void setCloudServiceConsoleURL(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CbcProductInfoUpdate getProductInfo() const;
    bool productInfoIsSet() const;
    void unsetproductInfo();
    void setProductInfo(const CbcProductInfoUpdate& value);

    /// <summary>
    /// 待变更的资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 购买折扣
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);


protected:
    std::string cloudServiceConsoleURL_;
    bool cloudServiceConsoleURLIsSet_;
    CbcProductInfoUpdate productInfo_;
    bool productInfoIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string promotionInfo_;
    bool promotionInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcUpdate_H_
