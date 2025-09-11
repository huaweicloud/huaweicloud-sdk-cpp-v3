
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StopSessionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StopSessionResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  StopSessionResponse
    : public ModelBase, public HttpResponse
{
public:
    StopSessionResponse();
    virtual ~StopSessionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopSessionResponse members

    /// <summary>
    /// **参数解释**： 查杀指定会话ID列表。
    /// </summary>

    std::vector<std::string>& getSessionIds();
    bool sessionIdsIsSet() const;
    void unsetsessionIds();
    void setSessionIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 结束会话操作执行是否成功。 **取值范围**: - true：成功。 - false：失败。
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);


protected:
    std::vector<std::string> sessionIds_;
    bool sessionIdsIsSet_;
    bool success_;
    bool successIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StopSessionResponse_H_
