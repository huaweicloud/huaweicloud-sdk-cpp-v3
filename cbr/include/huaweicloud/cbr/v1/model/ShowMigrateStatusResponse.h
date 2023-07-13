
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMigrateStatusResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMigrateStatusResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/DomainMigrateProjectStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowMigrateStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMigrateStatusResponse();
    virtual ~ShowMigrateStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowMigrateStatusResponse members

    /// <summary>
    /// 租户迁移状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目迁移状态
    /// </summary>

    std::vector<DomainMigrateProjectStatus>& getProjectStatus();
    bool projectStatusIsSet() const;
    void unsetprojectStatus();
    void setProjectStatus(const std::vector<DomainMigrateProjectStatus>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<DomainMigrateProjectStatus> projectStatus_;
    bool projectStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMigrateStatusResponse_H_
