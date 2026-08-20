
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIpdIssuesResp_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIpdIssuesResp_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/AssociateRespDetail.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联/取消关联响应对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AssociateIpdIssuesResp
    : public ModelBase
{
public:
    AssociateIpdIssuesResp();
    virtual ~AssociateIpdIssuesResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateIpdIssuesResp members

    /// <summary>
    /// 响应状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 关联失败的原因。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 关联工作项的响应结果。
    /// </summary>

    std::map<std::string, std::vector<AssociateRespDetail>>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, std::vector<AssociateRespDetail>>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::map<std::string, std::vector<AssociateRespDetail>> result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIpdIssuesResp_H_
