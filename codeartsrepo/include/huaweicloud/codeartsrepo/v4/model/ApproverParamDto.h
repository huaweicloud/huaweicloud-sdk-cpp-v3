
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApproverParamDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApproverParamDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ApproverParamDto
    : public ModelBase
{
public:
    ApproverParamDto();
    virtual ~ApproverParamDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApproverParamDto members

    /// <summary>
    /// 审核人id
    /// </summary>

    int32_t getApproverId() const;
    bool approverIdIsSet() const;
    void unsetapproverId();
    void setApproverId(int32_t value);

    /// <summary>
    /// 代码所有者
    /// </summary>

    bool isCodeOwner() const;
    bool codeOwnerIsSet() const;
    void unsetcodeOwner();
    void setCodeOwner(bool value);

    /// <summary>
    /// 是否接纳
    /// </summary>

    bool isAccept() const;
    bool acceptIsSet() const;
    void unsetaccept();
    void setAccept(bool value);


protected:
    int32_t approverId_;
    bool approverIdIsSet_;
    bool codeOwner_;
    bool codeOwnerIsSet_;
    bool accept_;
    bool acceptIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApproverParamDto_H_
