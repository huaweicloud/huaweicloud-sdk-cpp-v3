
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BatchUpdateResponse_result_project.h>
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
/// **参数解释：** 返回结果。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateResponse_result
    : public ModelBase
{
public:
    BatchUpdateResponse_result();
    virtual ~BatchUpdateResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateResponse_result members

    /// <summary>
    /// 
    /// </summary>

    BatchUpdateResponse_result_project getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const BatchUpdateResponse_result_project& value);

    /// <summary>
    /// **参数解释：** 历史记录id。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getJournalIds();
    bool journalIdsIsSet() const;
    void unsetjournalIds();
    void setJournalIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 编辑失败的工作项。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getErrorIssues();
    bool errorIssuesIsSet() const;
    void unseterrorIssues();
    void setErrorIssues(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 工作项的迭代版本。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getVersionsIssues();
    bool versionsIssuesIsSet() const;
    void unsetversionsIssues();
    void setVersionsIssues(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 编辑成功的工作项。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getSuccessIssues();
    bool successIssuesIsSet() const;
    void unsetsuccessIssues();
    void setSuccessIssues(const std::vector<std::string>& value);


protected:
    BatchUpdateResponse_result_project project_;
    bool projectIsSet_;
    std::vector<std::string> journalIds_;
    bool journalIdsIsSet_;
    std::vector<int32_t> errorIssues_;
    bool errorIssuesIsSet_;
    std::vector<std::string> versionsIssues_;
    bool versionsIssuesIsSet_;
    std::vector<std::string> successIssues_;
    bool successIssuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateResponse_result_H_
