
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_EnterpriseDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_EnterpriseDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenterstore/v1/model/ManagerDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作相关信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  EnterpriseDto
    : public ModelBase
{
public:
    EnterpriseDto();
    virtual ~EnterpriseDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnterpriseDto members

    /// <summary>
    /// 成本中心
    /// </summary>

    std::string getCostCenter() const;
    bool costCenterIsSet() const;
    void unsetcostCenter();
    void setCostCenter(const std::string& value);

    /// <summary>
    /// 部门
    /// </summary>

    std::string getDepartment() const;
    bool departmentIsSet() const;
    void unsetdepartment();
    void setDepartment(const std::string& value);

    /// <summary>
    /// 分部
    /// </summary>

    std::string getDivision() const;
    bool divisionIsSet() const;
    void unsetdivision();
    void setDivision(const std::string& value);

    /// <summary>
    /// 员工编号
    /// </summary>

    std::string getEmployeeNumber() const;
    bool employeeNumberIsSet() const;
    void unsetemployeeNumber();
    void setEmployeeNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ManagerDto getManager() const;
    bool managerIsSet() const;
    void unsetmanager();
    void setManager(const ManagerDto& value);

    /// <summary>
    /// 组织
    /// </summary>

    std::string getOrganization() const;
    bool organizationIsSet() const;
    void unsetorganization();
    void setOrganization(const std::string& value);


protected:
    std::string costCenter_;
    bool costCenterIsSet_;
    std::string department_;
    bool departmentIsSet_;
    std::string division_;
    bool divisionIsSet_;
    std::string employeeNumber_;
    bool employeeNumberIsSet_;
    ManagerDto manager_;
    bool managerIsSet_;
    std::string organization_;
    bool organizationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_EnterpriseDto_H_
