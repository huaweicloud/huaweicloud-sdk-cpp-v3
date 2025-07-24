
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestTestPointPageParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestTestPointPageParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestPointPageParam.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CommRequestTestPointPageParam
    : public ModelBase
{
public:
    CommRequestTestPointPageParam();
    virtual ~CommRequestTestPointPageParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommRequestTestPointPageParam members

    /// <summary>
    /// 
    /// </summary>

    TestPointPageParam getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const TestPointPageParam& value);


protected:
    TestPointPageParam params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestTestPointPageParam_H_
