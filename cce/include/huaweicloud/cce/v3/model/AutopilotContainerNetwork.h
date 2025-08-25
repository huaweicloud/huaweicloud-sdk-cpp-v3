
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotContainerNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotContainerNetwork_H_


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
/// Container network parameters.
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotContainerNetwork
    : public ModelBase
{
public:
    AutopilotContainerNetwork();
    virtual ~AutopilotContainerNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotContainerNetwork members

    /// <summary>
    /// 容器网络类型 - eni：云原生网络2.0，深度整合VPC原生ENI弹性网卡能力，采用VPC网段分配容器地址，支持ELB直通容器，享有高性能，创建集群时指定。 
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotContainerNetwork_H_
