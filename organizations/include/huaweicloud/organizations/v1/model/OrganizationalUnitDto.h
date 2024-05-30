
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_OrganizationalUnitDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_OrganizationalUnitDto_H_


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
/// 包含有关新创建的组织单元的详细信息的结构。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  OrganizationalUnitDto
    : public ModelBase
{
public:
    OrganizationalUnitDto();
    virtual ~OrganizationalUnitDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationalUnitDto members

    /// <summary>
    /// 与组织单元关联的唯一标识符（ID）。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 组织单元的统一资源名称。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 组织单元的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 组织单元的创建时间。
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
    utility::datetime createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_OrganizationalUnitDto_H_
