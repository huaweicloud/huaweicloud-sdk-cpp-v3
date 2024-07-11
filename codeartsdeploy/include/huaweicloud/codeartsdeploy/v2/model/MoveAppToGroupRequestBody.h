
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 移动应用至指定分组请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  MoveAppToGroupRequestBody
    : public ModelBase
{
public:
    MoveAppToGroupRequestBody();
    virtual ~MoveAppToGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveAppToGroupRequestBody members

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 应用id列表
    /// </summary>

    std::vector<std::string>& getApplicationIds();
    bool applicationIdsIsSet() const;
    void unsetapplicationIds();
    void setApplicationIds(const std::vector<std::string>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<std::string> applicationIds_;
    bool applicationIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupRequestBody_H_
