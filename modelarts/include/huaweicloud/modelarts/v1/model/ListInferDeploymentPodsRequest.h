
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentPodsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentPodsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferDeploymentPodsRequest
    : public ModelBase
{
public:
    ListInferDeploymentPodsRequest();
    virtual ~ListInferDeploymentPodsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferDeploymentPodsRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称，在创建部署时即可在返回体中获取，也可通过[查询服务部署列表](ListInferDeployments.xml)获取当前用户拥有的部署，其name字段即为部署名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDeploymentName() const;
    bool deploymentNameIsSet() const;
    void unsetdeploymentName();
    void setDeploymentName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例名字，可以为all，为all时去查询所有的服务实例。 **约束限制：** 不涉及。 **取值范围：** 服务实例名字。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** pod状态，一次支持多种状态筛选，多种状态以\&quot;,\&quot;连接，不能存在空格。默认不过滤。取值范围有7种RUNNING（运行中）、PENDING（未就绪）、SUCCEEDED（成功）、FAILED（失败）、ABNORMAL（异常）、UNKNOWN（未知）、DELETED（已删除）。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 指定每一页返回的最大条目数。 **约束限制：** 不涉及。 **取值范围：** [1,500] **默认取值：** 10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 分页列表的起始页。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 0。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释：** pod名字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodName() const;
    bool podNameIsSet() const;
    void unsetpodName();
    void setPodName(const std::string& value);

    /// <summary>
    /// **参数解释：** pod ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodId() const;
    bool podIdIsSet() const;
    void unsetpodId();
    void setPodId(const std::string& value);

    /// <summary>
    /// **参数解释：** pod节点IP地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodNodeIp() const;
    bool podNodeIpIsSet() const;
    void unsetpodNodeIp();
    void setPodNodeIp(const std::string& value);

    /// <summary>
    /// **参数解释：** pod节点名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodNodeName() const;
    bool podNodeNameIsSet() const;
    void unsetpodNodeName();
    void setPodNodeName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string deploymentName_;
    bool deploymentNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string podName_;
    bool podNameIsSet_;
    std::string podId_;
    bool podIdIsSet_;
    std::string podNodeIp_;
    bool podNodeIpIsSet_;
    std::string podNodeName_;
    bool podNodeNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInferDeploymentPodsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInferDeploymentPodsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferDeploymentPodsRequest_H_
