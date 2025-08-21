
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesDimsInfoRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesDimsInfoRequest_H_


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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesDimsInfoRequest
    : public ModelBase
{
public:
    ListCesDimsInfoRequest();
    virtual ~ListCesDimsInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesDimsInfoRequest members

    /// <summary>
    /// 命名空间，如 SYS.LIVE，与服务上报指标时使用的namespace一致。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);


protected:
    std::string namespace_;
    bool namespaceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCesDimsInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ListCesDimsInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesDimsInfoRequest_H_
