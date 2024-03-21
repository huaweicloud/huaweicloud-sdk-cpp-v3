
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment_H_


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
/// 请求对象
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment
    : public ModelBase
{
public:
    AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment();
    virtual ~AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment members

    /// <summary>
    /// region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

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
    /// 项目ID，获取项目ID请参见[获取项目ID](https://support.huaweicloud.com/api-vpc/vpc_api_0011.html)
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment_H_
