
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_InstanceInfo_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_InstanceInfo_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  InstanceInfo
    : public ModelBase
{
public:
    InstanceInfo();
    virtual ~InstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceInfo members

    /// <summary>
    /// region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// quark后端地址
    /// </summary>

    std::string getQuarkVpcEndpoint() const;
    bool quarkVpcEndpointIsSet() const;
    void unsetquarkVpcEndpoint();
    void setQuarkVpcEndpoint(const std::string& value);

    /// <summary>
    /// 项目ID，获取项目ID请参见[获取项目ID](https://support.huaweicloud.com/api-vpc/vpc_api_0011.html)
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 支持绑定的实例类型
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// - 功能说明：表示中心站点资源或者边缘站点资源 - 取值范围：center、边缘站点名称
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 绑定实例所在的站点
    /// </summary>

    std::string getInstanceSite() const;
    bool instanceSiteIsSet() const;
    void unsetinstanceSite();
    void setInstanceSite(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string quarkVpcEndpoint_;
    bool quarkVpcEndpointIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string instanceSite_;
    bool instanceSiteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_InstanceInfo_H_
