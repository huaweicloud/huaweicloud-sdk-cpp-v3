
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestMindmapPageParamV3_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestMindmapPageParamV3_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/MindmapPageParamV3.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CommRequestMindmapPageParamV3
    : public ModelBase
{
public:
    CommRequestMindmapPageParamV3();
    virtual ~CommRequestMindmapPageParamV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommRequestMindmapPageParamV3 members

    /// <summary>
    /// 
    /// </summary>

    MindmapPageParamV3 getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const MindmapPageParamV3& value);


protected:
    MindmapPageParamV3 params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestMindmapPageParamV3_H_
