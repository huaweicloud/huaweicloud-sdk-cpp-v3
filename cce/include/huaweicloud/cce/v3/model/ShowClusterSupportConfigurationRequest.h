
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterSupportConfigurationRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterSupportConfigurationRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowClusterSupportConfigurationRequest
    : public ModelBase
{
public:
    ShowClusterSupportConfigurationRequest();
    virtual ~ShowClusterSupportConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClusterSupportConfigurationRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群类型，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);

    /// <summary>
    /// 集群版本，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterVersion() const;
    bool clusterVersionIsSet() const;
    void unsetclusterVersion();
    void setClusterVersion(const std::string& value);

    /// <summary>
    /// 集群网络类型，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getNetworkMode() const;
    bool networkModeIsSet() const;
    void unsetnetworkMode();
    void setNetworkMode(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::string clusterVersion_;
    bool clusterVersionIsSet_;
    std::string networkMode_;
    bool networkModeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowClusterSupportConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<ShowClusterSupportConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterSupportConfigurationRequest_H_
