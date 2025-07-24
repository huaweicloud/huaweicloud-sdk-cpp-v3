
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_NameAndValueVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_NameAndValueVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户自定义状态对应的用例数目
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  NameAndValueVo
    : public ModelBase
{
public:
    NameAndValueVo();
    virtual ~NameAndValueVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NameAndValueVo members

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 值
    /// </summary>

    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_NameAndValueVo_H_
