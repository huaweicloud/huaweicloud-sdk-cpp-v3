
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTempApiKeyReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTempApiKeyReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建临时apike请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateTempApiKeyReq
    : public ModelBase
{
public:
    CreateTempApiKeyReq();
    virtual ~CreateTempApiKeyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTempApiKeyReq members

    /// <summary>
    /// **参数解释：** 过期时间。 **约束限制：** 不能是小数。 **取值范围：** 最少1小时，最多24小时。 **默认取值：** 不涉及。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);


protected:
    int64_t expireTime_;
    bool expireTimeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTempApiKeyReq_H_
