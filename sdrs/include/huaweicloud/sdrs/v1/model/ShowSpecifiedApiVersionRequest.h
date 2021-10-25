
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowSpecifiedApiVersionRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowSpecifiedApiVersionRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowSpecifiedApiVersionRequest
    : public ModelBase
{
public:
    ShowSpecifiedApiVersionRequest();
    virtual ~ShowSpecifiedApiVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSpecifiedApiVersionRequest members

    /// <summary>
    /// API版本号。例如: v1。
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
    ShowSpecifiedApiVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSpecifiedApiVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowSpecifiedApiVersionRequest_H_
