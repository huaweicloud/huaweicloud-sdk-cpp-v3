
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateFollow302SwitchResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateFollow302SwitchResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/Follow302StatusBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateFollow302SwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateFollow302SwitchResponse();
    virtual ~UpdateFollow302SwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFollow302SwitchResponse members

    /// <summary>
    /// 
    /// </summary>

    Follow302StatusBody getFollowStatus() const;
    bool followStatusIsSet() const;
    void unsetfollowStatus();
    void setFollowStatus(const Follow302StatusBody& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    Follow302StatusBody followStatus_;
    bool followStatusIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateFollow302SwitchResponse_H_
