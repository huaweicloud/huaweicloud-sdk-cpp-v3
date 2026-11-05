
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseManagedInstanceInfo.h>
#include <string>
#include <huaweicloud/rds/v3/model/SupabaseStorageComponentInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowSupabaseApplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSupabaseApplicationResponse();
    virtual ~ShowSupabaseApplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSupabaseApplicationResponse members

    /// <summary>
    /// 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 运行状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();
    void setEnableSsl(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseStorageComponentInfo getStorageComponent() const;
    bool storageComponentIsSet() const;
    void unsetstorageComponent();
    void setStorageComponent(const SupabaseStorageComponentInfo& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseManagedInstanceInfo getManagedInstance() const;
    bool managedInstanceIsSet() const;
    void unsetmanagedInstance();
    void setManagedInstance(const SupabaseManagedInstanceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool enableSsl_;
    bool enableSslIsSet_;
    std::string certId_;
    bool certIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    SupabaseStorageComponentInfo storageComponent_;
    bool storageComponentIsSet_;
    SupabaseManagedInstanceInfo managedInstance_;
    bool managedInstanceIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationResponse_H_
