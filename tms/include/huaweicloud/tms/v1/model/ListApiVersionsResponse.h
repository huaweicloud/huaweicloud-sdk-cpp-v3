
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListApiVersionsResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListApiVersionsResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
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
class HUAWEICLOUD_TMS_V1_EXPORT  ListApiVersionsResponse
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
    /// 版本列表
    /// </summary>

    std::vector<VersionDetail>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<VersionDetail>& value);


protected:
    std::vector<VersionDetail> versions_;
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

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListApiVersionsResponse_H_
