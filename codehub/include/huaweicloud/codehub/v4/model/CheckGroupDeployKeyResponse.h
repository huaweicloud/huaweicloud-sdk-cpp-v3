
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CheckGroupDeployKeyResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CheckGroupDeployKeyResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CheckGroupDeployKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckGroupDeployKeyResponse();
    virtual ~CheckGroupDeployKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckGroupDeployKeyResponse members

    /// <summary>
    /// **参数解释：** 部署秘钥在上层代码组或项目是否配置。 **取值范围：** - true，上层代码组或项目已配置该密钥。 - false，上层代码组或项目未配置该密钥。
    /// </summary>

    bool isExists() const;
    bool existsIsSet() const;
    void unsetexists();
    void setExists(bool value);


protected:
    bool exists_;
    bool existsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CheckGroupDeployKeyResponse_H_
