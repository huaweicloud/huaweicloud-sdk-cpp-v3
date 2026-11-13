
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringInfosRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringInfosRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListVpcPeeringInfosRequest
    : public ModelBase
{
public:
    ListVpcPeeringInfosRequest();
    virtual ~ListVpcPeeringInfosRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVpcPeeringInfosRequest members

    /// <summary>
    /// **参数解释**： 对等连接的资源ID，填写后按照ID进行过滤，支持传入多个ID过滤。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 每页返回的资源个数。 **取值范围**： 0~2000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 分页查询起始的资源ID，为空时查询第一页。 **取值范围**： 对等连接的资源ID。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数解释**： 对等连接的名称，填写后按照名称进行过滤，支持传入多个名称过滤。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 对等连接的状态，填写后按照状态进行过滤。 **取值范围**： - PENDING_ACCEPTANCE：等待接受 - REJECTED：已拒绝。 - EXPIRED：已过期。 - DELETED：已删除。 - ACTIVE：生效的。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 对等连接的项目ID，填写后按照项目ID进行过滤。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释**： 对等连接两端的VPC ID，填写后按照VPC ID进行过滤，支持传入多个ID过滤。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getVpcId();
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> id_;
    bool idIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::vector<std::string> vpcId_;
    bool vpcIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVpcPeeringInfosRequest& dereference_from_shared_ptr(std::shared_ptr<ListVpcPeeringInfosRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringInfosRequest_H_
