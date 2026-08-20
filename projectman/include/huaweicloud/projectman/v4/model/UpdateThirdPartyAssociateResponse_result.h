
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateThirdPartyAssociateResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateThirdPartyAssociateResponse_result_H_


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
/// 修改工作项下外部链接的响应结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateThirdPartyAssociateResponse_result
    : public ModelBase
{
public:
    UpdateThirdPartyAssociateResponse_result();
    virtual ~UpdateThirdPartyAssociateResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateThirdPartyAssociateResponse_result members

    /// <summary>
    /// 修改失败的字段列表。
    /// </summary>

    std::vector<std::string>& getFail();
    bool failIsSet() const;
    void unsetfail();
    void setFail(const std::vector<std::string>& value);

    /// <summary>
    /// 成功修改的字段集合，每个元素为一个工作项对应的字段名数组。
    /// </summary>

    std::vector<std::vector<std::string>>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<std::vector<std::string>>& value);


protected:
    std::vector<std::string> fail_;
    bool failIsSet_;
    std::vector<std::vector<std::string>> success_;
    bool successIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateThirdPartyAssociateResponse_result_H_
