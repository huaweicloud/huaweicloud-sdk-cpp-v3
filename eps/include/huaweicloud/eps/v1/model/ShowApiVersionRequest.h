
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowApiVersionRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowApiVersionRequest_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowApiVersionRequest
    : public ModelBase
{
public:
    ShowApiVersionRequest();
    virtual ~ShowApiVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowApiVersionRequest members

    /// <summary>
    /// 版本ID（版本号），如v1.0。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowApiVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowApiVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowApiVersionRequest_H_
