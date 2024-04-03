
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListVersionsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListVersionsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaVersion.h>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListVersionsResponse();
    virtual ~NovaListVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListVersionsResponse members

    /// <summary>
    /// API版本信息列表
    /// </summary>

    std::vector<NovaVersion>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<NovaVersion>& value);


protected:
    std::vector<NovaVersion> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListVersionsResponse_H_
