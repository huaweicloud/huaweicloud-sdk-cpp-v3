
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueBoolean_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueBoolean_H_


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
/// 请求的返回的数据对象
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueBoolean
    : public ModelBase
{
public:
    ResultValueBoolean();
    virtual ~ResultValueBoolean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueBoolean members

    /// <summary>
    /// 实际的数据类型：单个对象，集合 或 NULL
    /// </summary>

    bool isValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(bool value);


protected:
    bool value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueBoolean_H_
