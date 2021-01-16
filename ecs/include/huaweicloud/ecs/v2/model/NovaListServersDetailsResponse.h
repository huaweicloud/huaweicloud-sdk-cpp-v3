
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaServer.h>
#include <huaweicloud/ecs/v2/model/PageLink.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListServersDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListServersDetailsResponse();
    virtual ~NovaListServersDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListServersDetailsResponse members

    /// <summary>
    /// 查询云服务器信息列表。
    /// </summary>

    std::vector<NovaServer>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<NovaServer>& value);

    /// <summary>
    /// 分页查询时，查询下一页数据链接。
    /// </summary>

    std::vector<PageLink>& getServersLinks();
    bool serversLinksIsSet() const;
    void unsetserversLinks();
    void setServersLinks(const std::vector<PageLink>& value);


protected:
    std::vector<NovaServer> servers_;
    bool serversIsSet_;
    std::vector<PageLink> serversLinks_;
    bool serversLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsResponse_H_
