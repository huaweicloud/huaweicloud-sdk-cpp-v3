
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DisassociateInstanceRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DisassociateInstanceRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  DisassociateInstanceRequest
    : public ModelBase
{
public:
    DisassociateInstanceRequest();
    virtual ~DisassociateInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateInstanceRequest members

    /// <summary>
    /// 解绑实例后是否保留GCB，false表示解绑实例后会同时删除GCB
    /// </summary>

    bool isIsReserveGcb() const;
    bool isReserveGcbIsSet() const;
    void unsetisReserveGcb();
    void setIsReserveGcb(bool value);

    /// <summary>
    /// global_eip_id
    /// </summary>

    std::string getGlobalEipId() const;
    bool globalEipIdIsSet() const;
    void unsetglobalEipId();
    void setGlobalEipId(const std::string& value);


protected:
    bool isReserveGcb_;
    bool isReserveGcbIsSet_;
    std::string globalEipId_;
    bool globalEipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DisassociateInstanceRequest_H_
