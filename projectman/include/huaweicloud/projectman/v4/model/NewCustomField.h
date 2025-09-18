
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_NewCustomField_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_NewCustomField_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义字段
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  NewCustomField
    : public ModelBase
{
public:
    NewCustomField();
    virtual ~NewCustomField();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NewCustomField members

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField() const;
    bool customFieldIsSet() const;
    void unsetcustomField();
    void setCustomField(const std::string& value);

    /// <summary>
    /// 自定义字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 自定义属性对应的值，多个值以英文逗号区分开
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string customField_;
    bool customFieldIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_NewCustomField_H_
