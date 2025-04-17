
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_UpdateAlertConfigRequestBody_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_UpdateAlertConfigRequestBody_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v2/model/WarnConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  UpdateAlertConfigRequestBody
    : public ModelBase
{
public:
    UpdateAlertConfigRequestBody();
    virtual ~UpdateAlertConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAlertConfigRequestBody members

    /// <summary>
    /// 告警群组描述。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 告警群组的唯一标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WarnConfig getWarnConfig() const;
    bool warnConfigIsSet() const;
    void unsetwarnConfig();
    void setWarnConfig(const WarnConfig& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    WarnConfig warnConfig_;
    bool warnConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_UpdateAlertConfigRequestBody_H_
