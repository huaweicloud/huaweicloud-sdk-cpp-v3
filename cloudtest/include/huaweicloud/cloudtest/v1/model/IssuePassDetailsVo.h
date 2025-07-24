
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuePassDetailsVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuePassDetailsVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 需求通过情况
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssuePassDetailsVo
    : public ModelBase
{
public:
    IssuePassDetailsVo();
    virtual ~IssuePassDetailsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssuePassDetailsVo members

    /// <summary>
    /// 统计测试中的需求
    /// </summary>

    int32_t getTesting() const;
    bool testingIsSet() const;
    void unsettesting();
    void setTesting(int32_t value);

    /// <summary>
    /// 统计已完成的需求
    /// </summary>

    int32_t getFinished() const;
    bool finishedIsSet() const;
    void unsetfinished();
    void setFinished(int32_t value);

    /// <summary>
    /// 统计未完成的需求
    /// </summary>

    int32_t getNotTested() const;
    bool notTestedIsSet() const;
    void unsetnotTested();
    void setNotTested(int32_t value);


protected:
    int32_t testing_;
    bool testingIsSet_;
    int32_t finished_;
    bool finishedIsSet_;
    int32_t notTested_;
    bool notTestedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuePassDetailsVo_H_
