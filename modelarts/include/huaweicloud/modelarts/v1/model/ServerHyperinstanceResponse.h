
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHyperinstanceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHyperinstanceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerResponse.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Lite Server超节点实例详情。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerHyperinstanceResponse
    : public ModelBase
{
public:
    ServerHyperinstanceResponse();
    virtual ~ServerHyperinstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerHyperinstanceResponse members

    /// <summary>
    /// **参数解释**：创建时间。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：超节点集群网络ID。 **约束限制**：不涉及。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **默认取值**：不涉及。
    /// </summary>

    std::string getHpsClusterId() const;
    bool hpsClusterIdIsSet() const;
    void unsethpsClusterId();
    void setHpsClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点ID。 **约束限制**：不涉及。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **默认取值**：不涉及。
    /// </summary>

    std::string getHpsId() const;
    bool hpsIdIsSet() const;
    void unsethpsId();
    void setHpsId(const std::string& value);

    /// <summary>
    /// **参数解释**：Lite Server超节点ID。 **约束限制**：不涉及。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例名称。 **约束限制**：不涉及。 **取值范围**：^[-_.a-zA-Z0-9]{1,64}$。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：订单ID。 **约束限制**：不涉及。 **取值范围**：^[a-zA-Z0-9]{1,64}$。 **默认取值**：不涉及。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点实例状态。 **约束限制**：不涉及。 **取值范围**： - PROVISIONING：超节点的创建请求已被接受，但是仍在创建过程中； - ACTIVE：超节点处于活动状态，其资源可被使用； - ERROR：超节点创建失败； - REIMAGING：超节点切换操作系统中； - TERMINATING：资源释放中； - TERMINATED：超节点资源已经被释放，其资源不再可用。 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点子节点实例列表。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<ServerResponse>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerResponse>& value);

    /// <summary>
    /// **参数解释**：创建时间。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);


protected:
    int64_t createAt_;
    bool createAtIsSet_;
    std::string hpsClusterId_;
    bool hpsClusterIdIsSet_;
    std::string hpsId_;
    bool hpsIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<ServerResponse> servers_;
    bool serversIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHyperinstanceResponse_H_
