
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowMetadataOptionsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowMetadataOptionsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowMetadataOptionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMetadataOptionsResponse();
    virtual ~ShowMetadataOptionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMetadataOptionsResponse members

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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowMetadataOptionsResponse_H_
