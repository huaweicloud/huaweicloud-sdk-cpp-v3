
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallInstanceResource_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallInstanceResource_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  FirewallInstanceResource
    : public ModelBase
{
public:
    FirewallInstanceResource();
    virtual ~FirewallInstanceResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FirewallInstanceResource members

    /// <summary>
    /// 资源id，包括防火墙资源id，带宽资源id，eip资源id，vpc资源id，cbc回调后返回id。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 服务类型，用于CBC使用，特指：hws.service.type.cfw
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 资源类型 包括:   1、云防火墙:hws.resource.type.cfw   2、EIP:hws.resource.type.cfw.exp.eip   3、带宽:hws.resource.type.cfw.exp.bandwidth   4、VPC:hws.resource.type.cfw.exp
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 库存单位码，包括：1、防火墙标准版cfw.standard 2、防火墙专业版cfw.professional 3、eip标准版cfw.expack.eip.standard 4、eip专业版cfw.expack.eip.professional 5、带宽基础版cfw.expack.bandwidth.standard 6、带宽专业版cfw.expack.bandwidth.professional 7、vpc专业版cfw.expack.vpc.professional
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 资源数量
    /// </summary>

    int32_t getResourceSize() const;
    bool resourceSizeIsSet() const;
    void unsetresourceSize();
    void setResourceSize(int32_t value);

    /// <summary>
    /// 资源单位
    /// </summary>

    int32_t getResourceSizeMeasureId() const;
    bool resourceSizeMeasureIdIsSet() const;
    void unsetresourceSizeMeasureId();
    void setResourceSizeMeasureId(int32_t value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    int32_t resourceSize_;
    bool resourceSizeIsSet_;
    int32_t resourceSizeMeasureId_;
    bool resourceSizeMeasureIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallInstanceResource_H_
