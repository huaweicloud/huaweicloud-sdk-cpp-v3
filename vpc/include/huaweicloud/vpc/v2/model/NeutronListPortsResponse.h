
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListPortsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListPortsResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <huaweicloud/vpc/v2/model/NeutronPort.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListPortsResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListPortsResponse();
    virtual ~NeutronListPortsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListPortsResponse members

    /// <summary>
    /// port对象列表
    /// </summary>

    std::vector<NeutronPort>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<NeutronPort>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getPortsLinks();
    bool portsLinksIsSet() const;
    void unsetportsLinks();
    void setPortsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronPort> ports_;
    bool portsIsSet_;
    std::vector<NeutronPageLink> portsLinks_;
    bool portsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListPortsResponse_H_
