
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/AssignmentConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/PortalOptionsDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ApplicationDto
    : public ModelBase
{
public:
    ApplicationDto();
    virtual ~ApplicationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicationDto members

    /// <summary>
    /// 应用程序URN
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// 应用程序提供商URN
    /// </summary>

    std::string getApplicationProviderUrn() const;
    bool applicationProviderUrnIsSet() const;
    void unsetapplicationProviderUrn();
    void setApplicationProviderUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AssignmentConfigDto getAssignmentConfig() const;
    bool assignmentConfigIsSet() const;
    void unsetassignmentConfig();
    void setAssignmentConfig(const AssignmentConfigDto& value);

    /// <summary>
    /// 应用程序创建时间
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// 应用程序描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// IAM身份中心实例URN
    /// </summary>

    std::string getInstanceUrn() const;
    bool instanceUrnIsSet() const;
    void unsetinstanceUrn();
    void setInstanceUrn(const std::string& value);

    /// <summary>
    /// 应用程序显示名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PortalOptionsDto getPortalOptions() const;
    bool portalOptionsIsSet() const;
    void unsetportalOptions();
    void setPortalOptions(const PortalOptionsDto& value);

    /// <summary>
    /// 应用程序状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 华为云账号
    /// </summary>

    std::string getApplicationAccount() const;
    bool applicationAccountIsSet() const;
    void unsetapplicationAccount();
    void setApplicationAccount(const std::string& value);


protected:
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    std::string applicationProviderUrn_;
    bool applicationProviderUrnIsSet_;
    AssignmentConfigDto assignmentConfig_;
    bool assignmentConfigIsSet_;
    int64_t createdDate_;
    bool createdDateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string instanceUrn_;
    bool instanceUrnIsSet_;
    std::string name_;
    bool nameIsSet_;
    PortalOptionsDto portalOptions_;
    bool portalOptionsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string applicationAccount_;
    bool applicationAccountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationDto_H_
