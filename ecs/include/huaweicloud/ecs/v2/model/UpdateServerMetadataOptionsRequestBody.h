
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataOptionsRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataOptionsRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器元数据配置请求体。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerMetadataOptionsRequestBody
    : public ModelBase
{
public:
    UpdateServerMetadataOptionsRequestBody();
    virtual ~UpdateServerMetadataOptionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerMetadataOptionsRequestBody members

    /// <summary>
    /// 是否禁用IMDS服务。
    /// </summary>

    std::string getHttpEndpoint() const;
    bool httpEndpointIsSet() const;
    void unsethttpEndpoint();
    void setHttpEndpoint(const std::string& value);

    /// <summary>
    /// 是否要求携带token。
    /// </summary>

    std::string getHttpTokens() const;
    bool httpTokensIsSet() const;
    void unsethttpTokens();
    void setHttpTokens(const std::string& value);


protected:
    std::string httpEndpoint_;
    bool httpEndpointIsSet_;
    std::string httpTokens_;
    bool httpTokensIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataOptionsRequestBody_H_
