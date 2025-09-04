
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowSecurityProfileResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowSecurityProfileResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/SecurityTarget.h>
#include <string>
#include <vector>
#include <huaweicloud/iotda/v5/model/SecurityProfile.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowSecurityProfileResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSecurityProfileResponse();
    virtual ~ShowSecurityProfileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSecurityProfileResponse members

    /// <summary>
    /// 安全态势感知配置id
    /// </summary>

    std::string getProfileId() const;
    bool profileIdIsSet() const;
    void unsetprofileId();
    void setProfileId(const std::string& value);

    /// <summary>
    /// 安全态势感知配置类型
    /// </summary>

    std::string getSecurityType() const;
    bool securityTypeIsSet() const;
    void unsetsecurityType();
    void setSecurityType(const std::string& value);

    /// <summary>
    /// 安全态势感知告警级别，CRITICAL：严重告警，MAJOR：重要告警，MINOR：一般告警
    /// </summary>

    std::string getAlarmLevel() const;
    bool alarmLevelIsSet() const;
    void unsetalarmLevel();
    void setAlarmLevel(const std::string& value);

    /// <summary>
    /// 安全态势感知项所属安全风险级别；BASIC_SECURITY：基础安全，ADVANCE_SECURITY：高级安全，ULTIMATE_SECURITY：极致安全
    /// </summary>

    std::string getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(const std::string& value);

    /// <summary>
    /// 安全态势感知项是否开启
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 安全态势感知项配置结构体，用于设备侧检测项下发给设备
    /// </summary>

    std::vector<SecurityProfile>& getProfile();
    bool profileIsSet() const;
    void unsetprofile();
    void setProfile(const std::vector<SecurityProfile>& value);

    /// <summary>
    /// 
    /// </summary>

    SecurityTarget getProfileTargets() const;
    bool profileTargetsIsSet() const;
    void unsetprofileTargets();
    void setProfileTargets(const SecurityTarget& value);


protected:
    std::string profileId_;
    bool profileIdIsSet_;
    std::string securityType_;
    bool securityTypeIsSet_;
    std::string alarmLevel_;
    bool alarmLevelIsSet_;
    std::string securityLevel_;
    bool securityLevelIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::vector<SecurityProfile> profile_;
    bool profileIsSet_;
    SecurityTarget profileTargets_;
    bool profileTargetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowSecurityProfileResponse_H_
