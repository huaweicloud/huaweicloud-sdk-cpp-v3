
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowApplicationsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowApplicationsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ApplicationDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowApplicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowApplicationsResponse();
    virtual ~ShowApplicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApplicationsResponse members

    /// <summary>
    /// 资源空间信息列表。
    /// </summary>

    std::vector<ApplicationDTO>& getApplications();
    bool applicationsIsSet() const;
    void unsetapplications();
    void setApplications(const std::vector<ApplicationDTO>& value);


protected:
    std::vector<ApplicationDTO> applications_;
    bool applicationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowApplicationsResponse_H_
