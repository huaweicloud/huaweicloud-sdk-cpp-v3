
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListConnectionsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListConnectionsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ConnectionResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListConnectionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConnectionsResponse();
    virtual ~ListConnectionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConnectionsResponse members

    /// <summary>
    /// 连接信息列表。
    /// </summary>

    std::vector<ConnectionResp>& getConnections();
    bool connectionsIsSet() const;
    void unsetconnections();
    void setConnections(const std::vector<ConnectionResp>& value);

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ConnectionResp> connections_;
    bool connectionsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListConnectionsResponse_H_
