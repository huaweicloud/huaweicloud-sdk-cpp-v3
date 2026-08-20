
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_cos_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_cos_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProcessInstanceReq_cos
    : public ModelBase
{
public:
    CreateProcessInstanceReq_cos();
    virtual ~CreateProcessInstanceReq_cos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProcessInstanceReq_cos members

    /// <summary>
    /// 工作项编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 工作项ID
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// 变更类型
    /// </summary>

    std::string getChangeType() const;
    bool changeTypeIsSet() const;
    void unsetchangeType();
    void setChangeType(const std::string& value);

    /// <summary>
    /// 变更前
    /// </summary>

    std::string getBeforeChange() const;
    bool beforeChangeIsSet() const;
    void unsetbeforeChange();
    void setBeforeChange(const std::string& value);

    /// <summary>
    /// 变更后
    /// </summary>

    std::string getAfterChange() const;
    bool afterChangeIsSet() const;
    void unsetafterChange();
    void setAfterChange(const std::string& value);


protected:
    std::string number_;
    bool numberIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string changeType_;
    bool changeTypeIsSet_;
    std::string beforeChange_;
    bool beforeChangeIsSet_;
    std::string afterChange_;
    bool afterChangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_cos_H_
