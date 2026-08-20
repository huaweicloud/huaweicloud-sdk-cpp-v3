
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteThirdPartyAssociateResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteThirdPartyAssociateResponse_result_H_


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
/// 删除工作项下外部链接的响应结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DeleteThirdPartyAssociateResponse_result
    : public ModelBase
{
public:
    DeleteThirdPartyAssociateResponse_result();
    virtual ~DeleteThirdPartyAssociateResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteThirdPartyAssociateResponse_result members

    /// <summary>
    /// 删除失败的外部链接ID列表。
    /// </summary>

    std::vector<std::string>& getFail();
    bool failIsSet() const;
    void unsetfail();
    void setFail(const std::vector<std::string>& value);

    /// <summary>
    /// 成功删除的外部链接ID列表。
    /// </summary>

    std::vector<std::string>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<std::string>& value);


protected:
    std::vector<std::string> fail_;
    bool failIsSet_;
    std::vector<std::string> success_;
    bool successIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteThirdPartyAssociateResponse_result_H_
