
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_OrganizationDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_OrganizationDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含有关组织的详细信息。组织是账号集合，由组织单元构成的层次结构，并通过策略控制。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  OrganizationDto
    : public ModelBase
{
public:
    OrganizationDto();
    virtual ~OrganizationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationDto members

    /// <summary>
    /// 组织的唯一标识符（ID）。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 组织的统一资源名称。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 组织管理账号的唯一标识符（ID）。
    /// </summary>

    std::string getManagementAccountId() const;
    bool managementAccountIdIsSet() const;
    void unsetmanagementAccountId();
    void setManagementAccountId(const std::string& value);

    /// <summary>
    /// 组织的管理账号的名称。
    /// </summary>

    std::string getManagementAccountName() const;
    bool managementAccountNameIsSet() const;
    void unsetmanagementAccountName();
    void setManagementAccountName(const std::string& value);

    /// <summary>
    /// 组织的创建时间。
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
    std::string managementAccountId_;
    bool managementAccountIdIsSet_;
    std::string managementAccountName_;
    bool managementAccountNameIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_OrganizationDto_H_
