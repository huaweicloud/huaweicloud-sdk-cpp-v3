
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelRecordSettings_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelRecordSettings_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ModifyOttChannelRecordSettings_record_settings.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// OTT频道修改录制消息体
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyOttChannelRecordSettings
    : public ModelBase
{
public:
    ModifyOttChannelRecordSettings();
    virtual ~ModifyOttChannelRecordSettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyOttChannelRecordSettings members

    /// <summary>
    /// 频道推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 组名或应用名
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 频道ID。频道唯一标识，为必填项
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyOttChannelRecordSettings_record_settings getRecordSettings() const;
    bool recordSettingsIsSet() const;
    void unsetrecordSettings();
    void setRecordSettings(const ModifyOttChannelRecordSettings_record_settings& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;
    ModifyOttChannelRecordSettings_record_settings recordSettings_;
    bool recordSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelRecordSettings_H_
