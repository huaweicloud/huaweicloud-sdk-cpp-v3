
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowApiVersionResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowApiVersionResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ApiVersion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowApiVersionResponse
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

    ApiVersion getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const ApiVersion& value);


protected:
    ApiVersion version_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowApiVersionResponse_H_
