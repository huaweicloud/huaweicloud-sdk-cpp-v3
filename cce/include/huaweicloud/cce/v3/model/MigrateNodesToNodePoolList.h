
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodesToNodePoolList_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodesToNodePoolList_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/MigrateNodesToNodePool.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点迁移到自定义节点池参数。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MigrateNodesToNodePoolList
    : public ModelBase
{
public:
    MigrateNodesToNodePoolList();
    virtual ~MigrateNodesToNodePoolList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateNodesToNodePoolList members

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 固定值，不允许修改。 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 固定值，不允许修改。 **取值范围**： 不涉及 **默认取值**： List 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： 迁移节点列表，当前最多支持同迁移50个节点。 **约束限制**： 不涉及 
    /// </summary>

    std::vector<MigrateNodesToNodePool>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<MigrateNodesToNodePool>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::vector<MigrateNodesToNodePool> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodesToNodePoolList_H_
