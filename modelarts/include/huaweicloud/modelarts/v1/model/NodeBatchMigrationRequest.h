
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeBatchMigrationRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeBatchMigrationRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/MigrateResourceSpec.h>
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
/// **参数解释**：批量迁移节点请求体。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeBatchMigrationRequest
    : public ModelBase
{
public:
    NodeBatchMigrationRequest();
    virtual ~NodeBatchMigrationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeBatchMigrationRequest members

    /// <summary>
    /// **参数解释**：待迁移的节点名称列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getMigrateNodeNames();
    bool migrateNodeNamesIsSet() const;
    void unsetmigrateNodeNames();
    void setMigrateNodeNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：迁移起始集群名称。 专属算力资源时该字段与源资源池名称相同，取自源资源池metadata.name字段的值； 轻量算力集群时该字段取自迁移节点metadata.labels[os.modelarts.node/cluster]字段的值。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFromClusterName() const;
    bool fromClusterNameIsSet() const;
    void unsetfromClusterName();
    void setFromClusterName(const std::string& value);

    /// <summary>
    /// **参数解释**：迁移目标集群名称。 专属算力资源时该字段与源资源池名称相同，取自目标资源池metadata.name字段的值； 轻量算力集群时该字段取自目标资源池内节点metadata.labels[os.modelarts.node/cluster]字段的值。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getToClusterName() const;
    bool toClusterNameIsSet() const;
    void unsettoClusterName();
    void setToClusterName(const std::string& value);

    /// <summary>
    /// **参数解释**：迁移目标资源池名称。该字段取自目标资源池metadata.name字段的值。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getToPoolName() const;
    bool toPoolNameIsSet() const;
    void unsettoPoolName();
    void setToPoolName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MigrateResourceSpec getResourceSpec() const;
    bool resourceSpecIsSet() const;
    void unsetresourceSpec();
    void setResourceSpec(const MigrateResourceSpec& value);


protected:
    std::vector<std::string> migrateNodeNames_;
    bool migrateNodeNamesIsSet_;
    std::string fromClusterName_;
    bool fromClusterNameIsSet_;
    std::string toClusterName_;
    bool toClusterNameIsSet_;
    std::string toPoolName_;
    bool toPoolNameIsSet_;
    MigrateResourceSpec resourceSpec_;
    bool resourceSpecIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeBatchMigrationRequest_H_
