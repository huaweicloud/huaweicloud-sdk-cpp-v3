
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_LeagueUpdateVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_LeagueUpdateVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  LeagueUpdateVo
    : public ModelBase
{
public:
    LeagueUpdateVo();
    virtual ~LeagueUpdateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LeagueUpdateVo members

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 差分隐私开关
    /// </summary>

    bool isDpEnabled() const;
    bool dpEnabledIsSet() const;
    void unsetdpEnabled();
    void setDpEnabled(bool value);

    /// <summary>
    /// 隐私保护类别，HIGH.高，STANDARD.标准
    /// </summary>

    std::string getPrivacyProtectionType() const;
    bool privacyProtectionTypeIsSet() const;
    void unsetprivacyProtectionType();
    void setPrivacyProtectionType(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    bool dpEnabled_;
    bool dpEnabledIsSet_;
    std::string privacyProtectionType_;
    bool privacyProtectionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_LeagueUpdateVo_H_
