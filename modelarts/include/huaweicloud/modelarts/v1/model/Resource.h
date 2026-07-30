
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Resource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Resource_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/FlavorDetail.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/MainContainerAllocatedResources.h>
#include <huaweicloud/modelarts/v1/model/MainContainerCustomizedFlavor.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业资源规格信息。flavor_id和pool_id+[flavor_id]方式二选一。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Resource
    : public ModelBase
{
public:
    Resource();
    virtual ~Resource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Resource members

    /// <summary>
    /// **参数解释**：训练作业资源规格模式。 **取值范围**： - regular：标准模式
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业资源规格id。 **取值范围**：CPU规格专属资源池不支持指定flavor_id。GPU/Ascend规格专属资源池可选取值如下： - modelarts.pool.visual.xlarge（1卡） - modelarts.pool.visual.2xlarge（2卡） - modelarts.pool.visual.4xlarge（4卡） - modelarts.pool.visual.8xlarge（8卡）
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// **参数解释**：使用flavor_id时，由ModelArts返回的只读规格名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavorName() const;
    bool flavorNameIsSet() const;
    void unsetflavorName();
    void setFlavorName(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业选择的资源副本数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getNodeCount() const;
    bool nodeCountIsSet() const;
    void unsetnodeCount();
    void setNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**：训练作业选择的资源池ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业选择的资源池联邦ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolGroupId() const;
    bool poolGroupIdIsSet() const;
    void unsetpoolGroupId();
    void setPoolGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorDetail getFlavorDetail() const;
    bool flavorDetailIsSet() const;
    void unsetflavorDetail();
    void setFlavorDetail(const FlavorDetail& value);

    /// <summary>
    /// 
    /// </summary>

    MainContainerAllocatedResources getMainContainerAllocatedResources() const;
    bool mainContainerAllocatedResourcesIsSet() const;
    void unsetmainContainerAllocatedResources();
    void setMainContainerAllocatedResources(const MainContainerAllocatedResources& value);

    /// <summary>
    /// 
    /// </summary>

    MainContainerCustomizedFlavor getMainContainerCustomizedFlavor() const;
    bool mainContainerCustomizedFlavorIsSet() const;
    void unsetmainContainerCustomizedFlavor();
    void setMainContainerCustomizedFlavor(const MainContainerCustomizedFlavor& value);


protected:
    std::string policy_;
    bool policyIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string flavorName_;
    bool flavorNameIsSet_;
    int32_t nodeCount_;
    bool nodeCountIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string poolGroupId_;
    bool poolGroupIdIsSet_;
    FlavorDetail flavorDetail_;
    bool flavorDetailIsSet_;
    MainContainerAllocatedResources mainContainerAllocatedResources_;
    bool mainContainerAllocatedResourcesIsSet_;
    MainContainerCustomizedFlavor mainContainerCustomizedFlavor_;
    bool mainContainerCustomizedFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Resource_H_
