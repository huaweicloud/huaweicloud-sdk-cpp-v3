
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantNoticeConfigurationResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantNoticeConfigurationResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTenantNoticeConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTenantNoticeConfigurationResponse();
    virtual ~ShowTenantNoticeConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantNoticeConfigurationResponse members

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

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool sendMsg_;
    bool sendMsgIsSet_;
    std::string properties_;
    bool propertiesIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantNoticeConfigurationResponse_H_
