
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetTopologiesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetTopologiesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerPhyInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetTopologiesResponse
    : public ModelBase, public HttpResponse
{
public:
    GetTopologiesResponse();
    virtual ~GetTopologiesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetTopologiesResponse members

    /// <summary>
    /// **参数解释**：server列表。
    /// </summary>

    std::vector<ServerPhyInfo>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerPhyInfo>& value);


protected:
    std::vector<ServerPhyInfo> servers_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetTopologiesResponse_H_
