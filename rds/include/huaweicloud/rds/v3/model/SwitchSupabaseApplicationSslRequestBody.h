
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSupabaseApplicationSslRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSupabaseApplicationSslRequestBody_H_


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
/// SSL开关请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchSupabaseApplicationSslRequestBody
    : public ModelBase
{
public:
    SwitchSupabaseApplicationSslRequestBody();
    virtual ~SwitchSupabaseApplicationSslRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchSupabaseApplicationSslRequestBody members

    /// <summary>
    /// 是否开启SSL。false时cert_id必须为空；true时cert_id必填。
    /// </summary>

    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();
    void setEnableSsl(bool value);

    /// <summary>
    /// 证书ID。enable_ssl&#x3D;true时必填。
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);


protected:
    bool enableSsl_;
    bool enableSslIsSet_;
    std::string certId_;
    bool certIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSupabaseApplicationSslRequestBody_H_
