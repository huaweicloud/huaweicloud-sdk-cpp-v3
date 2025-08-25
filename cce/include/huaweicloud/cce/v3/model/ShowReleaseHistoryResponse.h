
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowReleaseHistoryResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowReleaseHistoryResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ReleaseResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowReleaseHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReleaseHistoryResponse();
    virtual ~ShowReleaseHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReleaseHistoryResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ReleaseResp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ReleaseResp>& value);


protected:
    std::vector<ReleaseResp> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowReleaseHistoryResponse_H_
