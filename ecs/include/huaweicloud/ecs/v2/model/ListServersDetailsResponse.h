
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersDetailsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersDetailsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerDetail.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServersDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServersDetailsResponse();
    virtual ~ListServersDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServersDetailsResponse members

    /// <summary>
    /// 弹性云服务器的列表总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 弹性云服务器详情列表，具体参照-查询云服务器详情接口。查询级别不同，返回的详情不同。
    /// </summary>

    std::vector<ServerDetail>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerDetail>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ServerDetail> servers_;
    bool serversIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersDetailsResponse_H_
