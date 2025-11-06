
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectSettingsInheritCfgResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectSettingsInheritCfgResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ProjectSettingsInheritCfgDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateProjectSettingsInheritCfgResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateProjectSettingsInheritCfgResponse();
    virtual ~UpdateProjectSettingsInheritCfgResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProjectSettingsInheritCfgResponse members

    /// <summary>
    /// 项目继承设置列表
    /// </summary>

    std::vector<ProjectSettingsInheritCfgDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ProjectSettingsInheritCfgDto>& value);


protected:
    std::vector<ProjectSettingsInheritCfgDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateProjectSettingsInheritCfgResponse_H_
