
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateVpcEndpointResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateVpcEndpointResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateVpcEndpointResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVpcEndpointResponse();
    virtual ~CreateVpcEndpointResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVpcEndpointResponse members

    /// <summary>
    /// Ip列表
    /// </summary>

    std::vector<std::string>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<std::string>& value);

    /// <summary>
    /// 域名地址
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);


protected:
    std::vector<std::string> endpoints_;
    bool endpointsIsSet_;
    std::string address_;
    bool addressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateVpcEndpointResponse_H_
