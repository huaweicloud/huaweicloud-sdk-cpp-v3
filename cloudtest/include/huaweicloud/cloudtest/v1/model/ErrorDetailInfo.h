
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorDetailInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorDetailInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ErrorCaseInfoBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ErrorDetailInfo
    : public ModelBase
{
public:
    ErrorDetailInfo();
    virtual ~ErrorDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorDetailInfo members

    /// <summary>
    /// 批量操作失败的资源的详情信息
    /// </summary>

    std::vector<ErrorCaseInfoBean>& getFailed();
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(const std::vector<ErrorCaseInfoBean>& value);


protected:
    std::vector<ErrorCaseInfoBean> failed_;
    bool failedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorDetailInfo_H_
