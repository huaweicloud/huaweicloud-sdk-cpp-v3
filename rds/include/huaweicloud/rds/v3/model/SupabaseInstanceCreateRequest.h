
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseInstanceCreateRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseInstanceCreateRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseDatastore.h>
#include <huaweicloud/rds/v3/model/SupabaseVolumeConfig.h>
#include <huaweicloud/rds/v3/model/TagWithKeyValue.h>
#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/ChargeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 新建托管PG实例请求（manage_type&#x3D;newly_instance时必填）。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseInstanceCreateRequest
    : public ModelBase
{
public:
    SupabaseInstanceCreateRequest();
    virtual ~SupabaseInstanceCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseInstanceCreateRequest members

    /// <summary>
    /// 
    /// </summary>

    SupabaseDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const SupabaseDatastore& value);

    /// <summary>
    /// 
    /// </summary>

    ChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfo& value);

    /// <summary>
    /// PG实例规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SupabaseVolumeConfig getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const SupabaseVolumeConfig& value);

    /// <summary>
    /// 可用区，Single模式下为1个，需与顶层主AZ一致。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 参数模板ID（可选）。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 数据库端口，2100~9500，默认5432。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 安全组ID。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 数据库密码。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 内网IP（可选）。
    /// </summary>

    std::string getDataVip() const;
    bool dataVipIsSet() const;
    void unsetdataVip();
    void setDataVip(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 标签列表，最多20个。
    /// </summary>

    std::vector<TagWithKeyValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagWithKeyValue>& value);


protected:
    SupabaseDatastore datastore_;
    bool datastoreIsSet_;
    ChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    SupabaseVolumeConfig volume_;
    bool volumeIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string dataVip_;
    bool dataVipIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<TagWithKeyValue> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseInstanceCreateRequest_H_
