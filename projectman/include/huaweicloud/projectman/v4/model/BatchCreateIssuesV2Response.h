
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateIssuesV2Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateIssuesV2Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueEntity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchCreateIssuesV2Response
    : public ModelBase, public HttpResponse
{
public:
    BatchCreateIssuesV2Response();
    virtual ~BatchCreateIssuesV2Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateIssuesV2Response members

    /// <summary>
    /// **参数解释**： 批量编辑的结果。
    /// </summary>

    std::vector<IssueEntity>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<IssueEntity>& value);

    /// <summary>
    /// **参数解释**： 返回状态。 **取值范围**： - success：响应成功 - error：响应失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 操作失败原因。 **取值范围**： 不涉及
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::vector<IssueEntity> result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateIssuesV2Response_H_
