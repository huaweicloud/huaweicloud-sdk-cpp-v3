
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistRequestBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/EipInfo.h>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  AddEipAlarmWhitelistRequestBody
    : public ModelBase
{
public:
    AddEipAlarmWhitelistRequestBody();
    virtual ~AddEipAlarmWhitelistRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddEipAlarmWhitelistRequestBody members

    /// <summary>
    /// **参数解释**： EIP详情 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<EipInfo>& getEipInfos();
    bool eipInfosIsSet() const;
    void unseteipInfos();
    void setEipInfos(const std::vector<EipInfo>& value);

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);


protected:
    std::vector<EipInfo> eipInfos_;
    bool eipInfosIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddEipAlarmWhitelistRequestBody_H_
