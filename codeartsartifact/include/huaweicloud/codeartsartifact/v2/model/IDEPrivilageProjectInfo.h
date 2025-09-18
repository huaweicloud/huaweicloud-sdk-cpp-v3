
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDEPrivilageProjectInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDEPrivilageProjectInfo_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  IDEPrivilageProjectInfo
    : public ModelBase
{
public:
    IDEPrivilageProjectInfo();
    virtual ~IDEPrivilageProjectInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IDEPrivilageProjectInfo members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// tab_id集合
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDEPrivilageProjectInfo_H_
