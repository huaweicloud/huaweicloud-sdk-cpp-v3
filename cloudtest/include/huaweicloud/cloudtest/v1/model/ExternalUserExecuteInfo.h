
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalUserExecuteInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalUserExecuteInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户用例执行信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExternalUserExecuteInfo
    : public ModelBase
{
public:
    ExternalUserExecuteInfo();
    virtual ~ExternalUserExecuteInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalUserExecuteInfo members

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const NameAndIdVo& value);

    /// <summary>
    /// 执行用例数
    /// </summary>

    int32_t getExecuteCount() const;
    bool executeCountIsSet() const;
    void unsetexecuteCount();
    void setExecuteCount(int32_t value);


protected:
    NameAndIdVo executor_;
    bool executorIsSet_;
    int32_t executeCount_;
    bool executeCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalUserExecuteInfo_H_
