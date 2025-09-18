
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_DisassociateListenerRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_DisassociateListenerRequestBody_H_


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
/// disassociate listener request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  DisassociateListenerRequestBody
    : public ModelBase
{
public:
    DisassociateListenerRequestBody();
    virtual ~DisassociateListenerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateListenerRequestBody members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_DisassociateListenerRequestBody_H_
