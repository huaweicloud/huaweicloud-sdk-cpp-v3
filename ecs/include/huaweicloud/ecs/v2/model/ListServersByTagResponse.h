
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersByTagResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersByTagResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ecs/v2/model/ServerResource.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServersByTagResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServersByTagResponse();
    virtual ~ListServersByTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServersByTagResponse members

    /// <summary>
    /// 返回的云服务器列表。
    /// </summary>

    std::vector<ServerResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ServerResource>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ServerResource> resources_;
    bool resourcesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersByTagResponse_H_
