
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/BindPublicGatewayRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BindPublicGatewayRequest
    : public ModelBase
{
public:
    BindPublicGatewayRequest();
    virtual ~BindPublicGatewayRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindPublicGatewayRequest members

    /// <summary>
    /// **参数解释：** 实例ID，可以调用“查询实例列表和详情-QueryingInstancesandDetails”接口获取。如果未申请实例，可以调用“创建实例-CreatingaDBInstance”接口创建。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 需要绑定公网网关规则的节点ID。 **约束限制：** 集群实例选择mongos节点，副本集实例选择primary或者secondary节点。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BindPublicGatewayRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BindPublicGatewayRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    BindPublicGatewayRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BindPublicGatewayRequest& dereference_from_shared_ptr(std::shared_ptr<BindPublicGatewayRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayRequest_H_
