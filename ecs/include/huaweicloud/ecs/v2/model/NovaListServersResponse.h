
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/PageLink.h>
#include <huaweicloud/ecs/v2/model/NovaSimpleServer.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListServersResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListServersResponse();
    virtual ~NovaListServersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListServersResponse members

    /// <summary>
    /// 查询云服务器信息列表
    /// </summary>

    std::vector<NovaSimpleServer>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<NovaSimpleServer>& value);

    /// <summary>
    /// 分页查询时，查询下一页数据链接。
    /// </summary>

    std::vector<PageLink>& getServersLinks();
    bool serversLinksIsSet() const;
    void unsetserversLinks();
    void setServersLinks(const std::vector<PageLink>& value);


protected:
    std::vector<NovaSimpleServer> servers_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersResponse_H_
