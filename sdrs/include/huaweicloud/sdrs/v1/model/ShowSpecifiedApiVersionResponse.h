
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowSpecifiedApiVersionResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowSpecifiedApiVersionResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowApiVersionParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowSpecifiedApiVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSpecifiedApiVersionResponse();
    virtual ~ShowSpecifiedApiVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSpecifiedApiVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowApiVersionParams getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const ShowApiVersionParams& value);


protected:
    ShowApiVersionParams version_;
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowSpecifiedApiVersionResponse_H_
