
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_TenantTrustedIpAddressDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_TenantTrustedIpAddressDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** ip白名单信息。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  TenantTrustedIpAddressDto
    : public ModelBase
{
public:
    TenantTrustedIpAddressDto();
    virtual ~TenantTrustedIpAddressDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TenantTrustedIpAddressDto members

    /// <summary>
    /// **参数解释：** ip白名单id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户id。
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// **参数解释：** 租户id。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** ip范围。
    /// </summary>

    std::string getIpRange() const;
    bool ipRangeIsSet() const;
    void unsetipRange();
    void setIpRange(const std::string& value);

    /// <summary>
    /// **参数解释：** 格式类型。 - 0，表示指定IP。 - 1，表示ip范围。 - 2，表示CIDR。
    /// </summary>

    int32_t getIpType() const;
    bool ipTypeIsSet() const;
    void unsetipType();
    void setIpType(int32_t value);

    /// <summary>
    /// **参数解释：** 起始ip。
    /// </summary>

    std::string getIpStart() const;
    bool ipStartIsSet() const;
    void unsetipStart();
    void setIpStart(const std::string& value);

    /// <summary>
    /// **参数解释：** 结束ip。
    /// </summary>

    std::string getIpEnd() const;
    bool ipEndIsSet() const;
    void unsetipEnd();
    void setIpEnd(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否允许访问代码仓库。 - 0，表示禁止访问。 - 1，表示允许访问。
    /// </summary>

    int32_t getViewFlag() const;
    bool viewFlagIsSet() const;
    void unsetviewFlag();
    void setViewFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 是否允许下载代码。 - 0，表示禁止下载。 - 1，表示允许下载。
    /// </summary>

    int32_t getDownloadFlag() const;
    bool downloadFlagIsSet() const;
    void unsetdownloadFlag();
    void setDownloadFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 是否允许提交代码。 - 0，表示禁止提交。 - 1，表示允许提交。
    /// </summary>

    int32_t getUploadFlag() const;
    bool uploadFlagIsSet() const;
    void unsetuploadFlag();
    void setUploadFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 备注。 **取值范围：** 字符串长度不少于0，不超过200。  
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **参数解释：** MMM dd, yyyy hh:mm:ss a   
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **参数解释：** MMM dd, yyyy hh:mm:ss a   
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序。 - 0，表示默认规则。 - 1，表示自定义规则。
    /// </summary>

    int32_t getOrderFlag() const;
    bool orderFlagIsSet() const;
    void unsetorderFlag();
    void setOrderFlag(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t userId_;
    bool userIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string ipRange_;
    bool ipRangeIsSet_;
    int32_t ipType_;
    bool ipTypeIsSet_;
    std::string ipStart_;
    bool ipStartIsSet_;
    std::string ipEnd_;
    bool ipEndIsSet_;
    int32_t viewFlag_;
    bool viewFlagIsSet_;
    int32_t downloadFlag_;
    bool downloadFlagIsSet_;
    int32_t uploadFlag_;
    bool uploadFlagIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t orderFlag_;
    bool orderFlagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_TenantTrustedIpAddressDto_H_
