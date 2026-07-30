
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolLabelsCreation_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolLabelsCreation_H_


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
/// 资源池标签信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolLabelsCreation
    : public ModelBase
{
public:
    PoolLabelsCreation();
    virtual ~PoolLabelsCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolLabelsCreation members

    /// <summary>
    /// **参数解释**：用户指定的资源池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsName() const;
    bool osModelartsNameIsSet() const;
    void unsetosModelartsName();
    void setOsModelartsName(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc) **约束限制**：不涉及。 **取值范围**：未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsWorkspaceId() const;
    bool osModelartsWorkspaceIdIsSet() const;
    void unsetosModelartsWorkspaceId();
    void setOsModelartsWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义节点名称前缀。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsNodePrefix() const;
    bool osModelartsNodePrefixIsSet() const;
    void unsetosModelartsNodePrefix();
    void setOsModelartsNodePrefix(const std::string& value);


protected:
    std::string osModelartsName_;
    bool osModelartsNameIsSet_;
    std::string osModelartsWorkspaceId_;
    bool osModelartsWorkspaceIdIsSet_;
    std::string osModelartsNodePrefix_;
    bool osModelartsNodePrefixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolLabelsCreation_H_
