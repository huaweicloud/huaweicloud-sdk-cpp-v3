
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestReviewPageParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestReviewPageParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ReviewPageParam.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CommRequestReviewPageParam
    : public ModelBase
{
public:
    CommRequestReviewPageParam();
    virtual ~CommRequestReviewPageParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommRequestReviewPageParam members

    /// <summary>
    /// 
    /// </summary>

    ReviewPageParam getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const ReviewPageParam& value);


protected:
    ReviewPageParam params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestReviewPageParam_H_
