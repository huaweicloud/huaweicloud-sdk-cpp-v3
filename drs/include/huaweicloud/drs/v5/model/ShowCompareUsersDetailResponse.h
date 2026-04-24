
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareUsersDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareUsersDetailResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/CompareUserInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowCompareUsersDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCompareUsersDetailResponse();
    virtual ~ShowCompareUsersDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCompareUsersDetailResponse members

    /// <summary>
    /// 用户对比信息的总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 用户对比信息
    /// </summary>

    std::vector<CompareUserInfo>& getUserCompareInfo();
    bool userCompareInfoIsSet() const;
    void unsetuserCompareInfo();
    void setUserCompareInfo(const std::vector<CompareUserInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<CompareUserInfo> userCompareInfo_;
    bool userCompareInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareUsersDetailResponse_H_
