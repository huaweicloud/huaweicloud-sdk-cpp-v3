
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MarketplaceEngineProduct_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MarketplaceEngineProduct_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Agreement.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MarketplaceEngineProduct
    : public ModelBase
{
public:
    MarketplaceEngineProduct();
    virtual ~MarketplaceEngineProduct();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MarketplaceEngineProduct members

    /// <summary>
    /// 引擎ID。
    /// </summary>

    std::string getEngineId() const;
    bool engineIdIsSet() const;
    void unsetengineId();
    void setEngineId(const std::string& value);

    /// <summary>
    /// 引擎版本。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 云市场规格ID。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 云市场商品ID。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 服务商名称。
    /// </summary>

    std::string getBpName() const;
    bool bpNameIsSet() const;
    void unsetbpName();
    void setBpName(const std::string& value);

    /// <summary>
    /// 服务商ID。
    /// </summary>

    std::string getBpDomainId() const;
    bool bpDomainIdIsSet() const;
    void unsetbpDomainId();
    void setBpDomainId(const std::string& value);

    /// <summary>
    /// 支持的实例类型。  - Single: 单机实例 - Ha: 主备实例 - Replica: 只读实例 - All: 以上类型都支持
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 用户许可。
    /// </summary>

    std::string getUserLicenseAgreement() const;
    bool userLicenseAgreementIsSet() const;
    void unsetuserLicenseAgreement();
    void setUserLicenseAgreement(const std::string& value);

    /// <summary>
    /// 许可详情列表。
    /// </summary>

    std::vector<Agreement>& getAgreements();
    bool agreementsIsSet() const;
    void unsetagreements();
    void setAgreements(const std::vector<Agreement>& value);


protected:
    std::string engineId_;
    bool engineIdIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string bpName_;
    bool bpNameIsSet_;
    std::string bpDomainId_;
    bool bpDomainIdIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string userLicenseAgreement_;
    bool userLicenseAgreementIsSet_;
    std::vector<Agreement> agreements_;
    bool agreementsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MarketplaceEngineProduct_H_
