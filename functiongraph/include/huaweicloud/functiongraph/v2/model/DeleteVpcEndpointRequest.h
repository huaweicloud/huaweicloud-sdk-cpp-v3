
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_DeleteVpcEndpointRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_DeleteVpcEndpointRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  DeleteVpcEndpointRequest
    : public ModelBase
{
public:
    DeleteVpcEndpointRequest();
    virtual ~DeleteVpcEndpointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteVpcEndpointRequest members

    /// <summary>
    /// vpc ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网编号
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 消息体的类型（格式）
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteVpcEndpointRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteVpcEndpointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_DeleteVpcEndpointRequest_H_
