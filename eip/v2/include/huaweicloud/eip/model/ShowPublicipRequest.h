
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  ShowPublicipRequest
    : public ModelBase
{
public:
    ShowPublicipRequest();
    virtual ~ShowPublicipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPublicipRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPublicipRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPublicipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipRequest_H_
