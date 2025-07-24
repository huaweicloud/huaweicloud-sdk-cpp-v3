
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestMindmapBackupPageParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestMindmapBackupPageParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/MindmapBackupPageParam.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CommRequestMindmapBackupPageParam
    : public ModelBase
{
public:
    CommRequestMindmapBackupPageParam();
    virtual ~CommRequestMindmapBackupPageParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommRequestMindmapBackupPageParam members

    /// <summary>
    /// 
    /// </summary>

    MindmapBackupPageParam getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const MindmapBackupPageParam& value);


protected:
    MindmapBackupPageParam params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommRequestMindmapBackupPageParam_H_
