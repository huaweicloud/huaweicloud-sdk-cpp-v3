
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListIntegerIdAndNameVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListIntegerIdAndNameVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/IntegerIdAndNameVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求的返回的数据对象
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueListIntegerIdAndNameVo
    : public ModelBase
{
public:
    ResultValueListIntegerIdAndNameVo();
    virtual ~ResultValueListIntegerIdAndNameVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueListIntegerIdAndNameVo members

    /// <summary>
    /// 
    /// </summary>

    std::vector<IntegerIdAndNameVo>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<IntegerIdAndNameVo>& value);


protected:
    std::vector<IntegerIdAndNameVo> value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListIntegerIdAndNameVo_H_
