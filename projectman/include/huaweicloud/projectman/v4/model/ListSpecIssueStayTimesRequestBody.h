
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListSpecIssueStayTimesRequestBody
    : public ModelBase
{
public:
    ListSpecIssueStayTimesRequestBody();
    virtual ~ListSpecIssueStayTimesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpecIssueStayTimesRequestBody members

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项id字符串列表
    /// </summary>

    std::vector<std::string>& getIssueIds();
    bool issueIdsIsSet() const;
    void unsetissueIds();
    void setIssueIds(const std::vector<std::string>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> issueIds_;
    bool issueIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesRequestBody_H_
