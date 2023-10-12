
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListRecordCallbackConfigsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListRecordCallbackConfigsResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordCallbackConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListRecordCallbackConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecordCallbackConfigsResponse();
    virtual ~ListRecordCallbackConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecordCallbackConfigsResponse members

    /// <summary>
    /// 查询结果的总元素数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 回调配置
    /// </summary>

    std::vector<RecordCallbackConfig>& getCallbackConfig();
    bool callbackConfigIsSet() const;
    void unsetcallbackConfig();
    void setCallbackConfig(const std::vector<RecordCallbackConfig>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<RecordCallbackConfig> callbackConfig_;
    bool callbackConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListRecordCallbackConfigsResponse_H_
