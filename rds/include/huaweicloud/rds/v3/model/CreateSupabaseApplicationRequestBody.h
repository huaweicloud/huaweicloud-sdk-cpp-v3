
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseInstanceCreateRequest.h>
#include <huaweicloud/rds/v3/model/SupabaseExistingInstanceRequest.h>
#include <string>
#include <huaweicloud/rds/v3/model/SupabaseStorageComponentConfig.h>
#include <huaweicloud/rds/v3/model/SupabaseAppBasicConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建Supabase应用请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSupabaseApplicationRequestBody
    : public ModelBase
{
public:
    CreateSupabaseApplicationRequestBody();
    virtual ~CreateSupabaseApplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSupabaseApplicationRequestBody members

    /// <summary>
    /// Supabase应用名称，4~64个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseAppBasicConfig getBasicConfig() const;
    bool basicConfigIsSet() const;
    void unsetbasicConfig();
    void setBasicConfig(const SupabaseAppBasicConfig& value);

    /// <summary>
    /// Supabase版本号，格式 x.y.z。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 部署模式。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 规格码，格式 rds.supabase.{...}。Ha模式必须以.ha结尾，Single不得以.ha结尾。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 可用区ID。Single&#x3D;1个，Ha&#x3D;2个逗号分隔。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 指定实例内网IP（可选）。IPv4格式。
    /// </summary>

    std::string getDataVip() const;
    bool dataVipIsSet() const;
    void unsetdataVip();
    void setDataVip(const std::string& value);

    /// <summary>
    /// 指定实例所属安全组（可选）。UUID格式。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 默认用户supabase的密码。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseStorageComponentConfig getStorageComponent() const;
    bool storageComponentIsSet() const;
    void unsetstorageComponent();
    void setStorageComponent(const SupabaseStorageComponentConfig& value);

    /// <summary>
    /// 实例纳管方式。默认newly_instance。
    /// </summary>

    std::string getManageType() const;
    bool manageTypeIsSet() const;
    void unsetmanageType();
    void setManageType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseInstanceCreateRequest getManagedInstance() const;
    bool managedInstanceIsSet() const;
    void unsetmanagedInstance();
    void setManagedInstance(const SupabaseInstanceCreateRequest& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseExistingInstanceRequest getExistingInstance() const;
    bool existingInstanceIsSet() const;
    void unsetexistingInstance();
    void setExistingInstance(const SupabaseExistingInstanceRequest& value);


protected:
    std::string name_;
    bool nameIsSet_;
    SupabaseAppBasicConfig basicConfig_;
    bool basicConfigIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string dataVip_;
    bool dataVipIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string password_;
    bool passwordIsSet_;
    SupabaseStorageComponentConfig storageComponent_;
    bool storageComponentIsSet_;
    std::string manageType_;
    bool manageTypeIsSet_;
    SupabaseInstanceCreateRequest managedInstance_;
    bool managedInstanceIsSet_;
    SupabaseExistingInstanceRequest existingInstance_;
    bool existingInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationRequestBody_H_
