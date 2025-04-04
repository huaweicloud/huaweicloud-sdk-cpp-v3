
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowUserDetailRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowUserDetailRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowUserDetailRequest
    : public ModelBase
{
public:
    ShowUserDetailRequest();
    virtual ~ShowUserDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserDetailRequest members

    /// <summary>
    /// 用户id。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUserDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUserDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowUserDetailRequest_H_
