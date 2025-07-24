
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_NameAndValueAndCodeVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_NameAndValueAndCodeVo_H_


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
/// 用户自定义结果对应的用例数目
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  NameAndValueAndCodeVo
    : public ModelBase
{
public:
    NameAndValueAndCodeVo();
    virtual ~NameAndValueAndCodeVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NameAndValueAndCodeVo members

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

    /// <summary>
    /// 编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t value_;
    bool valueIsSet_;
    std::string code_;
    bool codeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_NameAndValueAndCodeVo_H_
