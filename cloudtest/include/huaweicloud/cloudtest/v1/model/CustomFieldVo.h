
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CustomFieldVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CustomFieldVo_H_


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
/// 自定义字段信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CustomFieldVo
    : public ModelBase
{
public:
    CustomFieldVo();
    virtual ~CustomFieldVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomFieldVo members

    /// <summary>
    /// 字段类型（单行文本text、多行文本textArea、单选框radio、多选框checkBox、日期date、数字number、单选用户user）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 测试用例自定义字段值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段入参或者返回参数名称
    /// </summary>

    std::string getCustomFieldParam() const;
    bool customFieldParamIsSet() const;
    void unsetcustomFieldParam();
    void setCustomFieldParam(const std::string& value);

    /// <summary>
    /// user类型测试用例自定义字段对应用户名，其它类型字段不返回
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string customFieldParam_;
    bool customFieldParamIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CustomFieldVo_H_
