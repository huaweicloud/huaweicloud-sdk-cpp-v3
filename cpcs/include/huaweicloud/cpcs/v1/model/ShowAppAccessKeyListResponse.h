
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAppAccessKeyListResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAppAccessKeyListResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cpcs/v1/model/AccessKeyInfo.h>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAppAccessKeyListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAppAccessKeyListResponse();
    virtual ~ShowAppAccessKeyListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAppAccessKeyListResponse members

    /// <summary>
    /// 访问密钥列表
    /// </summary>

    std::vector<AccessKeyInfo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<AccessKeyInfo>& value);

    /// <summary>
    /// 满足条件的密钥总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);


protected:
    std::vector<AccessKeyInfo> result_;
    bool resultIsSet_;
    int32_t totalNum_;
    bool totalNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAppAccessKeyListResponse_H_
