
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSupabaseApplicationEipBindRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSupabaseApplicationEipBindRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EIP绑解请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchSupabaseApplicationEipBindRequestBody
    : public ModelBase
{
public:
    SwitchSupabaseApplicationEipBindRequestBody();
    virtual ~SwitchSupabaseApplicationEipBindRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchSupabaseApplicationEipBindRequestBody members

    /// <summary>
    /// true绑定，false解绑。is_bind&#x3D;true时public_ip_id和public_ip_address必填。
    /// </summary>

    bool isIsBind() const;
    bool isBindIsSet() const;
    void unsetisBind();
    void setIsBind(bool value);

    /// <summary>
    /// 弹性公网IP地址。
    /// </summary>

    std::string getPublicIpAddress() const;
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::string& value);

    /// <summary>
    /// 弹性公网IP ID（UUID）。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);


protected:
    bool isBind_;
    bool isBindIsSet_;
    std::string publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSupabaseApplicationEipBindRequestBody_H_
