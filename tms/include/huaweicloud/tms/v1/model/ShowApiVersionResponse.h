
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowApiVersionResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowApiVersionResponse_H_

#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/VersionDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ShowApiVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowApiVersionResponse();
    virtual ~ShowApiVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowApiVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    VersionDetail getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const VersionDetail& value);


protected:
    VersionDetail version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ShowApiVersionResponse_H_
