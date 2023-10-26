
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowDDosStatusRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowDDosStatusRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ShowDDosStatusRequest
    : public ModelBase
{
public:
    ShowDDosStatusRequest();
    virtual ~ShowDDosStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDDosStatusRequest members

    /// <summary>
    /// 用户EIP对应的ID
    /// </summary>

    std::string getFloatingIpId() const;
    bool floatingIpIdIsSet() const;
    void unsetfloatingIpId();
    void setFloatingIpId(const std::string& value);

    /// <summary>
    /// 用户EIP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);


protected:
    std::string floatingIpId_;
    bool floatingIpIdIsSet_;
    std::string ip_;
    bool ipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDDosStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDDosStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowDDosStatusRequest_H_
