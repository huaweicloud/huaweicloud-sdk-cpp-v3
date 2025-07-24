
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCasesStatusResponseV2_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCasesStatusResponseV2_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用例状态数据
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryCasesStatusResponseV2
    : public ModelBase
{
public:
    QueryCasesStatusResponseV2();
    virtual ~QueryCasesStatusResponseV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCasesStatusResponseV2 members

    /// <summary>
    /// 
    /// </summary>

    std::vector<Object>& getCasesStatusJA();
    bool casesStatusJAIsSet() const;
    void unsetcasesStatusJA();
    void setCasesStatusJA(const std::vector<Object>& value);


protected:
    std::vector<Object> casesStatusJA_;
    bool casesStatusJAIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCasesStatusResponseV2_H_
