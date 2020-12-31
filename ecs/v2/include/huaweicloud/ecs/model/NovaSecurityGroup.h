
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroup_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroup_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <vector>
#include "huaweicloud/ecs/model/NovaSecurityGroupCommonRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaSecurityGroup
    : public ModelBase
{
public:
    NovaSecurityGroup();
    virtual ~NovaSecurityGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaSecurityGroup members

    /// <summary>
    /// 安全组描述信息，长度0-255
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 安全组ID，UUID格式
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 安全组名字，长度0-255
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 租户ID或项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 安全组规则列表
    /// </summary>

    std::vector<NovaSecurityGroupCommonRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<NovaSecurityGroupCommonRule>& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::vector<NovaSecurityGroupCommonRule> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroup_H_
