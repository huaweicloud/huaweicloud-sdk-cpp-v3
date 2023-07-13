
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVersionResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVersionResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Versions.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ShowVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVersionResponse();
    virtual ~ShowVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVersionResponse members

    /// <summary>
    /// 版本信息。
    /// </summary>

    std::vector<Versions>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<Versions>& value);


protected:
    std::vector<Versions> versions_;
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

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVersionResponse_H_
