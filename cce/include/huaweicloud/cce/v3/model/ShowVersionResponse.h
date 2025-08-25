
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowVersionResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowVersionResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cce/v3/model/APIVersionDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowVersionResponse
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
    /// API版本信息列表
    /// </summary>

    std::vector<APIVersionDetail>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<APIVersionDetail>& value);


protected:
    std::vector<APIVersionDetail> versions_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowVersionResponse_H_
