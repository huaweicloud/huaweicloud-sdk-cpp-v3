
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_OrganizationAccountInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_OrganizationAccountInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  OrganizationAccountInfo
    : public ModelBase
{
public:
    OrganizationAccountInfo();
    virtual ~OrganizationAccountInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationAccountInfo members

    /// <summary>
    /// **参数解释**： 是否已添加 **取值范围**： 不涉及
    /// </summary>

    bool isDelegated() const;
    bool delegatedIsSet() const;
    void unsetdelegated();
    void setDelegated(bool value);

    /// <summary>
    /// **参数解释**： 账号的唯一标识符 **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 账号名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 组织节点类型 **取值范围**： account
    /// </summary>

    std::string getOrgType() const;
    bool orgTypeIsSet() const;
    void unsetorgType();
    void setOrgType(const std::string& value);

    /// <summary>
    /// **参数解释**： 父节点（根或组织单元）的唯一标识符（ID） **取值范围**： 不涉及
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 账号的统一资源名称 **取值范围**： 不涉及
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);


protected:
    bool delegated_;
    bool delegatedIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string orgType_;
    bool orgTypeIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string urn_;
    bool urnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_OrganizationAccountInfo_H_
