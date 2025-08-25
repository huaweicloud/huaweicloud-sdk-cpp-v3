
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PackageOptions_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PackageOptions_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置参数结构
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PackageOptions
    : public ModelBase
{
public:
    PackageOptions();
    virtual ~PackageOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageOptions members

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数默认值，不指定时按默认值生效, 参数类型以实际返回为准，可能为integer,string或者boolean
    /// </summary>

    Object getDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(const Object& value);

    /// <summary>
    /// 参数生效方式  - static：节点创建时生效，后续不可修改 - immediately：节点运行中时可以修改，修改后生效 
    /// </summary>

    std::string getValidAt() const;
    bool validAtIsSet() const;
    void unsetvalidAt();
    void setValidAt(const std::string& value);

    /// <summary>
    /// 配置项是否可以为空  - true：配置项为空时，不使用默认值，为空值 - false：配置项为空时，使用默认值 
    /// </summary>

    bool isEmpty() const;
    bool emptyIsSet() const;
    void unsetempty();
    void setEmpty(bool value);

    /// <summary>
    /// 参数分类
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 参数类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object default_;
    bool defaultIsSet_;
    std::string validAt_;
    bool validAtIsSet_;
    bool empty_;
    bool emptyIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PackageOptions_H_
