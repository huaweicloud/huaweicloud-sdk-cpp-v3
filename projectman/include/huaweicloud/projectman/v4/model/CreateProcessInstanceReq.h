
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateProcessInstanceReq_cos.h>
#include <huaweicloud/projectman/v4/model/CreateProcessInstanceReq_ccbs.h>
#include <string>
#include <huaweicloud/projectman/v4/model/CreateProcessInstanceReq_opinions.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProcessInstanceReq
    : public ModelBase
{
public:
    CreateProcessInstanceReq();
    virtual ~CreateProcessInstanceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProcessInstanceReq members

    /// <summary>
    /// 标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 类别
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 是否需要决策人审批
    /// </summary>

    bool isNeedApproval() const;
    bool needApprovalIsSet() const;
    void unsetneedApproval();
    void setNeedApproval(bool value);

    /// <summary>
    /// 计划完成日期时间戳，不可早于计划开始日期
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 计划开始日期时间戳，不可晚于计划完成日期
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 抄送人列表
    /// </summary>

    std::vector<std::string>& getCc();
    bool ccIsSet() const;
    void unsetcc();
    void setCc(const std::vector<std::string>& value);

    /// <summary>
    /// 关联wiki
    /// </summary>

    std::vector<std::string>& getAttachWikis();
    bool attachWikisIsSet() const;
    void unsetattachWikis();
    void setAttachWikis(const std::vector<std::string>& value);

    /// <summary>
    /// 关联文件
    /// </summary>

    std::vector<std::string>& getAttachDocuments();
    bool attachDocumentsIsSet() const;
    void unsetattachDocuments();
    void setAttachDocuments(const std::vector<std::string>& value);

    /// <summary>
    /// 决策人
    /// </summary>

    std::vector<CreateProcessInstanceReq_ccbs>& getCcbs();
    bool ccbsIsSet() const;
    void unsetccbs();
    void setCcbs(const std::vector<CreateProcessInstanceReq_ccbs>& value);

    /// <summary>
    /// 评审专家
    /// </summary>

    std::vector<CreateProcessInstanceReq_opinions>& getOpinions();
    bool opinionsIsSet() const;
    void unsetopinions();
    void setOpinions(const std::vector<CreateProcessInstanceReq_opinions>& value);

    /// <summary>
    /// 评审对象
    /// </summary>

    std::vector<CreateProcessInstanceReq_cos>& getCos();
    bool cosIsSet() const;
    void unsetcos();
    void setCos(const std::vector<CreateProcessInstanceReq_cos>& value);

    /// <summary>
    /// 关联文件名
    /// </summary>

    std::vector<std::string>& getLocalAttachmentNames();
    bool localAttachmentNamesIsSet() const;
    void unsetlocalAttachmentNames();
    void setLocalAttachmentNames(const std::vector<std::string>& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string category_;
    bool categoryIsSet_;
    bool needApproval_;
    bool needApprovalIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> cc_;
    bool ccIsSet_;
    std::vector<std::string> attachWikis_;
    bool attachWikisIsSet_;
    std::vector<std::string> attachDocuments_;
    bool attachDocumentsIsSet_;
    std::vector<CreateProcessInstanceReq_ccbs> ccbs_;
    bool ccbsIsSet_;
    std::vector<CreateProcessInstanceReq_opinions> opinions_;
    bool opinionsIsSet_;
    std::vector<CreateProcessInstanceReq_cos> cos_;
    bool cosIsSet_;
    std::vector<std::string> localAttachmentNames_;
    bool localAttachmentNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProcessInstanceReq_H_
