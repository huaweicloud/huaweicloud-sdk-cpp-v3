
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueProjectResponseV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueProjectResponseV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueProjectResponseV4
    : public ModelBase
{
public:
    IssueProjectResponseV4();
    virtual ~IssueProjectResponseV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueProjectResponseV4 members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 项目数字id
    /// </summary>

    int32_t getProjectNumId() const;
    bool projectNumIdIsSet() const;
    void unsetprojectNumId();
    void setProjectNumId(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    int32_t projectNumId_;
    bool projectNumIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueProjectResponseV4_H_
