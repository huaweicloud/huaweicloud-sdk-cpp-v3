
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListApiVersionsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListApiVersionsResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
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
class HUAWEICLOUD_SDRS_V1_EXPORT  ListApiVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApiVersionsResponse();
    virtual ~ListApiVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApiVersionsResponse members

    /// <summary>
    /// API版本信息列表。
    /// </summary>

    std::vector<ShowApiVersionParams>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<ShowApiVersionParams>& value);


protected:
    std::vector<ShowApiVersionParams> versions_;
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListApiVersionsResponse_H_
