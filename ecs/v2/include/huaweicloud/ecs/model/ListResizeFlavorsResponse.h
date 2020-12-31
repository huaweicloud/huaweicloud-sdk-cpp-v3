
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResponse_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <vector>
#include "huaweicloud/ecs/model/ListResizeFlavorsResult.h"

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
class HUAWEICLOUD_ECS_EXPORT  ListResizeFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResizeFlavorsResponse();
    virtual ~ListResizeFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResizeFlavorsResponse members

    /// <summary>
    /// 云服务器规格列表。
    /// </summary>

    std::vector<ListResizeFlavorsResult>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<ListResizeFlavorsResult>& value);


protected:
    std::vector<ListResizeFlavorsResult> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResponse_H_
