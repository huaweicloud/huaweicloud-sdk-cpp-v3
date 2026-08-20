
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateRespDetail_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateRespDetail_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AssociateRespDetail
    : public ModelBase
{
public:
    AssociateRespDetail();
    virtual ~AssociateRespDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateRespDetail members

    /// <summary>
    /// 关联的工作项ID，多个ID使用逗号分割。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getFailMsg() const;
    bool failMsgIsSet() const;
    void unsetfailMsg();
    void setFailMsg(const std::string& value);

    /// <summary>
    /// 操作类型标记位。
    /// </summary>

    int32_t getOperationFlag() const;
    bool operationFlagIsSet() const;
    void unsetoperationFlag();
    void setOperationFlag(int32_t value);

    /// <summary>
    /// 修改日期。
    /// </summary>

    int64_t getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(int64_t value);

    /// <summary>
    /// 修改人。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);


protected:
    std::string issueId_;
    bool issueIdIsSet_;
    std::string failMsg_;
    bool failMsgIsSet_;
    int32_t operationFlag_;
    bool operationFlagIsSet_;
    int64_t modifiedDate_;
    bool modifiedDateIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateRespDetail_H_
