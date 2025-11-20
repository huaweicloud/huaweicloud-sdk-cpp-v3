
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ProductSpecData_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ProductSpecData_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ProductSpecData
    : public ModelBase
{
public:
    ProductSpecData();
    virtual ~ProductSpecData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductSpecData members

    /// <summary>
    /// 产品规格UUID
    /// </summary>

    std::string getProductUuid() const;
    bool productUuidIsSet() const;
    void unsetproductUuid();
    void setProductUuid(const std::string& value);

    /// <summary>
    /// 套餐线路
    /// </summary>

    std::string getIspSpec() const;
    bool ispSpecIsSet() const;
    void unsetispSpec();
    void setIspSpec(const std::string& value);

    /// <summary>
    /// 机房
    /// </summary>

    std::string getDataCenter() const;
    bool dataCenterIsSet() const;
    void unsetdataCenter();
    void setDataCenter(const std::string& value);

    /// <summary>
    /// 产品规格类型
    /// </summary>

    int32_t getSpecType() const;
    bool specTypeIsSet() const;
    void unsetspecType();
    void setSpecType(int32_t value);

    /// <summary>
    /// 保底带宽值
    /// </summary>

    int32_t getBasicBandwidth() const;
    bool basicBandwidthIsSet() const;
    void unsetbasicBandwidth();
    void setBasicBandwidth(int32_t value);

    /// <summary>
    /// 弹性带宽值
    /// </summary>

    int32_t getElasticBandwidth() const;
    bool elasticBandwidthIsSet() const;
    void unsetelasticBandwidth();
    void setElasticBandwidth(int32_t value);

    /// <summary>
    /// 业务带宽值
    /// </summary>

    int32_t getServiceBandwidth() const;
    bool serviceBandwidthIsSet() const;
    void unsetserviceBandwidth();
    void setServiceBandwidth(int32_t value);

    /// <summary>
    /// 端口数
    /// </summary>

    int32_t getPortNum() const;
    bool portNumIsSet() const;
    void unsetportNum();
    void setPortNum(int32_t value);

    /// <summary>
    /// 域名数
    /// </summary>

    int32_t getBindDomainNum() const;
    bool bindDomainNumIsSet() const;
    void unsetbindDomainNum();
    void setBindDomainNum(int32_t value);

    /// <summary>
    /// 弹性业务带宽值
    /// </summary>

    int32_t getElasticServiceBandwidth() const;
    bool elasticServiceBandwidthIsSet() const;
    void unsetelasticServiceBandwidth();
    void setElasticServiceBandwidth(int32_t value);

    /// <summary>
    /// 弹性业务带宽类型
    /// </summary>

    int32_t getElasticServiceBandwidthType() const;
    bool elasticServiceBandwidthTypeIsSet() const;
    void unsetelasticServiceBandwidthType();
    void setElasticServiceBandwidthType(int32_t value);

    /// <summary>
    /// 主资源类型
    /// </summary>

    std::string getMainResourceType() const;
    bool mainResourceTypeIsSet() const;
    void unsetmainResourceType();
    void setMainResourceType(const std::string& value);

    /// <summary>
    /// 主资源规格编码
    /// </summary>

    std::string getMainResourceSpecCode() const;
    bool mainResourceSpecCodeIsSet() const;
    void unsetmainResourceSpecCode();
    void setMainResourceSpecCode(const std::string& value);

    /// <summary>
    /// 主资源产品id
    /// </summary>

    std::string getMainResourceProductId() const;
    bool mainResourceProductIdIsSet() const;
    void unsetmainResourceProductId();
    void setMainResourceProductId(const std::string& value);


protected:
    std::string productUuid_;
    bool productUuidIsSet_;
    std::string ispSpec_;
    bool ispSpecIsSet_;
    std::string dataCenter_;
    bool dataCenterIsSet_;
    int32_t specType_;
    bool specTypeIsSet_;
    int32_t basicBandwidth_;
    bool basicBandwidthIsSet_;
    int32_t elasticBandwidth_;
    bool elasticBandwidthIsSet_;
    int32_t serviceBandwidth_;
    bool serviceBandwidthIsSet_;
    int32_t portNum_;
    bool portNumIsSet_;
    int32_t bindDomainNum_;
    bool bindDomainNumIsSet_;
    int32_t elasticServiceBandwidth_;
    bool elasticServiceBandwidthIsSet_;
    int32_t elasticServiceBandwidthType_;
    bool elasticServiceBandwidthTypeIsSet_;
    std::string mainResourceType_;
    bool mainResourceTypeIsSet_;
    std::string mainResourceSpecCode_;
    bool mainResourceSpecCodeIsSet_;
    std::string mainResourceProductId_;
    bool mainResourceProductIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ProductSpecData_H_
