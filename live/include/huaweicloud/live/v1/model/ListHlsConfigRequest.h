
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHlsConfigRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHlsConfigRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListHlsConfigRequest
    : public ModelBase
{
public:
    ListHlsConfigRequest();
    virtual ~ListHlsConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHlsConfigRequest members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getPushDomain() const;
    bool pushDomainIsSet() const;
    void unsetpushDomain();
    void setPushDomain(const std::string& value);


protected:
    std::string pushDomain_;
    bool pushDomainIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHlsConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ListHlsConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListHlsConfigRequest_H_
