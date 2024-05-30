
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTypeSummaryDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTypeSummaryDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含根中的一个策略类型和状态信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  PolicyTypeSummaryDto
    : public ModelBase
{
public:
    PolicyTypeSummaryDto();
    virtual ~PolicyTypeSummaryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyTypeSummaryDto members

    /// <summary>
    /// 与根关联的策略类型状态。要将指定类型的策略绑定到根或该根中的组织单元或账号，该策略必须在组织中可用，并在该根已启用。enabled：启用；pending_enable：启用中；disabled：禁用；pending_disable：禁用中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 策略类型的名称，service_control_policy：服务控制策略；tag_policy：标签策略。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicyTypeSummaryDto_H_
