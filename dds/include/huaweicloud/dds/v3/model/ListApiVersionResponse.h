
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListApiVersionResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListApiVersionResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ApiVersion.h>
#include <vector>

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
class HUAWEICLOUD_DDS_V3_EXPORT  ListApiVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApiVersionResponse();
    virtual ~ListApiVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListApiVersionResponse members

    /// <summary>
    /// API版本详细信息列表。
    /// </summary>

    std::vector<ApiVersion>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<ApiVersion>& value);


protected:
    std::vector<ApiVersion> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListApiVersionResponse_H_
