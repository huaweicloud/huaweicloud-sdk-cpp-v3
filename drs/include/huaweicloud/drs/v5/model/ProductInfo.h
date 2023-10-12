
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ProductInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ProductInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 产品信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ProductInfo
    : public ModelBase
{
public:
    ProductInfo();
    virtual ~ProductInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductInfo members

    /// <summary>
    /// ID标识，同一次询价中不能重复，用于标识返回询价结果和请求的映射关系。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用户购买云服务产品的云服务类型，例如EC2，云服务类型为hws.service.type.ec2。
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 用户购买云服务产品的资源类型，例如EC2中的VM，资源类型为hws.resource.type.vm。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 用户购买云服务产品的资源规格，例如VM的小型规格，资源规格为m1.tiny。
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 资源容量度量标识。
    /// </summary>

    int32_t getResourceSize() const;
    bool resourceSizeIsSet() const;
    void unsetresourceSize();
    void setResourceSize(int32_t value);

    /// <summary>
    /// 使用量因子，按需计费必填，取值和话单中的使用量因子一致，云服务和使用量因子对应关系如下： - Duration：云服务器 - flow：流量
    /// </summary>

    std::string getUsageFactor() const;
    bool usageFactorIsSet() const;
    void unsetusageFactor();
    void setUsageFactor(const std::string& value);

    /// <summary>
    /// 使用量值，按需询价必填，例如按小时询价，使用量值为1，使用量单位为小时。
    /// </summary>

    double getUsageValue() const;
    bool usageValueIsSet() const;
    void unsetusageValue();
    void setUsageValue(double value);

    /// <summary>
    /// 使用量单位标识，按需询价必填，例如按小时询价，使用量值为1，使用量单位为小时。 - 4：小时 - 10：GB - 11：MB - 13：Byte - 17：FLOW_GB
    /// </summary>

    int32_t getUsageMeasureId() const;
    bool usageMeasureIdIsSet() const;
    void unsetusageMeasureId();
    void setUsageMeasureId(int32_t value);

    /// <summary>
    /// 资源容量大小，例如购买的卷大小或带宽大小。
    /// </summary>

    int32_t getResourceSizeMeasureId() const;
    bool resourceSizeMeasureIdIsSet() const;
    void unsetresourceSizeMeasureId();
    void setResourceSizeMeasureId(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    int32_t resourceSize_;
    bool resourceSizeIsSet_;
    std::string usageFactor_;
    bool usageFactorIsSet_;
    double usageValue_;
    bool usageValueIsSet_;
    int32_t usageMeasureId_;
    bool usageMeasureIdIsSet_;
    int32_t resourceSizeMeasureId_;
    bool resourceSizeMeasureIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ProductInfo_H_
