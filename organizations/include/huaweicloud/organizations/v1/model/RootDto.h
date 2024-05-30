
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_RootDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_RootDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/organizations/v1/model/PolicyTypeSummaryDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含根的详细信息。根是组织层次结构中的顶级父节点，可以包含组织单元和账号。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  RootDto
    : public ModelBase
{
public:
    RootDto();
    virtual ~RootDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RootDto members

    /// <summary>
    /// 根的唯一标识符（ID）。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 根的统一资源名称。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 根的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 策略类型在当前根已启用，则该类型策略可以绑定到根或其组织单元或账号。
    /// </summary>

    std::vector<PolicyTypeSummaryDto>& getPolicyTypes();
    bool policyTypesIsSet() const;
    void unsetpolicyTypes();
    void setPolicyTypes(const std::vector<PolicyTypeSummaryDto>& value);

    /// <summary>
    /// 根的创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string urn_;
    bool urnIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<PolicyTypeSummaryDto> policyTypes_;
    bool policyTypesIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_RootDto_H_
