
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowLogConvergeConfigResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowLogConvergeConfigResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LogMappingConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowLogConvergeConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLogConvergeConfigResponse();
    virtual ~ShowLogConvergeConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowLogConvergeConfigResponse members

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 组织成员账号id
    /// </summary>

    std::string getMemberAccountId() const;
    bool memberAccountIdIsSet() const;
    void unsetmemberAccountId();
    void setMemberAccountId(const std::string& value);

    /// <summary>
    /// 管理员或者委托管理员项目id
    /// </summary>

    std::string getMemberProjectId() const;
    bool memberProjectIdIsSet() const;
    void unsetmemberProjectId();
    void setMemberProjectId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// creating: 配置创建中   done：配置创建完成
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 组织id
    /// </summary>

    std::string getOrganizationId() const;
    bool organizationIdIsSet() const;
    void unsetorganizationId();
    void setOrganizationId(const std::string& value);

    /// <summary>
    /// 管理员或者委托管理员账号id
    /// </summary>

    std::string getManagementAccountId() const;
    bool managementAccountIdIsSet() const;
    void unsetmanagementAccountId();
    void setManagementAccountId(const std::string& value);

    /// <summary>
    /// 管理员项目id
    /// </summary>

    std::string getManagementProjectId() const;
    bool managementProjectIdIsSet() const;
    void unsetmanagementProjectId();
    void setManagementProjectId(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 日志汇聚配置
    /// </summary>

    std::vector<LogMappingConfig>& getLogMappingConfig();
    bool logMappingConfigIsSet() const;
    void unsetlogMappingConfig();
    void setLogMappingConfig(const std::vector<LogMappingConfig>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string memberAccountId_;
    bool memberAccountIdIsSet_;
    std::string memberProjectId_;
    bool memberProjectIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string organizationId_;
    bool organizationIdIsSet_;
    std::string managementAccountId_;
    bool managementAccountIdIsSet_;
    std::string managementProjectId_;
    bool managementProjectIdIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::vector<LogMappingConfig> logMappingConfig_;
    bool logMappingConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowLogConvergeConfigResponse_H_
