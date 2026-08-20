
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueBaselineResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueBaselineResult_H_


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
/// 工作项基线返回值
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueBaselineResult
    : public ModelBase
{
public:
    IssueBaselineResult();
    virtual ~IssueBaselineResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueBaselineResult members

    /// <summary>
    /// 变更的工作项ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项变更人ID。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 工作项基线结果。
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// 工作项基线的操作记录ID。
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);

    /// <summary>
    /// 工作项完成基线的unix时间戳，单位：毫秒。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 基线的工作项编号。 基线失败时返回。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 基线的工作项标题。 基线失败时返回。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项基线失败原因。 基线失败时返回。
    /// </summary>

    std::string getFailMessage() const;
    bool failMessageIsSet() const;
    void unsetfailMessage();
    void setFailMessage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string baseline_;
    bool baselineIsSet_;
    std::string operationId_;
    bool operationIdIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string failMessage_;
    bool failMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueBaselineResult_H_
