
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceEipResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceEipResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceEipResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceEipResponse();
    virtual ~ShowInstanceEipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceEipResponse members

    /// <summary>
    /// 是否能访问公网
    /// </summary>

    bool isCanEnablePublicAccess() const;
    bool canEnablePublicAccessIsSet() const;
    void unsetcanEnablePublicAccess();
    void setCanEnablePublicAccess(bool value);

    /// <summary>
    /// 弹性公网ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性公网IP的网络类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 端口ID。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 弹性公网IP地址。
    /// </summary>

    std::string getPublicIpAddress() const;
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::string& value);

    /// <summary>
    /// 私网IP地址。
    /// </summary>

    std::string getPrivateIpAddress() const;
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::string& value);

    /// <summary>
    /// 弹性公网IP地址。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 带宽ID。
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// 带宽名称。
    /// </summary>

    std::string getBandwidthName() const;
    bool bandwidthNameIsSet() const;
    void unsetbandwidthName();
    void setBandwidthName(const std::string& value);

    /// <summary>
    /// 带宽大小。
    /// </summary>

    std::string getBandwidthSize() const;
    bool bandwidthSizeIsSet() const;
    void unsetbandwidthSize();
    void setBandwidthSize(const std::string& value);

    /// <summary>
    /// 带宽类型。枚举值：PER 和WHOLE。
    /// </summary>

    std::string getBandwidthShareType() const;
    bool bandwidthShareTypeIsSet() const;
    void unsetbandwidthShareType();
    void setBandwidthShareType(const std::string& value);

    /// <summary>
    /// 额外参数，包括订单id、产品id等信息。如果profile不为空，说明是包周期的弹性公网IP。
    /// </summary>

    Object getProfile() const;
    bool profileIsSet() const;
    void unsetprofile();
    void setProfile(const Object& value);


protected:
    bool canEnablePublicAccess_;
    bool canEnablePublicAccessIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string privateIpAddress_;
    bool privateIpAddressIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    std::string bandwidthName_;
    bool bandwidthNameIsSet_;
    std::string bandwidthSize_;
    bool bandwidthSizeIsSet_;
    std::string bandwidthShareType_;
    bool bandwidthShareTypeIsSet_;
    Object profile_;
    bool profileIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceEipResponse_H_
