
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerBindPublicIPRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerBindPublicIPRequest_H_


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
/// 绑定EIP请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerBindPublicIPRequest
    : public ModelBase
{
public:
    ServerBindPublicIPRequest();
    virtual ~ServerBindPublicIPRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerBindPublicIPRequest members

    /// <summary>
    /// **参数解释**：EIP的ID。 **约束限制**：必填。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);


protected:
    std::string publicIpId_;
    bool publicIpIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerBindPublicIPRequest_H_
