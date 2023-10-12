
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListPortsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListPortsResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Port.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  ListPortsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPortsResponse();
    virtual ~ListPortsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPortsResponse members

    /// <summary>
    /// port列表对象
    /// </summary>

    std::vector<Port>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<Port>& value);


protected:
    std::vector<Port> ports_;
    bool portsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListPortsResponse_H_
