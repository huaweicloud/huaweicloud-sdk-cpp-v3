
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferIntranetConnectionApplicationsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferIntranetConnectionApplicationsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferIntranetConnectionApplicationsRequest
    : public ModelBase
{
public:
    ListInferIntranetConnectionApplicationsRequest();
    virtual ~ListInferIntranetConnectionApplicationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferIntranetConnectionApplicationsRequest members

    /// <summary>
    /// **参数解释：** 内网访问场景。 **约束限制：** 不涉及。 **取值范围：** - POOL：用户资源池接入场景 - VPC：用户VPC网络接入场景 **默认取值：** 不涉及。
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网接入状态，支持列表查询。 **约束限制：** 不涉及。 **取值范围：** - APPROVING：审批中 - REJECTED：拒绝 - CONNECTING：接入中 - CONNECTED：已接入 - CANCELED：已取消 - FAILED：失败 - DELETING：删除中 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网接入ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// **参数解释：** VPC网络的id。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释：** VPC网络的名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVpcName() const;
    bool vpcNameIsSet() const;
    void unsetvpcName();
    void setVpcName(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池的id。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 分页列表查询的偏移量。 **约束限制：** offset必须是limit的整数倍。 **取值范围：** 不涉及。 **默认取值：** 0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 指定返回的最大条目数。 **约束限制：** 不涉及。 **取值范围：** [1,500] **默认取值：** 10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式 **约束限制：** 不涉及。 **取值范围：** - ASC: 递增排序。 - DESC: 递减排序。 **默认取值：** DESC。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序字段，多个字段以\&quot;,\&quot;分隔，支持create_at, update_at，默认值update_at。 **约束限制：** 不涉及。 **取值范围：** - create_at：按创建时间排序。 - update_at：按更新时间排序。 **默认取值：** update_at。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);


protected:
    std::string scene_;
    bool sceneIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string vpcName_;
    bool vpcNameIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInferIntranetConnectionApplicationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInferIntranetConnectionApplicationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferIntranetConnectionApplicationsRequest_H_
