
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetTenantNoticeConfigurationReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetTenantNoticeConfigurationReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置租户预警个性化配置请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SetTenantNoticeConfigurationReq
    : public ModelBase
{
public:
    SetTenantNoticeConfigurationReq();
    virtual ~SetTenantNoticeConfigurationReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetTenantNoticeConfigurationReq members

    /// <summary>
    /// 通知类型。 * RESOURCE_EXPIRE：资源过期通知 * RESOURCE_LEFT：资源剩余量通知
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否发送短信。
    /// </summary>

    bool isSendMsg() const;
    bool sendMsgIsSet() const;
    void unsetsendMsg();
    void setSendMsg(bool value);

    /// <summary>
    /// 通知配置项
    /// </summary>

    std::string getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool sendMsg_;
    bool sendMsgIsSet_;
    std::string properties_;
    bool propertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetTenantNoticeConfigurationReq_H_
