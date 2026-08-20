
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssuesAssociationResp_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssuesAssociationResp_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateThirdPartyAssociateDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 给工作项关联外部链接的响应结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssuesAssociationResp_result
    : public ModelBase
{
public:
    IssuesAssociationResp_result();
    virtual ~IssuesAssociationResp_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssuesAssociationResp_result members

    /// <summary>
    /// 关联失败的工作项列表。
    /// </summary>

    std::vector<CreateThirdPartyAssociateDTO>& getFail();
    bool failIsSet() const;
    void unsetfail();
    void setFail(const std::vector<CreateThirdPartyAssociateDTO>& value);

    /// <summary>
    /// 关联成功的工作项列表。
    /// </summary>

    std::vector<CreateThirdPartyAssociateDTO>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<CreateThirdPartyAssociateDTO>& value);


protected:
    std::vector<CreateThirdPartyAssociateDTO> fail_;
    bool failIsSet_;
    std::vector<CreateThirdPartyAssociateDTO> success_;
    bool successIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssuesAssociationResp_result_H_
