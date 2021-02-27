
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerGroupsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerGroupsResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ListServerGroupsResult.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/ListServerGroupsPageInfoResult.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerGroupsResponse();
    virtual ~ListServerGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerGroupsResponse members

    /// <summary>
    /// 弹性云服务器组信息
    /// </summary>

    std::vector<ListServerGroupsResult>& getServerGroups();
    bool serverGroupsIsSet() const;
    void unsetserverGroups();
    void setServerGroups(const std::vector<ListServerGroupsResult>& value);

    /// <summary>
    /// 
    /// </summary>

    ListServerGroupsPageInfoResult getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const ListServerGroupsPageInfoResult& value);


protected:
    std::vector<ListServerGroupsResult> serverGroups_;
    bool serverGroupsIsSet_;
    ListServerGroupsPageInfoResult pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerGroupsResponse_H_
