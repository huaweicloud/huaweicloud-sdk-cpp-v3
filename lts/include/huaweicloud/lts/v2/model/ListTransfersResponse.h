
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTransfersResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTransfersResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateTransferResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListTransfersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTransfersResponse();
    virtual ~ListTransfersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTransfersResponse members

    /// <summary>
    /// 查询日志转储信息数组
    /// </summary>

    std::vector<CreateTransferResponseBody>& getLogTransfers();
    bool logTransfersIsSet() const;
    void unsetlogTransfers();
    void setLogTransfers(const std::vector<CreateTransferResponseBody>& value);


protected:
    std::vector<CreateTransferResponseBody> logTransfers_;
    bool logTransfersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTransfersResponse_H_
