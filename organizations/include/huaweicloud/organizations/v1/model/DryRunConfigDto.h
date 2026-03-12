
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DryRunConfigDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DryRunConfigDto_H_


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
/// 策略试运行的详细信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DryRunConfigDto
    : public ModelBase
{
public:
    DryRunConfigDto();
    virtual ~DryRunConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DryRunConfigDto members

    /// <summary>
    /// 根的唯一标识符（ID）。
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// 策略试运行的开启状态。enabled：启用；pending_enable：启用中；disabled：禁用；pending_disable：禁用中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 用户桶名称。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 用户桶所在的region。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 用户桶的前缀。
    /// </summary>

    std::string getBucketPrefix() const;
    bool bucketPrefixIsSet() const;
    void unsetbucketPrefix();
    void setBucketPrefix(const std::string& value);

    /// <summary>
    /// 委托名称。Organizations服务通过此委托将试运行日志写入用户obs桶
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 试运行策略的类型名称，service_control_policy服务控制策略。
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);

    /// <summary>
    /// 策略试运行配置的开启时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 策略试运行配置的更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string rootId_;
    bool rootIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string bucketPrefix_;
    bool bucketPrefixIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string policyType_;
    bool policyTypeIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DryRunConfigDto_H_
