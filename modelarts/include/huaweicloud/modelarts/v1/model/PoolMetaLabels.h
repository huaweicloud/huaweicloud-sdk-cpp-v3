
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetaLabels_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetaLabels_H_


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
/// 资源池metadata的标签信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetaLabels
    : public ModelBase
{
public:
    PoolMetaLabels();
    virtual ~PoolMetaLabels();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetaLabels members

    /// <summary>
    /// **参数解释**：资源池的显示名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsName() const;
    bool osModelartsNameIsSet() const;
    void unsetosModelartsName();
    void setOsModelartsName(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc) **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getOsModelartsWorkspaceId() const;
    bool osModelartsWorkspaceIdIsSet() const;
    void unsetosModelartsWorkspaceId();
    void setOsModelartsWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义节点前缀，可选值。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsNodePrefix() const;
    bool osModelartsNodePrefixIsSet() const;
    void unsetosModelartsNodePrefix();
    void setOsModelartsNodePrefix(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池计费使用的资源ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsResourceId() const;
    bool osModelartsResourceIdIsSet() const;
    void unsetosModelartsResourceId();
    void setOsModelartsResourceId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池所属的租户ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsTenantDomainId() const;
    bool osModelartsTenantDomainIdIsSet() const;
    void unsetosModelartsTenantDomainId();
    void setOsModelartsTenantDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池所属的租户项目ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsTenantProjectId() const;
    bool osModelartsTenantProjectIdIsSet() const;
    void unsetosModelartsTenantProjectId();
    void setOsModelartsTenantProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池所属的企业项目ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsEnterpriseProjectId() const;
    bool osModelartsEnterpriseProjectIdIsSet() const;
    void unsetosModelartsEnterpriseProjectId();
    void setOsModelartsEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池商业类型，public是公共池，private个人专属池。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPoolBiz() const;
    bool osModelartsPoolBizIsSet() const;
    void unsetosModelartsPoolBiz();
    void setOsModelartsPoolBiz(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池创建来源，比如admin-console，标记来自admin创建，console标记来自ma console。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsCreateFrom() const;
    bool osModelartsCreateFromIsSet() const;
    void unsetosModelartsCreateFrom();
    void setOsModelartsCreateFrom(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池是否计费。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsNobilling() const;
    bool osModelartsNobillingIsSet() const;
    void unsetosModelartsNobilling();
    void setOsModelartsNobilling(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池关联的上一次订单作业记录。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsOrderName() const;
    bool osModelartsOrderNameIsSet() const;
    void unsetosModelartsOrderName();
    void setOsModelartsOrderName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池所属区域。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsRegion() const;
    bool osModelartsRegionIsSet() const;
    void unsetosModelartsRegion();
    void setOsModelartsRegion(const std::string& value);


protected:
    std::string osModelartsName_;
    bool osModelartsNameIsSet_;
    std::string osModelartsWorkspaceId_;
    bool osModelartsWorkspaceIdIsSet_;
    std::string osModelartsNodePrefix_;
    bool osModelartsNodePrefixIsSet_;
    std::string osModelartsResourceId_;
    bool osModelartsResourceIdIsSet_;
    std::string osModelartsTenantDomainId_;
    bool osModelartsTenantDomainIdIsSet_;
    std::string osModelartsTenantProjectId_;
    bool osModelartsTenantProjectIdIsSet_;
    std::string osModelartsEnterpriseProjectId_;
    bool osModelartsEnterpriseProjectIdIsSet_;
    std::string osModelartsPoolBiz_;
    bool osModelartsPoolBizIsSet_;
    std::string osModelartsCreateFrom_;
    bool osModelartsCreateFromIsSet_;
    std::string osModelartsNobilling_;
    bool osModelartsNobillingIsSet_;
    std::string osModelartsOrderName_;
    bool osModelartsOrderNameIsSet_;
    std::string osModelartsRegion_;
    bool osModelartsRegionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetaLabels_H_
