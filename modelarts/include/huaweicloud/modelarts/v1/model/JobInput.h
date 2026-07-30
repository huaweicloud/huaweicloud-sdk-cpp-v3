
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobInput_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobInput_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业输入。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobInput
    : public ModelBase
{
public:
    JobInput();
    virtual ~JobInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobInput members

    /// <summary>
    /// 输入数据的名称，支持1到64位只包含英文、数字、下划线（_）和中划线（-）的字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 输入项类型。枚举值如下： - dataset：数据集 - obs：OBS - data_selector：数据选择
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 输入项数据。
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);

    /// <summary>
    /// 输入项的值。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    Object data_;
    bool dataIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobInput_H_
