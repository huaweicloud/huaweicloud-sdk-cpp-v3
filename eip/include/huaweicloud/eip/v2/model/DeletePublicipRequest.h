
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_DeletePublicipRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_DeletePublicipRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  DeletePublicipRequest
    : public ModelBase
{
public:
    DeletePublicipRequest();
    virtual ~DeletePublicipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeletePublicipRequest members

    /// <summary>
    /// 弹性公网IP唯一标识
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
    DeletePublicipRequest& dereference_from_shared_ptr(std::shared_ptr<DeletePublicipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_DeletePublicipRequest_H_
