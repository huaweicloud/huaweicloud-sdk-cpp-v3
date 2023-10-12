
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchProfile_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchProfile_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订单和产品信息
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchProfile
    : public ModelBase
{
public:
    BatchProfile();
    virtual ~BatchProfile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchProfile members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 产品id
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 局点id
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 订单id
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchProfile_H_
