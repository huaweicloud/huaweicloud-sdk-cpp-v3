
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CountAsyncHistoryCommandsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CountAsyncHistoryCommandsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CountAsyncHistoryCommandsResponse
    : public ModelBase, public HttpResponse
{
public:
    CountAsyncHistoryCommandsResponse();
    virtual ~CountAsyncHistoryCommandsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountAsyncHistoryCommandsResponse members

    /// <summary>
    /// 满足查询条件的记录总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    int64_t count_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CountAsyncHistoryCommandsResponse_H_
