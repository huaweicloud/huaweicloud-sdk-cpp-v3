
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ScanProtocolConfig_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ScanProtocolConfig_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ScanProtocolConfig
    : public ModelBase
{
public:
    ScanProtocolConfig();
    virtual ~ScanProtocolConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScanProtocolConfig members

    /// <summary>
    /// 反病毒动作，0：观察 1：拦截 2：禁用
    /// </summary>

    int32_t getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(int32_t value);

    /// <summary>
    /// 协议类型，包括0：HTTP、1：SMTP、2： POP3、3：IMAP4、4：FTP、5：SMB、6：恶意访问、7：IM
    /// </summary>

    int32_t getProtocolType() const;
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(int32_t value);


protected:
    int32_t action_;
    bool actionIsSet_;
    int32_t protocolType_;
    bool protocolTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ScanProtocolConfig_H_
