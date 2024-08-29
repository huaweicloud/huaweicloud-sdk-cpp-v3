
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListCloudServersResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListCloudServersResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/PageLink.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/CloudServer.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ListCloudServersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCloudServersResponse();
    virtual ~ListCloudServersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCloudServersResponse members

    /// <summary>
    /// 查询云服务器个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 查询云服务器信息列表。
    /// </summary>

    std::vector<CloudServer>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<CloudServer>& value);

    /// <summary>
    /// 分页查询时，查询下一页数据链接。
    /// </summary>

    std::vector<PageLink>& getServersLinks();
    bool serversLinksIsSet() const;
    void unsetserversLinks();
    void setServersLinks(const std::vector<PageLink>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<CloudServer> servers_;
    bool serversIsSet_;
    std::vector<PageLink> serversLinks_;
    bool serversLinksIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListCloudServersResponse_H_
