
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAppListResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAppListResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/AppInfo.h>
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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAppListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAppListResponse();
    virtual ~ShowAppListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAppListResponse members

    /// <summary>
    /// 满足条件的应用总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 应用列表
    /// </summary>

    std::vector<AppInfo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<AppInfo>& value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    std::vector<AppInfo> result_;
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

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAppListResponse_H_
