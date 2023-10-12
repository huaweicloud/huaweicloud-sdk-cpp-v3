
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperationsResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperationsResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/ListOperation.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListOperationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOperationsResponse();
    virtual ~ListOperationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOperationsResponse members

    /// <summary>
    /// 全量云服务的操作事件列表。
    /// </summary>

    std::vector<ListOperation>& getOperations();
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::vector<ListOperation>& value);


protected:
    std::vector<ListOperation> operations_;
    bool operationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperationsResponse_H_
