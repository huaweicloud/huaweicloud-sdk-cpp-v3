
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListVaultRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListVaultRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListVaultRequest
    : public ModelBase
{
public:
    ListVaultRequest();
    virtual ~ListVaultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVaultRequest members

    /// <summary>
    /// 每页显示条目数，正整数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 存储库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 偏移值,正整数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 云类型
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// 保护类型
    /// </summary>

    std::string getProtectType() const;
    bool protectTypeIsSet() const;
    void unsetprotectType();
    void setProtectType(const std::string& value);

    /// <summary>
    /// 对象类型：云服务器（server），云硬盘（disk），文件系统（turbo），云桌面（workspace），VMware（vmware），关系型数据库（rds），文件（file）。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 企业项目id或all_granted_eps，all_granted_eps表示查询用户有权限的所有企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 资源id，支持多资源，以英文逗号分隔
    /// </summary>

    std::string getResourceIds() const;
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string cloudType_;
    bool cloudTypeIsSet_;
    std::string protectType_;
    bool protectTypeIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string resourceIds_;
    bool resourceIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVaultRequest& dereference_from_shared_ptr(std::shared_ptr<ListVaultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListVaultRequest_H_
