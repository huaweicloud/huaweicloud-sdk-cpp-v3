
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowVersionResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowVersionResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaVersionDetail.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaShowVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaShowVersionResponse();
    virtual ~NovaShowVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaShowVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    NovaVersionDetail getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const NovaVersionDetail& value);


protected:
    NovaVersionDetail version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowVersionResponse_H_
