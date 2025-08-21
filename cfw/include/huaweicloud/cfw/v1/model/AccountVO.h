
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  AccountVO
    : public ModelBase
{
public:
    AccountVO();
    virtual ~AccountVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountVO members

    /// <summary>
    /// **参数解释**： 账号ID **取值范围**： 不涉及
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// **参数解释**： 账号名称 **取值范围**： 不涉及
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// **参数解释**： 防护的EIP数量 **取值范围**： 不涉及
    /// </summary>

    int32_t getEipCountProtected() const;
    bool eipCountProtectedIsSet() const;
    void unseteipCountProtected();
    void setEipCountProtected(int32_t value);

    /// <summary>
    /// **参数解释**： EIP总数 **取值范围**： 不涉及
    /// </summary>

    int32_t getEipCountTotal() const;
    bool eipCountTotalIsSet() const;
    void unseteipCountTotal();
    void setEipCountTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 未开启防护的EIP数量 **取值范围**： 不涉及
    /// </summary>

    int32_t getEipCountUnprotected() const;
    bool eipCountUnprotectedIsSet() const;
    void unseteipCountUnprotected();
    void setEipCountUnprotected(int32_t value);

    /// <summary>
    /// **参数解释**： 组织ID **取值范围**： 不涉及
    /// </summary>

    std::string getOrganizationId() const;
    bool organizationIdIsSet() const;
    void unsetorganizationId();
    void setOrganizationId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID **取值范围**： 不涉及
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称 **取值范围**： 不涉及
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountName_;
    bool accountNameIsSet_;
    int32_t eipCountProtected_;
    bool eipCountProtectedIsSet_;
    int32_t eipCountTotal_;
    bool eipCountTotalIsSet_;
    int32_t eipCountUnprotected_;
    bool eipCountUnprotectedIsSet_;
    std::string organizationId_;
    bool organizationIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountVO_H_
