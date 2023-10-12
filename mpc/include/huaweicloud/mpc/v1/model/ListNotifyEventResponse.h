
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListNotifyEventResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListNotifyEventResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListNotifyEventResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNotifyEventResponse();
    virtual ~ListNotifyEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNotifyEventResponse members

    /// <summary>
    /// 事件名称
    /// </summary>

    std::vector<std::string>& getEventName();
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::vector<std::string>& value);

    /// <summary>
    /// 点播通知事件总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<std::string> eventName_;
    bool eventNameIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListNotifyEventResponse_H_
