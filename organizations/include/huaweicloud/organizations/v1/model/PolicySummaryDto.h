
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicySummaryDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicySummaryDto_H_


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
/// 包含有关策略的信息，但不包括内容。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  PolicySummaryDto
    : public ModelBase
{
public:
    PolicySummaryDto();
    virtual ~PolicySummaryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicySummaryDto members

    /// <summary>
    /// 一个布尔值，指示指定的策略是否为系统策略。如果为true，即为系统策略，则可以将策略附加到根、组织单元或账号，但不能编辑它。
    /// </summary>

    bool isIsBuiltin() const;
    bool isBuiltinIsSet() const;
    void unsetisBuiltin();
    void setIsBuiltin(bool value);

    /// <summary>
    /// 策略说明。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 策略的唯一标识符（ID）。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 策略的统一资源名称。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 策略的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 策略的类型,service_control_policy：服务控制策略；tag_policy：标签策略。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    bool isBuiltin_;
    bool isBuiltinIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string urn_;
    bool urnIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_PolicySummaryDto_H_
