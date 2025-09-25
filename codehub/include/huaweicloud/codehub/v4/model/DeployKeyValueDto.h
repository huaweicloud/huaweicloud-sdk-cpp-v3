
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeployKeyValueDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeployKeyValueDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署秘钥
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DeployKeyValueDto
    : public ModelBase
{
public:
    DeployKeyValueDto();
    virtual ~DeployKeyValueDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeployKeyValueDto members

    /// <summary>
    /// **参数解释：** 待检查密钥值。 **取值范围：** 字符串长度不少于1，不超过5000。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeployKeyValueDto_H_
