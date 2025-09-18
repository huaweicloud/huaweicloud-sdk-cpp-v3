
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ShowListenerRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ShowListenerRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ShowListenerRequest
    : public ModelBase
{
public:
    ShowListenerRequest();
    virtual ~ShowListenerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowListenerRequest members

    /// <summary>
    /// 监听器ID。
    /// </summary>

    std::string getListenerId() const;
    bool listenerIdIsSet() const;
    void unsetlistenerId();
    void setListenerId(const std::string& value);


protected:
    std::string listenerId_;
    bool listenerIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowListenerRequest& dereference_from_shared_ptr(std::shared_ptr<ShowListenerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ShowListenerRequest_H_
