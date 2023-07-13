
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_SubscriptionInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_SubscriptionInfo_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 收件方式与信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  SubscriptionInfo
    : public ModelBase
{
public:
    SubscriptionInfo();
    virtual ~SubscriptionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubscriptionInfo members

    /// <summary>
    /// 短信或者邮件列表
    /// </summary>

    std::vector<std::string>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<std::string>& value);

    /// <summary>
    /// 收件方式，sms：短信,email：邮件
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    std::vector<std::string> endpoints_;
    bool endpointsIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_SubscriptionInfo_H_
