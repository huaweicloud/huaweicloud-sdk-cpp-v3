
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ParseIpListResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ParseIpListResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 查询域名解析的ip列表 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ParseIpListResponse
    : public ModelBase
{
public:
    ParseIpListResponse();
    virtual ~ParseIpListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParseIpListResponse members

    /// <summary>
    /// **参数解释**： 超过限制的ip列表 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getExcessIp();
    bool excessIpIsSet() const;
    void unsetexcessIp();
    void setExcessIp(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 成功解析的ip列表 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getParsedSuccessIp();
    bool parsedSuccessIpIsSet() const;
    void unsetparsedSuccessIp();
    void setParsedSuccessIp(const std::vector<std::string>& value);


protected:
    std::vector<std::string> excessIp_;
    bool excessIpIsSet_;
    std::vector<std::string> parsedSuccessIp_;
    bool parsedSuccessIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ParseIpListResponse_H_
