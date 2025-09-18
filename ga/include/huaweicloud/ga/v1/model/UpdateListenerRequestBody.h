
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateListenerRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateListenerRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateListenerOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// update Listener request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateListenerRequestBody
    : public ModelBase
{
public:
    UpdateListenerRequestBody();
    virtual ~UpdateListenerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateListenerRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateListenerOption getListener() const;
    bool listenerIsSet() const;
    void unsetlistener();
    void setListener(const UpdateListenerOption& value);


protected:
    UpdateListenerOption listener_;
    bool listenerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateListenerRequestBody_H_
