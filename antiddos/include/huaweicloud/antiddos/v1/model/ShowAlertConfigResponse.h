
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowAlertConfigResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowAlertConfigResponse_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/AlertConfigResp_warn_config.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ShowAlertConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAlertConfigResponse();
    virtual ~ShowAlertConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlertConfigResponse members

    /// <summary>
    /// 告警群组的唯一标识
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 告警群组描述
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AlertConfigResp_warn_config getWarnConfig() const;
    bool warnConfigIsSet() const;
    void unsetwarnConfig();
    void setWarnConfig(const AlertConfigResp_warn_config& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    AlertConfigResp_warn_config warnConfig_;
    bool warnConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowAlertConfigResponse_H_
