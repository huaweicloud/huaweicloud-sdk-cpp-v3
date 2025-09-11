
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowClusterAccessKeyListResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowClusterAccessKeyListResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowClusterAccessKeyListResponseBody_result.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowClusterAccessKeyListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClusterAccessKeyListResponse();
    virtual ~ShowClusterAccessKeyListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClusterAccessKeyListResponse members

    /// <summary>
    /// 已授权的访问密钥列表
    /// </summary>

    std::vector<ShowClusterAccessKeyListResponseBody_result>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ShowClusterAccessKeyListResponseBody_result>& value);


protected:
    std::vector<ShowClusterAccessKeyListResponseBody_result> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowClusterAccessKeyListResponse_H_
